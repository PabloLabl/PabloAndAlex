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
		// ���������� ��������� ��������� �����
		srand(time(NULL));

		// �������� ��������� ����� - �������
		int num = min + rand() % (max - min + 1);

		return num;
	}
public:
	
	BankAccount()
	{
		
		srand(time(NULL));
		
//		string KOd = "��� �����" + ������ ���

	}
};

