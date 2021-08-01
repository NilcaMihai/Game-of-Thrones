#include "GOT.h"
#include <iostream>


bool estePalindrom(std::string& parola)
{	
	bool esteImpar = parola.length() % 2 == 1;
	for (int i = 0; i < parola.length() / 2; ++i)
	{
		if (parola[i] >= 'a' && parola[i] <= 'z')
		{
			int j;
			for (j = i + 1; j < parola.length() - i; ++j)
			{
				if (parola[i] == parola[j])
				{
					char temp = parola[parola.length() - i - 1];
					parola[parola.length() - i - 1] = parola[j];
					parola[j] = temp;
					break;
				}
			}
			if (j == parola.length() - i)
			{
				if (esteImpar == true)
				{
					char temp = parola[parola.length() / 2];
					parola[parola.length() / 2] = parola[i];
					parola[i] = temp;
					esteImpar == false;
					--i;
				}
				else
					return false;
			}
		}
		else
		{
			std::cout << "Nu ai respectat cerinta privind caracterele ce trebuie introduse!\n";
			return false;
		}
	}
	return true;
}
