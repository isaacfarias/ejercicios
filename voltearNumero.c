# include <stdio.h>

int voltear(int num)
{
   if(num<10)
      return(num);
   else
   {
      int aux = num,i=1;
      while(aux>10)
      {
         i*=10;
         aux=aux/10;
      }
      return (i*(num%10))+voltear(num/10);
   }
}
int main ()
{
   int num;
   scanf("%d",&num);
   printf("%d\n",voltear(num));
}
