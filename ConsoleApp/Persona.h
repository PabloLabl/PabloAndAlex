#pragma once
#include <string>

class Persona
{
	//Данные о персоне
	string Name;
	string Pasport;
	string Home;

	int PersonaID;
	int Age;
	

public:


	Persona(string Name_, string Pasport_, string Home_, int Age_)
	{
		this -> Name = Name_;
		this -> Pasport = Pasport_;
		this -> Home = Home_;
		this -> Age = Age_;	
	}

	string getName()
	{
		return Name;
	}
	string getPasport()
	{
		return Pasport;
	}
	string getHome()
	{
		return Home;
	}
	int getAge()
	{
		return Age;
	}

	void setPersonaId(int ID) 
	{
		PersonaID = ID;
	}

};

