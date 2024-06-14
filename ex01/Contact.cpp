#include "Contact.hpp"

Contact::Contact()
{

};

Contact::~Contact()
{

};

std::string Contact::_get_input(const std::string& str) const 
{
    std::cout << str;
    std::string field;
    std::cin >> field;

    return field;
}

void Contact::fill_data()
{   
    std::cout << "\nFill in data about your contact:" << std::endl;
    this->firstname = this->_get_input("Enter firstname >>>");
    this->lastname = this->_get_input("Enter lastname >>>");
    this->nickname = this->_get_input("Enter nickname >>>");
    this->phone_number = this->_get_input("Enter phone number >>>");
    this->darkest_secret = this->_get_input("Enter your darkest secret >>>");

};

void Contact::set_index(int i)
{
    this->index = i; 
}

std::string Contact::_print_truncated_str(const std::string& str) const 
{
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    } else {
        return std::string(10 - str.length(), ' ') + str;
    }
}

void Contact::display_as_row() const 
{
    std::cout << std::setw(10) << this->index << "|"
              << std::setw(10) << _print_truncated_str(this->firstname) << "|"
              << std::setw(10) << _print_truncated_str(this->lastname) << "|"
              << std::setw(10) << _print_truncated_str(this->nickname) << std::endl;
}

void Contact::display_full() const 
{
    std::cout << "CONTACT INDEX# : " << this->index << std::endl;
    std::cout << "First Name: " << this->firstname << std::endl;
    std::cout << "Last Name: " << this->lastname << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phone_number << std::endl;
    std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}


