#include <iostream>
#include <Windows.h>
#include "leaver.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите имя: ";
	std::string name;
	std::cin >> name;
	leaverlib::Leaver lvr;
	std::cout << lvr.leave(name) << "\n";
}
