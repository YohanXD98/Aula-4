/* Construir um programa em C que efetue o
c�lculo do sal�rio l�quido de um oper�rio.

Ser� necess�rio conhecer o valor da hora de
trabalho, n�mero de horas trabalhadas no m�s
e percentual de desconto de INSS.

Deve-se saber primeiro o valor do sal�rio bruto,
para ent�o calcular o valor do desconto e
finalmente o valor do sal�rio l�quido
*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0,"Portuguese");
	float valor_hora, qtd_horas, salario_bruto, salario_liquido, desconto, percent_INSS, valor_desconto,valor_liquido;
	
 printf ("informe o valor da hor e quantidade de horas: ");
 scanf("%f %f", &valor_hora, & qtd_horas);
 printf("Informe o percentual de desconto INSS: ");
 scanf("%f", &percent_INSS);
 
 salario_bruto = valor_hora * qtd_horas;
 valor_desconto = (salario_bruto * percent_INSS) / 100.0;
 valor_liquido = salario_bruto - valor_desconto;
 
 printf("Valor hora: %f \t Quantidade de horas: %f \t percentual do INSS: %f \t ", valor_hora, qtd_horas, percent_INSS);
 printf("Sal�rio Bruto: %f \t Valor de desconto: %f \t Sal�rio l�quido: %f \t", salario_bruto,valor_desconto, salario_liquido);
 
}
