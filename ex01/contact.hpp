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

    void    display_as_row();
    void    display_full();
    void    _print_truncated_str(const char *field);
};

#endif