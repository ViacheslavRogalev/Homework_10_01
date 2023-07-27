#include<iostream>
#include<string>
#include<windows.h>

int main(int argc, char** arcv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::string name;

    std::cout << "Введите имя: ";
    std::cin >> name;

    std::cout << "Здравствуйте, " << name << "!" << std::endl;
}