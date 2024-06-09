#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    int         index;

    std::string _print_truncated_str(const std::string& str) const;

public:
    Contact(int index, 
            const std::string& firstname, 
            const std::string& lastname, 
            const std::string& nickname,
            const std::string& phone_number,
            const std::string& darkest_secret);

    void display_as_row() const;
    void display_full() const;
};

#endif // CONTACT_HPP
