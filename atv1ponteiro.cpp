#include<stdio.h>


//Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba o maior endere�o.

int main(){
	int *n1, *n2;
	

	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero");
	scanf("%d", &n2);

	if(n1 > n2){
		printf("O maior numero eh %d", n1);
	}else{
		printf("O maior numero eh: %d ", n2);
	}
}
