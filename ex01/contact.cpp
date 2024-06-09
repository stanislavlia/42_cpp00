#include "contact.hpp"

size_t ft_strlen(const char *str)
{
    size_t length = 0;
    while (str[length] != '\0')
        ++length;
    return length;
}

Contact::Contact(int index,
            char *firstname, 
            char *lastname, 
            char *nickname,
            char *phone_number,
            char *darkest_secret):

            index(index), firstname(firstname), lastname(lastname),
            nickname(nickname), phone_number(phone_number), darkest_secret(darkest_secret) {}


void Contact::_print_truncated_str(const char *field)
{
    size_t len = ft_strlen(field);

    if (len < 10)
    {
        for (size_t i = 0; i < 10 - len; ++i)
        {
            std::cout << " ";
        }
        std::cout << field;
    }
    else
    {
        for (size_t i = 0; i < 9; ++i)
        {
            std::cout << field[i];
        }
        std::cout << ".";
    }
    std::cout << "|";
}

void Contact::display_as_row()
{   
    //to print index 
    char index_str[2];
    index_str[0] = '0' + this->index;
    index_str[1] = '\0';

    this->_print_truncated_str(index_str);
    this->_print_truncated_str(this->firstname);
    this->_print_truncated_str(this->lastname);
    this->_print_truncated_str(this->nickname);  
    std::cout << std::endl;
}

void Contact::display_full()
{
    std::cout << "Index: " << this->index << std::endl;
    std::cout << "First Name: " << this->firstname << std::endl;
    std::cout << "Last Name: " << this->lastname << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phone_number << std::endl;
    std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}



int main()
{
    // Create two instances of Contact
    Contact contact1(1, (char *)"John", (char *)"Doe", (char *)"Johnny", (char *)"123-456-7890", (char *)"Afraid of spiders");
    Contact contact2(2, (char *)"Jane", (char *)"Smith", (char *)"Janie", (char *)"987-654-3210", (char *)"Can't swim");



    contact1.display_as_row();
    contact2.display_as_row();
    contact1.display_as_row();

    contact2.display_full();

    return 0;
}