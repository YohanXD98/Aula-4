/*Para efetuar o cálculo da área de uma circunferência é
necessário conhecer a fórmula que executa este cálculo,
que é:

A = pi R2

onde A é a variável que conterá o resultado do cálculo, pi
representa a constante 3,14159 e R é o raio da
circunferência.

Escrever um programa em C para resolver este problema
e apresentar o resultado na tela.

*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0,"portuguese");
	float A, raio;
	
	printf("Digite o valor do raio para calcular a circunferência: ");
	scanf("%f", &raio);
	
	A = (3.14159 * (raio * raio));
	printf("A área da circunferência é: %f", A);
	
}
