#include <conio.h>
#include <iostream>
#include <Windows.h>
using namespace std;
using namespace System;

void Dibujar(int*x, int*y)
{
	Console::SetCursorPosition(*x,*y);
	Console::ForegroundColor = ConsoleColor::Cyan;
	cout << char(2);
}
void mover(int*x, int*y)
{
	Console::SetCursorPosition(*x, *y);
	cout << " ";
	int dx;
	dx = 1;
	if (*x < 80 && *y == 0)
	{
		*x = *x + dx;
	}
	if (*x == 80 && *y < 25)
	{
		*y = *y + dx;
	}
	if (*y == 25 && *x > 0)
	{
		*x = *x - 1;
	}
	if (*x==0&&*y>0)
	{
		*y = *y - dx;
	}
	Console::SetCursorPosition(*x,*y);
}
int main()
{
	int *X = new int;
	*X = 0;
	int *Y = new int;
	*Y = 0;
	Console::SetWindowSize(81, 26);
	while (1)
	{
		Dibujar(X, Y);
		_sleep(100);
		mover(X, Y);
		
	}
	_getch();
}