#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        void    _read_input() const;
        int     curr_idx;
    
    public:
        PhoneBook();
        ~PhoneBook();
        void    add_contact();
        void    search() const;
        void    welcome_msg() const;
        void    list_contacts() const;

};


#endif