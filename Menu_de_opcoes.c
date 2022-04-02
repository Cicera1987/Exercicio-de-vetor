Exercício 01 - Menu de opçoes com swicth.
	
/*Faça um programa que :
Tenha um menu com as seguintes funcionalidades;
1. Ler o vetor de 6 números inteiros
2. Exibir Os números pares digitados;
3. Exibir A soma dos números pares digitados;
4. Exibir Os números ımpares digitados;
5. A quantidade de números ımpares digitados*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){
    int op=0;
do{
printf("\n -> Menu de Opcoes <-\n");
printf("1 - Ler o vetor de 6 digitos inteiros: \n");
printf("2 - Exibir os numeros pares digitados: \n");
printf("3 - Exibir a soma dos numeros digitados: \n");
printf("4 - Exibir os numeros impares digitados: \n");
printf("5 - Exibir a quantidade de numeros impares digitados: \n");
printf("6 - Programa encerrado! \n");
scanf("%d%*c",&op);

switch(op){

case 1:{

int vetores[6];
int i;

    printf("Digite 6 numeros inteiros:\n");
for (i = 0; i < 6; i++){
    scanf("%d%*c",&vetores[i]);
}
    printf("\n");
for (int j = 0; j < 6; j++){
    printf(" Vetor informado: %d\n", vetores[j]);
}

break;
}


    case 2:{
int i = 0;
int h ;
int num [6]; 
int par[6];

    printf("Digite 6 numeros inteiros:\n");
for (h = 0; h < 6; h++){
	scanf(" %d ", &num [h]);
	if (num [h] % 2 == 0) par [i++] = num [h];

}
    printf("\n Numeros pares digitados: ");
for(h = 0; h < i; h++){
	printf(" %d ", par [h]);
}

           
break;
}

    case 3:{

   int numero[6];
   int i;
   int soma = 0;

        printf("Digite 6 numeros inteiros:\n");
    for (i = 0; i < 6; i++){
        scanf("%d%*c",&numero[i]);
    }
        printf("\n");

    for (int j = 0; j < 6; j++){
        printf(" Numero informado %d \n", numero[j]);
        soma = soma + numero[j];
    }
        printf(" A Somatoria dos numeros sera de :%d \n", soma);
      
break;
}
    case 4:{
    int i = 0;
    int h ;
    int num [6]; 
    int impar[6];

    printf("Digite 6 numeros inteiros:\n");
    for (h = 0; h <6; h++){
	scanf(" %d ", &num [h]);
	    if (num [h] % 2 == 1) impar [i++] = num [h];
}
    printf("\n Numeros impares digitados: ");
    for(h = 0; h < i; h++){
	printf(" %d ", impar [h]);
}

break;
}

    case 5:{

    int i;
    int num [6]; 
    int impar=0;

    printf("Digite 6 numeros inteiros: \n");
    for (i = 0; i < 6; i++){
        scanf("%d", &num[i]);
        if ( num [i] % 2==1){
            impar++;
        }
    }
    printf("Total de numeros impares: %d \n", impar);

break;
}
    case 6:{

        printf("Programa encerrado:\n ");
    
    return 0;

}
break;
}


}while (op!=6);

return 0;

}


