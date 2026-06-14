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