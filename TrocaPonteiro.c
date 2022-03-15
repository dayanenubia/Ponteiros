#include <stdio.h>
// Conceito de passagem de valor por referencia.

void trocaRef(int *a, int *b)
{
	int temp;
	//Invertendo os valores
	temp = *a;
	*a = *b;
	*b = temp;
	printf("*** Funcao ***\n");
	printf("A=%d B=%d\n",*a,*b);
}

int main(){
	int a,b;
	printf("Entre com dois valores:");
	scanf("%d%d",&a,&b);
	trocaRef(&a,&b);
	printf("*** Main ***\nA=%d B=%d",a,b);
	return 0;
}
