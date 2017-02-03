#include <iostream>

const int NAME_LEN = 30;

int main()
{
    char *name = new char[NAME_LEN];
    std::cout << "please inputs your name" << std::endl;
    std::cin.getline(name, NAME_LEN);
    
    std::cout << std::endl << "Hello, " << *name << "!" << std::endl;
    
    delete[] name;
    return 0;
}