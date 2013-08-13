/*
Archivo de ejemplo que muestra la sobrecarga de operadotes y templates
para usar codigo generico
Se define una clase cuadrilatero para demostrar los ejemplos

*/

#include <iostream>
#include <string>
using namespace std;

class Cuadrilatero{

private:
	float alto,ancho;


public:
	Cuadrilatero()
	{
		alto = 1;
		ancho = 1;
	}

	Cuadrilatero(float al,float an)
	{
		if(al <= 0)
		 	alto = 1;
		 else
		 	alto = al;
		if (an <= 0 )
			ancho = 1;
		else
			ancho = an;
	}

	//Sobrecarga de operadores
	
	Cuadrilatero operator + ( Cuadrilatero &derecha) 
	{
		Cuadrilatero ret(obtenerAlto()+derecha.obtenerAlto(),obtenerAncho()+derecha.obtenerAncho());
		return (ret);
	}

	bool operator < (Cuadrilatero &derecha)
	{
		if(obtenerArea()<derecha.obtenerArea())
			return true;
		else
			return false;
	}

	bool operator > (Cuadrilatero &derecha)
	{
		if(obtenerArea()>derecha.obtenerArea())
			return true;
		else
			return false;
	}

	bool operator <= (Cuadrilatero &derecha)
	{
		if(obtenerArea()<=derecha.obtenerArea())
			return true;
		else
			return false;
	}

	bool operator >= (Cuadrilatero &derecha)
	{
		if(obtenerArea()>=derecha.obtenerArea())
			return true;
		else
			return false;
	}

	bool operator == (Cuadrilatero &derecha)
	{
		if(obtenerArea()==derecha.obtenerArea())
			return true;
		else
			return false;
	}
	//metodos propios de la clase (get)
	float obtenerArea()
	{
		return (alto*ancho);
	}

	float obtenerAlto() 
	{
		return alto;
	}

	float obtenerAncho() 
	{
		return ancho;
	}
	//metodos propios de la clase (set)
	Cuadrilatero & setAlto(float alt)
	{
		if(alt<=0)
			alto = 1;
		else
			alto = alt;
		return (*this);
	}

	Cuadrilatero & setAncho(float anc)
	{
		if(anc<=0)
			ancho = 1;
		else
			ancho = anc;
		return (*this);
	}
};//Fin de cla clase Cuadrilatero

	//ToString con la sobrecarga del operador de flujo <<
ostream & operator << (ostream &strm, Cuadrilatero &c)
{
	return strm << "(" << c.obtenerAlto()<<", "<<c.obtenerAncho()<< "):: "<<c.obtenerArea();
}

//Funcion de insercion utilizando templates
template <class T>
void insercion(T arreglo[],const int tam)
{
	for (int i=1;i<tam;i++)
	{
		T aux = arreglo[i];
		int indice = i;
		while(indice > 0 && aux<arreglo[indice-1])
		{
			arreglo[indice]=arreglo[indice-1];
			indice--;
		}
		arreglo[indice]=aux;
	} 
}
//Funcion para imprimir un vector de elementos
template <class T>
void mostrar(T arreglo[],const int tam)
{
	for (int i=0;i<tam;i++)
	{
		cout<<arreglo[i]<<endl;
	}
	//cout<<endl;
}
/*
Definicion del main para probar que la clase, funciones y sobrecarga
de operadores funciona
*/

#include <cstdlib>
#include <ctime>
int main()
{

	const int tam = 1000;
	Cuadrilatero cuadrilateros[tam];
	srand(time(0));
	for (int i=0;i<tam;i++)
	{
		cuadrilateros[i] = Cuadrilatero(rand()%50+1,rand()%50+1);
	}
	mostrar(cuadrilateros,tam);
	insercion(cuadrilateros,tam);
	cout<<endl;
	mostrar(cuadrilateros,tam);
	return 0;
}