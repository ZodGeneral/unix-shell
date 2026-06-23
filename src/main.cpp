#include <iostream>
#include <string>
#include <vector>
#include "tokenizer.h"
#include "argv_builder.h"

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

        auto argv = buildArgv(tokens);

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

        //else
        //{
        //    std::cout << "Unknown command\n";
        //    continue;
        //}

        size_t i = 0;

        for (; i < tokens.size(); ++i)
        {
            std::cout << "argument[" << i << "]: "
                      << tokens[i] << '\n';
        }

        std::cout << "\n";

        i = 0;

        while (argv[i] != nullptr)
        {
            std::cout << argv[i] << '\n';
            ++i;
        }
    }
    std::cout << "See you at the crossroads...\n";

    return 0;
}