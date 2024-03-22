#include <stdio.h>

int main(){
	 int n1, n2;
	 
	 printf("escolha o primeiro numero: ");
	 scanf("%d", &n1);
	 
	 printf("escolha o segundo numero: ");
	 scanf("%d", &n2);
	 
	 if (n1 > n2) {
	 	printf ("\n\no primeiro numero e o maior.");
	 }else{
	 	printf("\n\no segundo numero e o maior.");
	 }
}
