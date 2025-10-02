#include <iostream>
#include <limits>

int main()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find a newline
    std::cin.get();
    std::cout << "Hello, world!";
    return 0;
}