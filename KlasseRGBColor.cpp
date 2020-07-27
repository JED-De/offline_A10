#include <iostream>
#include "RGB_Color.h"
using namespace std;

int main()
{
	RGB_Color weiss(255, 255, 255);
	RGB_Color cyan(0);
	RGB_Color gelb(255, 255, 0);
	RGB_Color magenta(255, 0);
	cout << "Weiss:" << endl;
	weiss.display();
	cout << "Tuerkis:" << endl;
	cyan.display();
	cout << "Gelb:" << endl;
	gelb.display();
	cout << "Magenta:" << endl;
	magenta.display();
	RGB_Color farbe1(255, 255, 128);
	cout << endl << "Farbe 1:" << endl;
	farbe1.display();
	RGB_Color farbe2 = farbe1;
	cout << endl << "Farbe 2:" << endl;
	farbe2.display();
	cout << endl << "Neu-Eingabe von Farbe 2:" << endl;
	if (farbe2.input_color() == true)
	{
		cout << endl << "Farbe 2 jetzt:" << endl;
		farbe2.display();
	}
	else
		cout << "Falsche Eingabe!" << endl;

	system("PAUSE");
	return 0;
}