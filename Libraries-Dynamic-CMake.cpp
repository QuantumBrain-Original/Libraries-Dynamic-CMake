#include <iostream>
#include <string>
#include <Windows.h>
#include "ByeUser_Dynamic_CMake.h"

int main() // Задача 3. Динамическая библиотека CMake
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	Leaver user;
	user.leave(name);
	system("pause");
}
