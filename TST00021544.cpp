#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0,"Portuguese");
	int ano, idade;
	
	printf("Digite o seu ano de nasciemnto para classificarmos você em uma categoria de nadador: ");
	scanf("%d", &ano);
	idade = (2023-ano);
	
	switch(idade) {
		case 5:
		case 6:
		case 7:
			printf("Infantil A %d de 5 a 7 anos", idade);
			break;
			
	    case 8:
		case 9:
		case 10:
			printf("Infantil B %d de 8 a 10 anos", idade);
			break;
			
		case 11:
		case 12:
		case 13:
			printf("Juvenil A %d de 11 a 13 anos", idade);
			break;
		
		case 14:
		case 15:
		case 16:
			printf("Juvenil B %d de 14 a 16 anos", idade);
			break;
	}
}
