#include <stdio.h>
#include <string.h>
int main(){int totalHabitantes=0,totalM=0,totalF=0,totalEspecifico=0,idade;
char sexo,olhos,cabelos;
float salario,porcentagem;

do{
    totalHabitantes++;
    do{
    printf("\nDigite o sexo:");
    scanf("%c", &sexo);
    fflush (stdin);
    if (sexo== 'm'){
        printf ("\nSEXO: MASCULINO ");
        totalM++;
    }
    else if (sexo== 'f'){
        printf ("\nSEXO: FEMININO ");
        totalF++;
    }
    else{
        printf ("\nOpcao invalida tente novamente");

    }
    
    
    } while (sexo!= 'm' && sexo!= 'f');

   do{ //apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’
    printf("\nDigite a cor dos olhos:");
    fflush (stdin);
    scanf("%c", &olhos);
    if (olhos== 'a'){
        printf ("\nolhos: AZUIS ");
    }
    else if (olhos== 'v'){
        printf ("\nolhos: VERDES ");
    }
    else if (olhos== 'c'){
        printf ("\nolhos: CASTANHOS ");
    }
    else if (olhos== 'p'){
        printf ("\nolhos: PRETOS ");
    }
    else{
        printf ("\nOpcao invalida tente novamente");

    }
    } while (olhos!= 'a' && olhos!= 'v' && olhos!= 'c' && olhos!= 'p');


       do{ //para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’
    printf("\nDigite a cor dos cabelos:");
    fflush (stdin);
    scanf("%c", &cabelos);
    if (cabelos== 'l'){
        printf ("\ncabelos: LOIROS ");
    }
    else if (cabelos== 'c'){
        printf ("\ncabelos: CASTANHOS ");
    }
    else if (cabelos== 'p'){
        printf ("\ncabelos: PRETOS ");
    }
    else if (cabelos== 'r'){
        printf ("\ncabelos: RUIVOS ");
    }
    else{
        printf ("\nOpcao invalida tente novamente");

    }
    } while (cabelos!= 'l' && cabelos!= 'c' && cabelos!= 'p' && cabelos!= 'r');

       do{  //para idade entre 10 e 100 anos não aceitar valores negativos.
    printf("\nDigite a idade:");
    fflush (stdin);
    scanf("%d", &idade);
    if (idade> 10 && idade<100 ){
        printf ("\nIDADE: %d ",idade);
    }
    else{
        printf ("\nOpcao invalida tente novamente");

    }
    } while ( idade< 10 || idade>100 );

    do{  //para salario não aceitar valores negativos.
    printf("\nDigite o salario:");
    fflush (stdin);
    scanf("%f", &salario);
    if (salario>0 ){
        printf ("\nSALARIO: %.2f ",salario);
    }
    else{
        printf ("\nOpcao invalida tente novamente");

    }
    } while ( salario<0 );
    if (sexo=='f' && idade>=18 && idade<=35 && olhos=='c' && cabelos=='c')
    {
        totalEspecifico++;
    }
    printf("\nDigite 1 para continuar ou -1 para finalizar");
    scanf("%d",&idade);
} while (idade!=-1);


porcentagem=(float)totalEspecifico/totalHabitantes*100;
printf("\nTotal Habitantes: %d",totalHabitantes);
printf("\nTotal Habitantes F: %d",totalF);
printf("\nTotal Habitantes M: %d",totalM);
printf("\nTotal Especifico: %d",totalEspecifico);
printf("\nTotal Porcentagem: %f%%",porcentagem);
}