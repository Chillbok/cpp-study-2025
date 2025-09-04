#include <iostream>
#include <string>

int main()
{
    std::cout << "당신의 이름은?";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "반갑습니다, " << name << "님!" << std::endl;
    return 0;
}