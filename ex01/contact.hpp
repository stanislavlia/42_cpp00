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
    std::string _get_input(const std::string str) const;

public:
    Contact();
    ~Contact();

    
    void display_as_row() const;
    void display_full() const;
    void set_index(int i);
    void fill_data();
};

#endif // CONTACT_HPP
