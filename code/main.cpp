#include <iostream>
using namespace std;

#include "TemplatePattern.h"

void main()
{
	CInfoTemplate* pPlayer = new CPlayer_A();
	if ( pPlayer == NULL )
		return;

	pPlayer->ShowPlayerInfo();;

	cout << "------------------------------------------" << endl;
	pPlayer = new CPlayer_B();
	pPlayer->ShowPlayerInfo();

	cout << "------------------------------------------" << endl;
	pPlayer = new CPlayer_C();
	pPlayer->ShowPlayerInfo();

	delete pPlayer;
	pPlayer = NULL;

	system("pause");
	return;
}