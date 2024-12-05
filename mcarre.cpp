#include"carre.h"

int main()
{
	CCarre c1;
	c1.Afficher();
	c1.Setsx(3);
	c1.Setsy(100);
	cout << "sx: " << c1.Getsx() << endl << "sy: " << c1.Getsy() << endl << "cote: " << c1.GetCote();

	

		return EXIT_SUCCESS;
}