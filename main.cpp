#include<iostream>
#include<string>
#include<windows.h>

int main(int argc, char** arcv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::string name;

    std::cout << "������� ���: ";
    std::cin >> name;

    std::cout << "������������, " << name << "!" << std::endl;
}