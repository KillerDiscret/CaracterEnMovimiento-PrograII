#pragma once
#include <iostream>
#include <conio.h>
#include<Windows.h>
using namespace std;
using namespace System;
class Cuadrado
{
private:
	int x, y,direccion;
	int color;
public:
	Cuadrado();
	~Cuadrado();
	void set_X(int X);
	void set_Y(int Y);
	void set_COLOR(int COLOR);
	int get_X();
	int get_Y();
	int get_COLOR();
	void borrar();
	void mover();
	void imprimir();
};
Cuadrado::Cuadrado()
{
	x = 0;
	y = 0;
	direccion = 0;
}
void Cuadrado::set_X(int X)
{
	this->x = X;
}
void Cuadrado::set_Y(int Y)
{
	this->y = Y;
}
void Cuadrado::set_COLOR(int COLOR)
{
	this->color = COLOR;
}
int Cuadrado::get_X()
{
	return x;
}
int Cuadrado::get_Y()
{
	return y;
}
int Cuadrado::get_COLOR()
{
	return color;
}
void Cuadrado::borrar()
{
	Console::SetCursorPosition(x,y);
	cout << " ";
}
void Cuadrado::mover()
{
	if (x == 0 && y == 0) direccion = 0;
	if (x == 79 && y == 0)direccion = 1;
	if (x == 79 && y == 30)direccion = 2;
	if (x == 0 && y == 30) direccion = 3;
	if (direccion == 0) x++;
	if (direccion == 1)y++;
	if (direccion == 2)x--;
	if (direccion == 3)y--;

}
void Cuadrado::imprimir()
{
	Console::SetCursorPosition(x,y);
	cout << (char)219;
}
Cuadrado::~Cuadrado()
{

}