#include <stdio.h>
int main(){
	int a, b=20;
	int *pt_a;
	printf("Entre com um valor para A:");
	scanf("%d",&a);
	pt_a = &a; // apontamento
	printf("Conteudo do apontamento =  %d\n",*pt_a);
	printf("Conteudo de A =  %d\n",a);
	printf("---------------------------------------\n");
	printf("Endereco de A =  %x\n",&a);
	*pt_a = 15;
	printf("Conteudo do ponteiro pt_a =  %x\n",pt_a);
	printf("------------------------------------------\n");
	printf("Endereco do ponteiro pt_a =  %x",&pt_a);

	return 0;
}
