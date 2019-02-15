#include<stdio.h>
#define M 100
#define N 100

float func_media (float vet[], int n){
	int soma, i;

	for(i=0; i<n; i++){

			soma += vet[i];
	}

	return soma / n;
}

int main(){
	
	int tamL, tamC, i, j, linha, cont = 0;
	float matrix [M][N], soma[M], media, linhaSelect[tamL];

	printf("Digite a dimenção da matrix: ");
	scanf("%d %d", &tamL, &tamC); 

	while((tamL < 0 || tamC < 0) ){

		scanf("%d %d", &tamL, &tamC); 
	}

	for(i=0; i<tamL; i++){

		for(j=0; j<tamC; j++){
			scanf("%f", &matrix[i][j]);
		}
	}

	printf("Digite a linha que deseja calcular a media: ");
	scanf("%d", &linha);

	for(i=0; i<tamL; i++){
		for(j=0; j<tamC; j++){
			linhaSelect[i] = matrix[linha][j];
			cont++;
		}
	}



	media = func_media(linhaSelect, cont);

  	printf("%.1f\n", media);
   
	return 0;
}