#include "tokenizer.h"

#include <sstream>
#include <vector>
#include <string>

std::vector<std::string> tokenize(const std::string& input)
{
    std::vector<std::string> tokens;
    std::stringstream ss(input);
    std::string token;

    while (ss >> token)
    {
        tokens.push_back(token);
    }

    return tokens;
}
