#include <iostream>

int main(int argc, char **argv) 
{
    char *current_part;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::ends;
    for (int i = 1; i < argc; i++)
    {
        current_part = argv[i];
        while (*current_part)
        {
            std::cout << (char) std::toupper(*current_part) << std::ends;
            current_part++;
        }
        if (i < argc - 1)
            std::cout << " " << std::ends;
    }
    std::cout << std::endl;
    return (0);
}
