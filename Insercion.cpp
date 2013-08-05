#include <iostream>
using namespace std;

void insercion(int [],int);
void mostrar(const int[],int);

int main (int argc,char **argv)
{
	const int tam = 12;
	int vector[]={0,7,1,10,3,0,0,7,1,10,3,0};
	mostrar(vector,tam);
	insercion(vector,tam);
	mostrar(vector,tam);
	return 0;
}

void insercion(int vec[],int tam)
{
	for(int i=1;i<tam;i++)
	{
		int indice = i;
		int aux = vec[i];
			while(indice>0 && aux<vec[indice-1])
				{
					vec[indice]=vec[indice-1];cout<<"while ";
					mostrar(vec,tam); cout<<"indice->"<<indice<<", vec[indice]->"<<vec[indice]<<", aux->"<<aux<<endl;
					indice--;
				}
			vec[indice]=aux;
	}
} 	

void mostrar(const int vec[],int tam)
{
	for (int i =0;i<tam;i++)
	{
		cout<<vec[i]<<",";
	}
	cout<<endl;
}