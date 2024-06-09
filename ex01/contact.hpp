#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class Contact
{
    private:
        char *phone_number;
        char *darkest_secret;

    public:
        int index;
        char *firstname;
        char *lastname;
        char *nickname;
    
    Contact(int index,
            char *firstname, 
            char *lastname, 
            char *nickname,
            char *phone_number,
            char *darkest_secret);

    void    display();
    void    _print_truncated_str(const char *field);
};

#endif