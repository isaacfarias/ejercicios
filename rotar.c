#include <stdio.h>
int tam = 10;

void mostrar(int v[])
{
   int i;
   for (i = 0;i<tam;i++)
   {  
      printf("%d ",v[i]);   
   }
}
void voltear(int v[],int i)
{
//printf("i->%d tam->%d\n",i,tam);
   if(i!=tam-1)
   {
      int aux = v[i];
      v[i]  = v[i+1];
      v[i+1] = aux;
      voltear(v,i+1);
   }
}
int main()
{
   int vec[tam];
   mostrar(vec);
   voltear(vec,0);printf("\n");
   mostrar(vec);   
}
