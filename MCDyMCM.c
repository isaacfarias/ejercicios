# include <stdio.h>

int MCD(int a,int b)
{
   if(b==0)
   {
      return a;
   }
   else
   {
      return MCD(b,a%b);
   }
}
int MCM(int a,int b)
{
   return (a*b)/MCD(a,b);
}

int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   printf("MCD %d\nMCM %d\n",MCD(a,b),MCM(a,b));
   return 0;
}
