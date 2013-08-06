#include <iostream>

using std::cout;
using std::endl;
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
template <class T>
void mostrar(T arreglo[],const int tam)
{
	for (int i=0;i<tam;i++)
	{
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	const int tam = 10;
	int v1[tam]={2,6,9,2,5,8,1,0,3,8};
	float v2[tam]={1.5,34.7,3,7,8.1,9.7,2,5.2,7,8.4};

	mostrar(v1,tam);
	insercion(v1,tam);
	mostrar(v1,tam);
	mostrar(v2,tam);
	insercion(v2,tam);
	mostrar(v2,tam);

	return 0;
}