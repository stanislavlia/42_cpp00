#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->curr_idx = 0;
    for (int i = 0; i < 8; i++)
        this->contacts[i].set_index(i);
};

PhoneBook::~PhoneBook()
{

};

int PhoneBook::_read_input() const
{
    int idx = -1;
    bool    valid = false;

    while (!valid)
    {
        std::cout << "Enter index to display>>>";
        std::cin >> idx;
        if (std::cin.good() && (idx >= 0 && idx <= 8))
            valid = true;
        else
        {   
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Incorrect index, re-enter again" << std::endl;
        }
    }
    return idx;
};

void PhoneBook::list_contacts() const
{
    for (int i = 0; i < 8; i++)
        this->contacts[i].display_as_row();
}

void PhoneBook::add_contact()
{
    int idx = this->curr_idx % 8;
    this->contacts[idx].fill_data();
    this->contacts[idx].set_index(idx);
    this->curr_idx = (this->curr_idx + 1) % 8;
}

void PhoneBook::search() const
{
    int index;

    std::cout << "Here's the list of all contacts:" << std::endl;
    this->list_contacts();
    index = this->_read_input();
    std::cout << "Contact: " << std::endl;
    this->contacts[index].display_full();
};



// int main()
// {
//     PhoneBook book;

//     book.add_contact();
//     book.add_contact();
//     book.add_contact();
//     book.add_contact();
//     book.add_contact();
//     book.add_contact();
//     book.add_contact();
//     book.add_contact();
//     book.add_contact();
//     book.add_contact();
//     book.search();
    
// }
