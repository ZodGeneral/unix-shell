#include "argv_builder.h"

std::vector<char*> buildArgv(std::vector<std::string>& tokens)
{
    std::vector<char*> argv;

    for (auto& token : tokens)
    {
        argv.push_back(token.data());
    }

    argv.push_back(nullptr);

    return argv;
}
