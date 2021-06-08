#include <iostream>

#include "lib/lib_src.h"

/**/
int main()
{
    const std::string inputString = "Lazy&Smart!!";
    std::string outputString;
    SanitizeToASCII(inputString, outputString);
    std::cout << "Input : \"" << inputString << "\" Output: \"" << outputString << "\"\n";        
    return 0;
}