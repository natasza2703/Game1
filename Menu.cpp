#include "Menu.h"
#include "Game.h"
void Menu()
{
	system("cls");
	cout << "WITAJ W GRZE!" << endl;
	cout << "Aby rozpoczac wcisnij przycisk spacji" << endl;
	cout << "Sterowanie odbywa sie przy pomocy strzalek" << endl;
	int press = _getch();
	if (press == ' ')
	{
		Beep(400, 500);
		while (true)
		{
			newGame();
		}
	}

}