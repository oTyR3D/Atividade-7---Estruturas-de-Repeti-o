 #include <stdio.h>
int main(){
int numero=0,contador=0,resto,total;
while (contador!=50){
    numero=numero+1;
    resto=numero % 2;
    if (resto==0)
    {
        printf("%d + %d\n",total,numero);
        total=total+numero;
    }
    ++contador;
}
printf ("O total e: %d",total);
}

/*5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */

