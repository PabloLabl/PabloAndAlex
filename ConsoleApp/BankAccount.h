#pragma once
#include <iostream>

class BankAccount
{
	int Money;
	int IdCardCode[12];
	int IDbankAccount;
	int PinCode;

	
	int GetRandomNumber(int min, int max)
	{
		// ”становить генератор случайных чисел
		srand(time(NULL));

		// ѕолучить случайное число - формула
		int num = min + rand() % (max - min + 1);

		return num;
	}
public:
	
	BankAccount()
	{
		
		srand(time(NULL));
		
//		string KOd = "код банка" + другой код

	}
};

