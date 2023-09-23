#include <stdio.h>
int main(){
int codigo,quantidade,continuar=1,valor=0,total=0,erro;
do
{
    printf("\nDigite o codigo da fruta que deseja:\n Codigo:\n 1 ABACAXI R$ 5,00\n 2 MACA R$ 1,00\n 3 PERA R$ 4,00\n");
    scanf ("%d",&codigo);

    switch (codigo){
    case 1:
        printf("\nAbacaxi\n");
        printf("Valor:R$ 5,00\n");
        valor=5;
        break;
    case 2:
        printf("\nMaca\n");
        printf("Valor:R$1,00\n");  
        valor=1;
        break;
    case 3:
        printf("\nPera\n");
        printf("Valor:R$4,00\n");  
        valor=4;
        break;
    default:
        erro=1;
        break;
}
    if (erro==1){
        printf("Houve um erro, valor fora dos parametros. Tente Novamente\n");
}
    else{
        printf("Qual a quantidade de itens?\n");
        scanf("%d",&quantidade);
        valor=valor*quantidade;
        total=total+valor;
}
printf("\nDeseja continuar?\n1-SIM\n2-NAO\n");
scanf("%d",&continuar);

} while (continuar==1);
printf ("\nO Valor final e: R$%d", total);
}
/*
6. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. 
Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. 
O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. 
Ao final, apresente o valor total da compra. 

1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade 
*/