#include <iostream>
#include <string>
 
int main()
{
    std::string s = "C++20";
    char c = 'C';
 
    int index = s.find(c);
 
    if (index != std::string::npos) {
        std::cout << "Character found at index " << index << std::endl;
    } else {
        std::cout << "Character not found" << std::endl;
    }

	std::cout <<s[0]<<std::endl;
    return 0;
}