# include <stdio.h>
int primero(int);
int main ()
{
   int entrada;
   scanf("%d",&entrada);
   printf("%d\n",primero(entrada));
}

int primero(int e)
{
   if(e<10)
      return e;
   else
      return primero(e/10);
}
