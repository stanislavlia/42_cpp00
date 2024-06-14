#include <iostream>

int main(int argc, char **argv) 
{
    std::string current_part;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::ends;
    for (int i = 1; i < argc; i++)
    {
        current_part = argv[i];
        for (int j = 0; j < current_part.length(); j++)
            std::cout << (char) std::toupper(current_part[j]);
        std::cout << ' ';
    }
    std::cout << std::endl;
    return (0);
}

