#pragma once

class BankDll {


public:
	Bank Banks[9];

	void AddBank() {
		int lenght;
		lenght = sizeof(Banks) / sizeof(Banks[0]);

		for (int i = 0; i <= lenght; i++) {
			if (Banks[i] == NULL) {

			}
		}
	}
};