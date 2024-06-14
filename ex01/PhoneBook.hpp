#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <limits>

class PhoneBook
{
    private:
        Contact contacts[8];
        int    _read_input() const;
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