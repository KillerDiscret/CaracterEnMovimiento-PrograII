#include <conio.h>
#include <iostream>
#include <Windows.h>
#include "Cuadrado.h"
using namespace std;
using namespace System;
int main()
{
	Cuadrado *objCuadrado;
	objCuadrado = new Cuadrado();
	Console::SetWindowSize(80,30);
	while (1)
	{
		objCuadrado->borrar();
		objCuadrado->mover();
		objCuadrado->imprimir();
		_sleep(100);


	}

}