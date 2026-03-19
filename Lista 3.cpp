#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	// exercicio 1
	int numero;
	printf("Ex1 - tipos do numero");
	printf("\nEscreva um numero:");
	scanf("%i", &numero);
	
	if(numero>0)
		printf("Esse numero e positivo\n\n");
	
	else if (numero<0)
		printf("Esse numero e negativo\n\n");
		
	else
		printf("Esse numero e nulo\n\n");
		
	// exercicio 2
	int num, num2, num3;
	printf("Ex 2 - Intervalo numerico\n ");
	printf("Digite um numero:");
	scanf("%i", &num);
	printf("Digite outro numero:");
	scanf("%i", &num2);
	printf("O intervalo sera entao entre %i e %i\n", num, num2);
	printf("Digite um numero:");
	scanf("%i", &num3);
	
	if(num3 == num || num3 == num2){
		printf("Esse numero esta em uma extremidade\n\n");
	}
		else if(num3>num && num3<num2){
		printf("Esse numero esta no intervalo numerico\n\n");
		}
			else{
				printf("Esse numero esta fora do intervalo numerico\n\n");
			}

		
	// exercicio 3
	float peso, altura, imc;
	printf("Ex 3 - Indice de massa corporal\n ");
	printf("Escreva o seu peso:");
	scanf("%f", &peso);	
	printf("Escreva a sua altura:");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
	if(imc<18.50){
		printf("Abaixo do peso\n\n");
	}
		else if(imc>=18,50 && imc<25){
		printf("Saudavel\n\n");
		}
			else if(imc>=25 && imc<30){
			printf("Sobrepeso\n\n");
			}
				else if(imc>=30 && imc<35){
				printf("Obesidade Grau 1\n\n");
				}
					else if (imc>=35 && imc<40){
					printf("Obesidade Drau 2(severa)\n\n");
					}
						else {
						printf("Obesidade Grau 3(morbida)\n\n");
						}
						
	// exercicio 4
	int num4, num5, num6;
	printf("Ex 4 - Numero repetido\n ");
	printf("Digite um numero:");
	scanf("%i", &num4);
	printf("Digite um numero:");
	scanf("%i", &num5);
	fflush(stdin);
	printf("Digite um numero:");
	scanf("%i", &num6);
	
	if (num4 == num5){
		printf("%i e %i sao repetidos\n\n", num4, num5);
	}
		else if (num4 == num6){
			printf("%i e %i sao repetidos\n\n", num4, num6);
		}
			else if(num5 == num6){
				printf("%i e %i sao repetidos\n\n", num5, num6);
			}
				else{
					printf("Nao ha numeros repetidos\n\n");
				}					
				
	// exercicio 5 
	int num7, num8, num9;
	printf("Ex 5 - Qual o maior numero ?\n");
	printf("Digite um numero:");
	scanf("%i", &num7);
	printf("Digite um numero:");
	scanf("%i", &num8);
	printf("Digite um numero:");
	scanf("%i", &num9);
	
	if(num7>num8 && num7>num9){
		printf("%i e o maior numero\n\n", num7);
	}
		else if(num8>num7 && num8>num9){
			printf("%i e o maior numero\n\n", num8);
		}
			else if(num9>num7 && num9>num8){
				printf("%i e o maior numero\n\n", num9);
			}
				else if(num9==num7 && num9==num8){
					printf("Nao ha um numero maior\n\n");
				}
				
	// exercicio 6 
	float num10, num11;
	int sinal;
	printf("Ex 6 - Calculadora\n");
	printf("Digite um numero:");
	scanf("%f", &num10);
	printf("Digite um numero:");
	scanf("%f", &num11);
	printf("Digite o sinal da conta abaixo: 1-(+), 2-(-), 3-(*), 4-(/)\n");
	scanf("%i", &sinal);

	if(sinal==1){
		printf("Resultado: %.2f\n\n", num10+num11);
	}
		else if(sinal==2){
			printf("Resultado: %.2f\n\n", num10-num11);
		}
			else if(sinal==3){
				printf("Resultado: %.2f\n\n", num10*num11);
			}
				else if(sinal==4){
					printf("Resultado: %.2f\n\n", num10/num11);
				}
					else{
						printf("Opcao invalida\n\n");
					}
	
	// exercicio 7
	float num12, num13, num14;
	printf("Ex 7 - Triangulos\n");
	printf("Digite a medida de um lado do triangulo:");
	scanf("%f", &num12);
	printf("Digite a medida de um lado do triangulo:");
	scanf("%f", &num13);
	printf("Digite a medida de um lado do triangulo:");
	scanf("%f", &num14);
	
	if(num12==num13 && num12==num14){
		printf("Esse triangulo e equilatero");
	}
		else if(num12==num13 && num12!=num14  || num13==num14 && num12!=num13 || num14==num12 && num13!=num12){
			printf("Esse triangulo e isosceles");
		}
			else {
				printf("Esse triangulo e escaleno");
			}
	return 0;
}