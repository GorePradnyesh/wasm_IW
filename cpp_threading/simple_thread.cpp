#include <iostream>
#include <thread>
#include <algorithm>
#include <chrono>
#include <cctype>
#include <iostream>

namespace 
{
    void MakeStrUpper(std::string& inString)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::transform(
            inString.begin(), inString.end(),
            inString.begin(),
            [](unsigned char c) -> unsigned char { return std::toupper(c); });
    }

}

int main()
{
    std::string inputString = "AlTeRnATiNg CaSe StRiNg";
    
    std::thread threaded_task(MakeStrUpper, std::ref(inputString));
    std::cout << "Task Dispatched \n" << std::endl;
    threaded_task.join();

    std::cout << "Transformed String: " << inputString << "\n";

    return 0;
}