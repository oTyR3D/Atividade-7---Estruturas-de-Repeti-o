#include <stdio.h>
int main(){
int numero=0,contador,resto;
printf("Digite um numero\n");
scanf ("%d",&contador);
while (contador!=0)
{
    numero=numero+1;
    resto=numero % 2;
    if (resto!=0)
    {
        printf("%d ",numero);
        --contador;
    }
    else
    {
        /* code */
    }
}
}
/*
3. Faça um programa que leia um número inteiro N
e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). 
*/