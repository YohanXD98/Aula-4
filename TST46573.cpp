/*Para efetuar o c�lculo da �rea de uma circunfer�ncia �
necess�rio conhecer a f�rmula que executa este c�lculo,
que �:

A = pi R2

onde A � a vari�vel que conter� o resultado do c�lculo, pi
representa a constante 3,14159 e R � o raio da
circunfer�ncia.

Escrever um programa em C para resolver este problema
e apresentar o resultado na tela.

*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0,"portuguese");
	float A, raio;
	
	printf("Digite o valor do raio para calcular a circunfer�ncia: ");
	scanf("%f", &raio);
	
	A = (3.14159 * (raio * raio));
	printf("A �rea da circunfer�ncia �: %f", A);
	
}
