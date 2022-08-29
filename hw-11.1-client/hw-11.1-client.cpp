#include <iostream>
#include <Windows.h>
#include "greeter.h"



int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
    std::cout << "Введите имя: ";
	std::string name;
	std::cin >> name;
	greetlib::Greeter gr;
	std::cout << gr.greet(name) << "\n";
}
