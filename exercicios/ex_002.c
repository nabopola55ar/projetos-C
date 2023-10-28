#include <stdio.h>

int main() {

		int primeiro;
		int segundo;
		
		printf("Entre com o primeiro numero inteiro: ");
		scanf("%d", &primeiro);
		
		printf("Entre com o segundo numero inteiro: ");
		scanf("%d", &segundo);
		
		int igual = primeiro * segundo;

		printf("A multiplicacao do primeiro %d com o segundo %d valor e igual %d\n", primeiro, segundo, igual);
			
}
