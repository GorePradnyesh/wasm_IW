#include <fstream>
#include <iostream>
#include <array>

int main()
{
    const char* preloadedFilePath = "preload_dir/input.txt";
    const std::int32_t blockSize = 1024;
    std::array<char, 1024> readBuffer = {'\0'};
    
    std::ifstream readFile(preloadedFilePath);
    if(readFile.is_open())
    {
        readFile.seekg(0, std::ios::beg);
        readFile.read(readBuffer.data(), blockSize);
        readFile.close();
    }
    else
    {
        std::cout << "Failed to open file " << preloadedFilePath << std::endl;    
    }

    std::cout << "Content : " << std::string(readBuffer.data()) << std::endl;

    return 0;
}