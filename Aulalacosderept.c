#include <stdio.h>

int main()
{
//    while (enquanto) - Teste é no inicio
//    do while (faça enquanto) - Teste no final
//    for (para) - Quantidade prevista de repetição



//    Os operadores de incremento e decremento em C são usados para aumentar ou diminuir o valor de uma variável
//    Operadores incremento (++ / +=) +=: é um atalho que soma um valor a uma variável e guarda o novo resultado nela.| ++ operador de incremento, usado para somar exatamente 1 ao valor de uma variável.
//    Operadores decremento (-- / -=)



//ex:
//while(comandos){
//	comandos;
//}

//contador ate 10

//int contador = 1; quando eu coloco = 1 ele comeca sempre um
//
//while(contador <= 10){ quando eu coloco <= 10 ele limita a contagem ate 10
//	printf("%d \n", contador);
//	contador++; ++ soma somente um valor
//}

// contador de 2 em dois 

//int contador = 2; comeca no 2
//while(contador <= 100){
//	printf("%d \n", contador);
//	contador += 2; coloco += 2 para somar de 2 em 2
//}

//contador decrecente
//int contador =100;
//while(contador >= 0){ para ser decresente tem que ser >= 0
//	printf("%d \n", contador);
//	contador -=1; coloco -=1 para ele dimunir de 1 em 1
//}

// media
//int numeros;
//int contador = 1;
//int soma;
//int numerodigi;
//float media;
//
//printf("Digite a quantidade de numeros: ");
//scanf("%d", &numeros);
//
//while(contador <= numeros){
//	printf("Digite o %d numero: ", contador);
//	scanf("%d", &numerodigi);
//	soma += numerodigi;
//	
//	contador ++;
//}
//media = soma/numeros;
//printf("A media é %2.f: ", media);

// DO while
//int opcao;
//do{
//	printf("Digite 1, 2 ou 3 para voltar: ");
//	scanf("%d", &opcao);
//	
//}while(opcao == 1 || opcao == 2 || opcao == 3);


// Contador de um em um usando FOR
//int contador;
//
//for(contador =1; contador <= 10; contador++){
//	printf("%d \n", contador);
//	
//}


//taboada 
//int contador;
//int numero =10;
//int res;
//
//for(contador =0; contador <= 10; contador++){
//	res = numero *contador;
//	printf("%d x %d = %d \n", numero,contador,res);
//}

// Taboadas de 1 ate 10
//int res;
//for(int contador1 = 1; contador1 <= 10; contador1++){
//	
//	for(int contador2 = 1; contador2<=10; contador2++){
//		res = contador1 * contador2;
//		printf("%d x %d = %d \n", contador1, contador2, res);
//	}
//	printf("_____________________ \n");
//}


//int contador;
//int numero =10;
//int res;
//
//for(contador =0; contador <= 10; contador++){
//	res = numero *contador;
//	printf("%d x %d = %d \n", numero,contador,res);
//}


//	int contador = 1, res, numero;
//	printf("Digite o numero da taboada: ");
//	scanf("%d", &numero);
	
//	while(contador <= 10){
//	printf("%d\n", contador);
//	contador = contador + 1; 
	
//	contador++; soma um
//	contador += 10;

//		taboada do 5
//		res = 5 * contador;
//		printf("5 X %d = %d \n", contador, res) ;
//		contador++;

// 		Numero digitado
//		res = numero * contador;
//		printf("%d X %d = %d \n", numero, contador, res) ;
//		contador++;
//		

	//taboada do 9
//		res = 9 * contador;
//		printf("9 X %d = %d \n", contador, res) ;
//		contador++;
		
//	}



//	int contador = 0, soma = 0;
//	while(contador <= 10){
//		soma += contador;
//		printf("%d \n", soma);
//		contador++;
//	}
    
//    float media = 0;
//    int contador = 1;
//    float numero;
//    float soma = 0;
//    	
//    	while(contador <=5 ){
//    		printf("Digite o %d numero: ", contador);
//    		scanf("%f", &numero);
//    		soma += numero;
//    		contador ++;
//		}
//		
//		media = soma/5;
//		printf("Media: %.3f", media);

//	int opcao;
//	do{
//		printf("Digite uma opcao entre 1 ,2 e 3: ");
//		scanf("%d", &opcao);
//		} while(opcao >= 1 && opcao <= 3);
//	} while(opcao == 1 || opcao == 2 || opcao == 3);
	
//	int contador;
	
//	for(int contador = 1; contador <= 10; contador++ ){
//		printf("%d \n", contador);	
//	}
	
//	int contador1;
//	int contador2;
//	int res;
//	
//	for(contador1 = 1; contador1 <= 10; contador1++){
//		
//		printf("---------Tabuada de: %d-----------\n", contador1);
//		for(contador2 = 1; contador2 <= 10; contador2++){
//			res = contador1 * contador2;
//			printf("%d X %d = %d \n",contador1, contador2, res);
//		}
//	}
	    
    
    


    return 0;
}
