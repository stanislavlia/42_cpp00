#include "contact.hpp"

Contact::Contact(int index,
            char *firstname, 
            char *lastname, 
            char *nickname,
            char *phone_number,
            char *darkest_secret):

            index(index), firstname(firstname), lastname(lastname),
            nickname(nickname), phone_number(phone_number), darkest_secret(darkest_secret) {}


void Contact::display()
{
    std::cout << "Index: " << index << std::endl;
    std::cout << "First Name: " << firstname << std::endl;
    std::cout << "Last Name: " << lastname << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

int main()
{
    // Create two instances of Contact
    Contact contact1(1, (char *)"John", (char *)"Doe", (char *)"Johnny", (char *)"123-456-7890", (char *)"Afraid of spiders");
    Contact contact2(2, (char *)"Jane", (char *)"Smith", (char *)"Janie", (char *)"987-654-3210", (char *)"Can't swim");

    // Display contact information
    contact1.display();
    contact2.display();

    return 0;
}