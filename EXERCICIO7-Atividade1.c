#include <stdio.h>
int main(){
int numero,contador=0;
printf("Digite um numero\n");
scanf ("%d",&numero);
while (contador<=numero)
{
    printf("%d, ",contador);
    ++contador;
}
  return 0;
}


/*Faça um programa que leia um número inteiro positivo N e 
imprima todos os números naturais de 0 até N em ordem crescente. */