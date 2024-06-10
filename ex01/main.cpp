#include "phonebook.hpp"


int main()
{
    std::string input = "";
    PhoneBook book;

    while (input.compare("EXIT"))
    {
        std::cout << ">>>";
        std::cin >> input;
        if (input.compare("ADD") == 0)
            book.add_contact();
        else if (input.compare("SEARCH") == 0)
            book.search();
    }
    return 0;
}