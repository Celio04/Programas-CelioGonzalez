// programa: Mescla de Sumas
// archivo: suma3GonzalezaCelio.cpp
// autor: Celio Andres Gonzalez Campuzano
// fecha creacion: 2023-09-18
/* descripcion: Este programa combina las 3 verciones de suma utilizando funciones*/

#include<iostream>
using namespace std;
float suma(float x,float y);
float suma2(float x,float y);
float sumaN(int l);

int main ()
{
	float s1,s2,s3;
	s1=suma(3,4);
	s2=suma2(5,6);
	s3=sumaN(5);
	return (0);

}
float suma(float x,float y)
{
	return (x+y);
}

float suma2(float a,float b)
{
	float c;
	c=a+b;
	return (0);
}

float sumaN(int l)
{
	float x,s=0;
	int i=0;
	do{
		cout<<"ingrese x: "; cin>>x;
		i=i+1;
		s=s+x;
	}while (i<l);
	return (s);
}






