/*Programa: suma.cpp
Autor: Celio Andres Gonzalez Campuzano
Fecha:2023-09-14                                  Descripcion: suma de dos numeros*/

#include<iostream>
using namespace std;
float x,y,z;
int ingreso()
{                                                         cout<<"ingrese x ="; cin>>x;
        cout<<"ingrese y ="; cin>>y;
	return (0);
}
int salida()
{

        cout<<"La suma de "<<x<<"+"<<y<<"="<<z<<endl;
        return (0);
}
int main ()
{
	ingreso();
	z=x+y;
	salida();
	return(0);
}
