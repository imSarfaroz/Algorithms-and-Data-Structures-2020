#include <iostream>
#include <string>

using namespace std;

main()
{
    std::string name;
    std::getline(std::cin, name);

        std::cout << "Thank you, " << name << ", and farewell";
}