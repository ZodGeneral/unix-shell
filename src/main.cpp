#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::string command;

        std::cout << "$ ";
        std::getline(std::cin, command);

        if (command == "exit")
        {
            break;
        }

        std::cout << "You entered: " << command << '\n';
    }

    return 0;
}