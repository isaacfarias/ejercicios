# include <stdio.h>
int suma(n)
{
    if(n==1)
        return 1;
    else
        return n+suma(n-1);
}
long int fibonacci(int num)
{
   if(num == 1||num == 0)
      return num;
   else
      return (fibonacci(num-1)+fibonacci(num-2));
}
int main ()
{
    int entrada;
    scanf("%i",&entrada);
    int resultado = 0, i;
    for(i=1;i<=entrada;i++)
    {
        resultado +=i;
    }
    printf("Iterativo %d\n",resultado);
    printf("Formula   %d\n",entrada*(entrada+1)/2);
    printf("Recursivo %d\n",suma(entrada));
    printf("Fibonacci %ld\n",fibonacci(entrada));
}
