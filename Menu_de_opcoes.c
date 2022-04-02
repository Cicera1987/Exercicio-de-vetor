01 Exercício - Menu de opçoes com swicth.
	
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

_____________________________________________________________________________
	
02 Exercicio com Array

char texto[50], inverso[50], nome[50], aux, encerrar;
int op;
int i, l, j, f;
int main(){

    printf("Menu de Opcoes\n\n");
    printf("1- Ordenar a palavra em ordem alfabetica\n");
    printf("2- Substituir a ordem da palavra\n");
    printf("3- Encerrar o programa\n");
    scanf("%i%*c",&op);

    switch (op){
    case 1:

        printf("Digite seu nome \n");
        gets(nome);
        aux = (strlen(nome));
        printf("Letras ordenadas \n");
        puts(nome);

        for(int x = 0; x <= strlen(nome); x++){
            for (int y = x +1; y <= strlen(nome); y++){
	            if(nome[x] > nome[y] && nome[y] != '\0'){
					char aux = nome[x];
					nome[x] = nome[y];
					nome[y] = aux;
                }
            }
    }

                printf(nome);
                printf("\n\n Valeu!!!!!");

                return 0;

       break;

    case 2:
        printf("Digite o texto: O TRABALHO FACIL. \n");
        gets(texto);
        l = strlen(texto);
        f=0;
        j = l -  1;

        for( int i = 0; i<l; i++){
	    inverso[i] = texto[j];
	    j = j - 1;
        if(texto [i] == ' '){
        texto[i] = '_';
        }   
        printf("%c", texto[i]);

        }
	    inverso[i] = '\0';

        printf(" \n %s", inverso);
        printf("\n\n Valeu!!!!!");

        return 0;

        break;

    case 3:

        printf(" \n Programa encerrado!");
        gets(encerrar);
    
    return 0;


        break;
    default:

        printf("opcao invalida!!!!\n");


    return 0;
    }
}
_________________________________________________________________________________________________

03 exercício

