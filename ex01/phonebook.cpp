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

void PhoneBook::_read_input() const
{
    //reads input and takes actions

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



int main()
{
    PhoneBook book;

    book.add_contact();
    book.add_contact();
    book.list_contacts();
}
