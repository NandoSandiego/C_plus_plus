#include <stdio.h>
#include <stdlib.h>


int main (){
	
	float tempo_viagem, vel_media, distancia, litros;
	
	printf("Digite o tempo da viagem: ");
	scanf("%f", &tempo_viagem);
	printf("Velocidade media: ");
	scanf("%f", &vel_media);
	
	distancia = tempo_viagem * vel_media;
	litros = distancia/12;
	
	printf("---------------- \n");
	printf("Velocidade media: %.2f km/h \n", vel_media);
	printf("Tempo gasto: %.2f horas\n", tempo_viagem);
	printf("Distancia percorrida %.2f km \n", distancia);
	printf("Quantidadess de litros %.2f l \n", litros);
	
	return EXIT_SUCCESS;
}
