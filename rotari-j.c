# include <stdio.h>
#define TAM 10
void mostrar(char v[])
{
   int i=0;   
   for(i = 0;i<TAM;i++)
   {
      printf("%c  ",v[i]);
   }
   printf("\n");
}

void rotar(char v[],int i,int f)
{
   if(i!=f)
   {
      int aux = v[i+1];
      v[i+1] = v[i];
      v[i] = aux;
      rotar(v,i+1,f);
   }
}
int main()
{
   int i=0;
   char vec[10]={'a','b','c','d','e','f','g','h','i','j'};
   mostrar(vec);
   rotar(vec,0,1);
   mostrar(vec);
return 0;
}
