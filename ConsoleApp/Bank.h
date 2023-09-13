#include <string>
#include <list>
#include "Persona.h"
using namespace std;

class Bank
{
public:
	string NameBank;
	string Owner; 
	int IDBank;

	long Revue;

	//Участиники
	Persona Particpants[999999];


	Bank(string NameBank, string Owner, int IDBank) {
		this->NameBank = NameBank;
		this->Owner = Owner;
		this->IDBank = IDBank;
	}


	void GivePersonID() {
		int lenght;
		lenght = sizeof(Particpants) / sizeof(Particpants[0]);

		for (int i = 0; i < lenght; i++) {
			Particpants[i].setPersonaId(i);
		}
	}

	Persona FindParticpants(int IDPerson) {
		int lenght;
		lenght = sizeof(Particpants) / sizeof(Particpants[0]);

		for (int i = 0; i < IDPerson; i++){
			if (i == IDPerson) {
				return Particpants[i];
				break;
			}
		}
	}

};

