#pragma once
#include<iostream>
using namespace std;
class CCarre
{
private:
	int sx; //coordonn�e en x
	int sy; //coordonn�e en y
	unsigned int cote;
public:
	void Setsx(int sx1);

	void Setsy(int sy1);

	void Setcote(unsigned int cote1);

	void Afficher();

	int Getsx();

	int Getsy();

	int GetCote();
};
