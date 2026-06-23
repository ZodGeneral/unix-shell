#include <iostream>
#include <string>
#include <vector>
#include "tokenizer.h"
int main()
{
    std::string command;

    std::cout << "You approach a crossroad...\n";

    while (true)
    {

        std::cout << "crsh> ";

        if (!std::getline(std::cin, command))
        {
            std::cout << "\n";
            break;
        }

        auto tokens = tokenize(command);

        if (tokens.empty())
        {
            continue;
        }

        if (tokens.front() == "exit")
        {
            break;
        }

        else if (tokens.front() == "help")
        {
            std::cout << "Crossroads Shell\n\nBuilt-in commands:\n\thelp\n\tversion\n\texit\n";
            continue;
        }

        else if (tokens.front() == "version") {
            std::cout << "Crossroads Shell\nVersion 0.0.1\n";
            continue;
        }

        else
        {
            std::cout << "Unknown command\n";
            continue;
        }

        for (size_t i = 0; i < tokens.size(); ++i)
        {
            std::cout << "argument[" << i << "]: "
                      << tokens[i] << '\n';
        }

        std::cout << "\n";
    }
    std::cout << "See you at the crossroads...\n";

    return 0;
}