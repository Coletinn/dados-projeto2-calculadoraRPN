/*
Gustavo Coleto de Freitas 32076541
João Vitor Teles Centrone 32033125
*/

#include <iostream>
#include <sstream>
#include "DynamicStack.h"
#include <clocale>

using namespace std;

float Math(const std::string& input, DynamicStack& stack);


int main()
{
	setlocale(LC_ALL, "portuguese");
	DynamicStack stack = Create();

	while (true)
	{
		std::cout << "> ";
		
		float res = 0;
		std::string input;
		std::getline(std::cin, input);

		if (input == "0")
		{
			std::cout << "Fim.";
			break;
		}

		std::istringstream iss(input); // Passa o input para um istringstream.
		std::string str;

		std::cout << str;

		while (iss >> str)
		{
			try
			{
				float value = std::stof(str);
				Push(stack, value);
			}
			catch (std::invalid_argument e)
			{
				res = Math(str, stack);
			}
		}
		if (res != NULL)
		{
			std::cout << res << "\n\n";
		}
		else 
		{
			std::cout << "\nErro na expressão.\n\n";
		}
	}
}



float Math(const std::string& input, DynamicStack& stack)
{
	float v2 = Top(stack);
	v2 = Pop(stack);

	float v1 = Top(stack);
	v1 = Pop(stack);

	float result = 0;

	if (input == "-")
	{
		result = v1 - v2;
		Push(stack, result);
	}
	else if (input == "+")
	{
		result = v1 + v2;
		Push(stack, result);
	}
	else if (input == "*")
	{
		result = v1 * v2;
		Push(stack, result);
	}
	else if (input == "/")
	{
		result = v1 / v2;
		Push(stack, result);
	}
	
	return result;
}
