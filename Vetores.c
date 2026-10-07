#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	 
	 
//    int numeros[5]; // Numeros armazenados na memoria [5]
//    int soma = 0;
//    int media;
    
//    numeros[0] = 10;
//    numeros[1] = 40;
//    numeros[2] = 20;
//    numeros[3] = 5;
//    numeros[4] = 55;
//    
//    printf("%d\n", numeros[0]);
//    printf("%d\n", numeros[1]);
//    printf("%d\n", numeros[2]);
//    printf("%d\n", numeros[3]);
//    printf("%d\n", numeros[4]);


    	// acessando cada posicao para insenir os valores 
//    for(int contador = 0; contador < 5; contador++){  //sempre utlizar o mesmo tabamnho que o vetor soq menor que tal
//    	printf("Digite o numero %d: ", contador+1); // quando utliza contador+1 ele comeca sempre no numero 1 visualmente mas o indice continua o mesmo
//    	scanf("%d", &numeros[contador]);
//	}
//	
//	// vizualizar o valor de cada posicao do vetor\ MEDIA
//	for(int contador = 0; contador <5; contador++){
//		printf("%d \n", numeros[contador]);
//		soma += numeros[contador];
//	}
//	printf("A soma é %d", soma);
//	media = soma/5;
//	printf("\nMedia: %d", media);



//PAR OU IMPAR 
//int numeros[10] = {33,23,65,32,90,100,230,690,878,633};

//for(int contador = 0; contador <10; contador++){
//	printf("\n%d ", numeros[contador]);
//	if(numeros[contador] % 2 == 0){
//		printf(":Seu numero é par");
//	}else{
//		printf(":Seu numero é impar");
//	}
//
	
//}
//for(int contador = 0; contador <10; contador++){
//	if(numeros[contador] % 2 == 0){
//		printf("\n%d:Seu numero é par", numeros[contador]);
//	}else{
//		printf("\n%d:Seu numero é impar", numeros[contador]);
//	}
//	
//}

// Ver o maior

//int numeros[10] = {33,23,65,32,90,100,230,690,878,633};
//int maior = numeros[0];
//for(int c =0; c <10; c++){
//	if(numeros[c]>maior){
//		maior = numeros[c];
//	}
//}
//printf("%d", maior);


//int numeros[10] = {33,23,67,32,90,100,230,690,878,633};
//int busca, encontrado =0;
//	printf("Digite o valor que deseja buscar: ");
//	scanf("%d", &busca);
//
//for(int c =0; c <10; c++){
//	if(busca == numeros[c]){
//	printf("Valor encontrado");
//	encontrado =1;
//	break;
//	}
//}
//
//if(encontrado == 0){
//	printf("Valor nao encontrado!");
//}

    return 0;
}
