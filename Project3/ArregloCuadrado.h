#pragma once
#include"Cuadrado.h"
class ArregloCuadrado
{
private:
	Cuadrado**arreglo;
	int *N;
public:
	ArregloCuadrado();
	void AgregarCuadrado(Cuadrado *obj);
	Cuadrado*obtenerCuadrado(int indice);
	~ArregloCuadrado();

};
ArregloCuadrado::ArregloCuadrado()
{
	arreglo = NULL;
	N = new int;
	*N = 0;
}
void ArregloCuadrado::AgregarCuadrado(Cuadrado *obj)
{
	Cuadrado**temporal;
	temporal = new Cuadrado*[*N + 1];
	if (temporal!=NULL)
	{
		for (int i=0; i<*N;i++)
		{
			temporal[i] = arreglo[i];
			temporal[*N] = obj;
			*N = *N + 1;
			arreglo = temporal;
		}
	}
}
Cuadrado* ArregloCuadrado::obtenerCuadrado(int indice)
{

}


ArregloCuadrado::~ArregloCuadrado()
{

}