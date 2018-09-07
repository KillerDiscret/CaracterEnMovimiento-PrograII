// ya está incluido en el otro .h #include <conio.h>
//#include <iostream>
#include <Windows.h>
#include "Cuadrado.h"
#include "ArregloCuadrado.h"
#define A 97
//using namespace std;
//using namespace System;
int main()
{
	Cuadrado *objCuadrado;
	ArregloCuadrado *objArregloCuadrado;
	//intaciamos los objetos
	objCuadrado = new Cuadrado();//al instanciar se ejecuta el constructor
	objArregloCuadrado = new ArregloCuadrado();//al instanciar se ejecuta el constructor
	objArregloCuadrado->AgregarCuadrado(objCuadrado);//agregar un obj al cuadrado
	
	
	Console::SetWindowSize(82,30);

	while (1)
	{
		
		
			for (int i = 0; i<objArregloCuadrado->get_N(); i++)
			{

				objCuadrado = objArregloCuadrado->obtenerCuadrado(i);
				objCuadrado->borrar();
				objCuadrado->mover();
				objCuadrado->imprimir();

			}
			//VERIFICA SI SE PRESIONA LA TECLA A
			if (_kbhit())//Verifica si se ha pulsado una tecla
			{
				char tecla = _getch();
				if (tecla == A)
				{
					objCuadrado = new Cuadrado();
					objArregloCuadrado->AgregarCuadrado(objCuadrado);
				}

			}
			_sleep(100);
	}
	return 0;
}