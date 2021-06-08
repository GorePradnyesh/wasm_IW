#include "lib_src.h"

#include <algorithm>
#include <cctype>

namespace
{
    bool isNotAlphaNum(char c)
    {
        return !std::isalnum(c);
    }
}

void SanitizeToASCII(
    const std::string& inString,
    std::string& outString)
{
    outString = inString;
    auto glambda = [](char c) { return !std::isalnum(c); };
    std::replace_if(
        outString.begin(), 
        outString.end(),
        glambda,
        '_');
}