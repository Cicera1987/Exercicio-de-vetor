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

03 exercício com if  else else if.

/*Elaborar programa que lê dois números quaisquer e mostra na tela u
indicando qual é o maior, ou se são iguais.*/

main(void)
    {
    int num1, num2;
    printf(" Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf(" Digite o segundo numero:\n");
    scanf("%d", &num2);
    if ((num1 == num2))
    printf("Os numeros sao iguais\n");
    else if (num1 < num2)
    printf("O Segundo numero eh o maior\n");
    else
    printf("O primeiro numero eh maior\n");

    
        printf("Thank you very much and see you next time. \n");
        printf("___________________________________________\n");

    return 0;
}

_________________________________________________________________________________________________

2° opção de modelo.
	
/*Elaborar programa que lê dois números quaisquer e mostra na tela uma mensage
indicando qual é o maior, ou se são iguais.*/

main(void)
    {
   float n1, n2;

		printf("Digite o primeiro numero:\n ");
			scanf("%d", &n1);
		printf("Digite o segundo numero:\n ");
			scanf("%d", &n2);

        if((n1==n2))
        	printf("Os numeros digitados sao iguais: \n");
        
        else if(n1 > n2)
			printf("O Primeiro numero digitado eh o maior:\n ");	
        else
			printf("O Segundo numero digitado eh o maior:\n ");	
		
            printf("Thank you very much and see you next time. \n");
            printf("___________________________________________\n");

    return 0; 
    }  

___________________________________________________________________________________________

04 exercício 
	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    float salarioAtual, bonus, reajuste, aux1, aux2;
    int qtd;
    
    printf ("Informe quantos funcionarios a empresa possui \n");
    scanf ("%d%*c", &qtd);
    
    for (int i=0; i<qtd; i++){   
    printf("Informe o salario do funionario: \n");
    scanf("%f%*c",&salarioAtual);

    if ((salarioAtual >=0) && (salarioAtual <=500)){
      aux1 = 150;
      bonus = salarioAtual * 0.05;
      reajuste = salarioAtual + bonus + aux1;
      printf("Salario atual R$ %.2f \n", salarioAtual);
      printf("Bonus obtido de 5 por cento R$ %.2f \n", bonus);
      printf("Salario reajustado mais auxilio R$ %.2f \n", reajuste);

    }else if ((salarioAtual > 500) && (salarioAtual <=1200)){
      aux2 = 100;
      bonus = salarioAtual * 0.12;
      reajuste = salarioAtual + bonus + aux2;
      printf("Salario atual R$ % .2f \n", salarioAtual);
      printf("Bonus obtido de 12 por cento R$ %.2f \n", bonus);
      printf("Salario reajustado mais auxilio R$ %.2f \n", reajuste);
     
    }else if (salarioAtual > 1200){
      aux2 = 100;
      reajuste = salarioAtual + aux2;
      printf("Salario atual R$ % .2f \n", salarioAtual);
      printf("Salario reajustado mais auxilio R$ %.2f \n", reajuste);
    }
}
return 0;
}

_________________________________________________________________________________________________
05 exercício

#include <stdio.h>
#include <string.h>

int main (){
	
	int i, qtd;
	float notas[10];
	float soma=0;
	float media;
	
	printf ("Digite a quantidade de notas que serao digitadas \n");
	scanf ("%d%*c", &qtd);
	
	for (i=0; i<qtd; i++){
		printf ("Digite a nota numero %d \n", i+1);
		scanf ("%f%*c", &notas[i]);
		soma=soma+notas[i];
	}
	
	media=soma/qtd;
	printf ("%.2f eh o valor da media \n \n", media);
	
	for (i=0; i<qtd; i++){
		if (notas[i]>media){
			printf ("%.2f esta acima da media \n", notas[i]);
		} else {}
	}
	
	for (i=0; i<qtd; i++){
	if (notas[i]<media){
			printf ("%.2f esta abaixo da media \n", notas[i]);
		}
	}
	return 0;
}
___________________________________________________________________________________________

06 exercício

#include <stdio.h>
#include <string.h>

int main(){

	char nome[30];
	float vetornotas[10];
	char vetornomes[10][30];
	int i, qtdalunos=10;
	float nota, media;
	float total = 0;

	printf ("Separar nomes compostos com underline '_' \n \n");
	
	for(i=0; i<qtdalunos; i++){
    printf ("Digite o nome do aluno %d \n", i+1);
	scanf("%s",vetornomes[i]);
	printf("Informe a nota do aluno %d:\n", i+1);
    scanf ("%f%*c", &nota);
    vetornotas[i]=nota;
    total=total+vetornotas[i];
    }
    media=total/qtdalunos;
    printf("A media eh%.2f", media);

    for (i=0; i<qtdalunos; i++){
        if (vetornotas[i]>media){
            printf("A nota do aluno %s esta acima da media \n",vetornomes[i]);
        }
    }

    return 0;
}

_________________________________________________________________________________________________________

07 exercício

#include <stdio.h>

int main()
{
    int i, j;
    int vetor[10];
    
	for (i=0; i<10; i++){
    printf("Digite os numeros para o vetor \n");
    scanf("%d%*c", &vetor[i]);
    }
    
    for (j=9; j>=0; j--)
    {
        printf("%d \n", vetor[j]);
    }
    return 0;
}
______________________________________________________________________________________

08 exercício

#include <stdio.h>
int main() 
{
    int i;
    int tel[50];
    char nome[100][50];
    char buscanome[50];
    
    printf ("Nao repita nomes, ou use underline '_' para separa-los: \n");
    printf ("Quantas pessoas serao cadastradas? \n");
    scanf("%d", &i);
    
    for (int x=0; x<i; x++){
        printf("Cadastre o nome da pessoa numero %d: \n", x+1);
        scanf("%s%*c", nome[x]);
        printf("Cadastre o telefone da pessoa numero %d: \n", x+1);
        scanf("%d%*c", &tel[x]);
    }
    
    printf ("REALIZACAO DE CONSULTA \n \n");
    printf("DIGITE O NOME DO CLIENTE: \n");
    scanf("%s", buscanome);
    for (int x=0; x<i; x++){
        if (strcmp(buscanome, nome[x])==0){
		printf("Contato do cliente %s \n", buscanome);                                 
        printf("Telefone -: %d\n", tel [x]);
        } 
	}
    return 0;
}
