#include "contact.hpp"

// Constructor implementation
Contact::Contact(int idx, const std::string& fname,
                 const std::string& lname, 
                const std::string& nname, const std::string& phone,
                 const std::string& secret)
    : index(idx), firstname(fname), lastname(lname), nickname(nname), phone_number(phone), darkest_secret(secret) {}

std::string Contact::_print_truncated_str(const std::string& str) const {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    } else {
        return std::string(10 - str.length(), ' ') + str;
    }
}

void Contact::display_as_row() const {
    std::cout << std::setw(10) << this->index << "|"
              << std::setw(10) << _print_truncated_str(this->firstname) << "|"
              << std::setw(10) << _print_truncated_str(this->lastname) << "|"
              << std::setw(10) << _print_truncated_str(this->nickname) << std::endl;
}

void Contact::display_full() const {
    std::cout << "CONTACT INDEX# : " << this->index << std::endl;
    std::cout << "First Name: " << this->firstname << std::endl;
    std::cout << "Last Name: " << this->lastname << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phone_number << std::endl;
    std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}


int main() {
    // Create two instances of Contact
    Contact contact1(1, "John", "Doe", "Johnny", "123-456-7890", "Afraid of spiders");
    Contact contact2(2, "Jane", "Smith", "Janie", "987-654-3210", "Can't swim");

    contact1.display_as_row();
    contact2.display_as_row();

    std::cout << "\nContact 1 full details:\n";
    contact1.display_full();

    std::cout << "\nContact 2 full details:\n";
    contact2.display_full();

    return 0;
}