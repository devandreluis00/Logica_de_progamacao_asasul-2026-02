#include <stdio.h>
#include <string.h>
#include <locale.h> //Corrigir o acento PT-BR

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Corrigir o acento PT-BR
    // Operadores relacionais \ Comparação
//    >
//    >=
//    <
//    <=
//    ==
//    !=
    
    // Operadores Logicos 
//    ! não
//    && and (e) -- So sera verdardeiro se a expressao ser todas verdades
//    || or (ou) ---- 

//	condição ou desisão
//	Normalmente contém uma pergunta do tipo
//	Sim/Não ou um teste de Verdadeiro/Falso

//forma geral de um comando if:
//	if(condicao){
//		sequencia de comandos;
//	}

//		int num;
//		printf("Digite um numero:");
//		scanf("%d", &num);
//		 
//		 if(num >= 10 && num < 20){
//		 	printf("Wow seu numero é maior que 10!");
//		 }else if(num >= 20 && num < 30){
//		 	printf("Wow seu numero é maior que 20!");
//		 }else if(num >= 30  && num < 67){
//		 	printf("Wow seu numero é maior que 30!");
//		}else if(num >= 67 && num < 68){
//		 	printf("Wow FARMOU AURA!");
//		 }
//		else if(num >= 68){
//		 	printf("Wow seu numero é maior que 68!");
//		 }else{
//		 	printf("Que droga seu numero é menor!");
//		 }
//		 
//		 printf("\nContinuação do codigo..");

//	float nota;
//	
//	printf("Digite a nota do aluno: ");
//	scanf("%f", &nota);
//	
//	if(nota >= 3 && nota < 6 ){
//		printf("o aluno esta de recuperaçao! ");
//	}else if(nota < 3){
//		printf("O aluno ja esta reprovado! ");
//	}else if(nota >= 6 && nota < 10){
//		printf("O aluno esta aprovado!");
//	}else{
//		printf("Verifique a nota do aluno!");
//	}


// q1
// int a;
// int b;
// int c;
// float soma;
// 
// 	printf("Digite o Numero a: ");
// 	scanf("%d", &a);
// 
//  	printf("Digite o Numero b: ");
// 	scanf("%d", &b);
// 
//	printf("Digite o Numero c: ");
// 	scanf("%d", &c);
// 	
// 	soma = a+b;
// 	
// 	printf("A soma dos numeros é %f", soma);
// 	if(soma < c){
// 		printf("\nA soma de a + b é menor que c");
//	 }else{
//	 	printf("\nA soma é maior que c!");
//	 }

// Q2
//	char nome[10];
// 	int estadocivil;
// 	int sexo;
//	
//	float anoscasada;
//	
//	
//	printf("Digite seu nome: ");
//	scanf("%s", nome);
//	printf("Digite seu Genero (1 para mulher e 2 para homem): ");
//	scanf("%d", &sexo);
//	printf("Selecione o estado civil: 1 para Casada, 2 para a solteira, 3 para divorciada: ");
//	scanf("%d", &estadocivil);
//	
//	if(sexo == 1 && estadocivil == 1){
//		printf("Digite quantos anos de casada você tem: ");
//		scanf("%f", &anoscasada);
//		
//		printf("Olá %s, Você tem %2.f anos de casada!", nome, anoscasada);
//	}else{
//		printf("Continue...");
//	}

// q3
//	int num;
//
//    printf("Digite um numero inteiro: ");
//    scanf("%d", &num);
//    
//        if (num % 2 == 0) {
//        printf("O numero é par");
//    } else {
//       printf("O numero é impar");
//    }
//	
	
//	Q4
//	int a;
//	int b;
//	float soma;
//	float muti;
//	
//	
//	printf("Digite o numero A: ");
//	scanf("%d", &a);
//	printf("Digite o numero b: ");
//	scanf("%d", &b);
//	
//	if(a == b){
//		soma = a+b;
//		printf("A soma dos numeros é: %.2f", soma);
//	}else{
//		muti = a*b;
//		printf("A multiplicaçao dos numeros é: %.2f", muti);
//	}
	
	// Q5
// float numero;
// float dobro;
// float triplo;
// 
// printf("Digite um numero:");
// scanf("%f", &numero);
// 
// if(numero >= 0){
// 	dobro = numero*2;
// 	printf("O seu numero em dobro é: %.2f", dobro);
// }else if(numero < 0){
// 	triplo = numero*3;
// 	printf("O seu numero em triplo é: %.2f", triplo);
// }




// Q7

//int numero;
//float par;
//float impar;
//
//printf("Digite seu numero: ");
//scanf("%d", &numero); 
//
// if (numero % 2 == 0) {
//	par = numero+5;
//	printf("Seu numero é par e com a soma de 5 fica: %.2f\n", par);
//}else{
//	impar = numero + 8;
//	printf("Seu numero é impar e com a soma de 8 fica: %.2f\n ", impar);
//}

//q8
//float num1;
//float num2;
//float num3;
//int temp;
//
//printf("Digite um numero: ");
//scanf("%f", &num1);
//
//printf("Digite um numero: ");
//scanf("%f", &num2);
//
//printf("Digite um numero: ");
//scanf("%f", &num3);
//
//
// if (num1 == num2 || num1 == num3 || num2 == num3) {
//        printf("Os numeros precisam ser diferentes entre si.\n");
//    }
//    
// if (num1 < num2) {
//        temp = num1;
//        num1 = num2;
//        num2 = temp;
//    }
//    if (num1 < num3) {
//        temp = num1;
//        num1 = num3;
//        num3 = temp;
//    }
//    if (num2 < num3) {
//        temp = num2;
//        num2 = num3;
//        num3 = temp;
//    }
//
//	printf("\nNumeros em ordem decrescente: %f, %f, %f\n", num1, num2, num3);

//q9
//float altura,imc,imcmulher;
//int sexo;
//
//printf("Digite 1 para Homem ou 2 para mulher: ");
//scanf("%d", &sexo);
//
//printf("Digite a sua altura: ");
//scanf("%f", &altura);
//
//if(sexo == 1){
//	imc = (72.7 * altura) - 58;
//	printf("Seu peso ideal e %.2f kg\n", imc); 
//}else{
//	imcmulher = (62.1 * altura)- 44.7;
//	printf("Seu peso ideal e %.2f kg\n", imcmulher);
//}

//q10
//float peso,altura,imc;
//
//printf("Digite seu peso: ");
//scanf("%f", &peso);
//
//printf("Digite seu altura: ");
//scanf("%f", &altura);
//
//imc = peso/ altura*altura;
//
//if (imc < 18.5) {
//        printf("Abaixo do peso\n");
//    } else if (imc >= 18.5 && imc <= 25) {
//        printf("Normal\n");
//    } else if (imc > 25 && imc <= 30) {
//        printf("Acima do peso\n");
//    } else {
//        printf("Obeso\n");
//    }


//q11
// float preco, valorFinal;
//    int codigo;
//
//    printf("Digite o preco do produto: ");
//    scanf("%f", &preco);
//
//    printf("\nCondicoes de pagamento:\n");
//    printf("1 - A vista em dinheiro ou cheque (10%% de desconto)\n");
//    printf("2 - A vista no cartao de credito (15%% de desconto)\n");
//    printf("3 - Em duas parcelas sem juros\n");
//    printf("4 - Em duas parcelas com acrescimo de 10%%\n");
//
//    printf("\nDigite o codigo da condicao de pagamento: ");
//    scanf("%d", &codigo);
//
//    switch (codigo) {
//        case 1:
//            valorFinal = preco - (preco * 0.10);
//            printf("\nDesconto de 10%% aplicado.\n");
//            printf("Valor final: R$ %.2f\n", valorFinal);
//            break;
//
//        case 2:
//            valorFinal = preco - (preco * 0.15);
//            printf("\nDesconto de 15%% aplicado.\n");
//            printf("Valor final: R$ %.2f\n", valorFinal);
//            break;
//
//        case 3:
//            valorFinal = preco;
//            printf("\nPagamento em duas parcelas sem juros.\n");
//            printf("Valor final: R$ %.2f\n", valorFinal);
//            break;
//
//        case 4:
//            valorFinal = preco + (preco * 0.10);
//            printf("\nAcrescimo de 10%% aplicado.\n");
//            printf("Valor final: R$ %.2f\n", valorFinal);
//            break;
//
//        default:
//            printf("\nCodigo de pagamento invalido.\n");
//    }
//
//q12
// int identificacao;
//    float nota1, nota2, nota3;
//    float mediaExercicios;
//    float mediaAproveitamento;
//    char conceito;
//    char situacao[20];
//
//    printf("Digite o numero de identificacao do aluno: ");
//    scanf("%d", &identificacao);
//
//    printf("Digite a nota 1: ");
//    scanf("%f", &nota1);
//
//    printf("Digite a nota 2: ");
//    scanf("%f", &nota2);
//
//    printf("Digite a nota 3: ");
//    scanf("%f", &nota3);
//
//    printf("Digite a media dos exercicios: ");
//    scanf("%f", &mediaExercicios);
//
//    mediaAproveitamento =
//        (nota1 + (nota2 * 2) + (nota3 * 3) + mediaExercicios) / 7;
//
//    if (mediaAproveitamento >= 90) {
//        conceito = 'A';
//        sprintf(situacao, "Aprovado");
//    }
//    else if (mediaAproveitamento >= 75) {
//        conceito = 'B';
//        sprintf(situacao, "Aprovado");
//    }
//    else if (mediaAproveitamento >= 60) {
//        conceito = 'C';
//        sprintf(situacao, "Aprovado");
//    }
//    else if (mediaAproveitamento >= 40) {
//        conceito = 'D';
//        sprintf(situacao, "Reprovado");
//    }
//    else {
//        conceito = 'E';
//        sprintf(situacao, "Reprovado");
//    }
//
//    printf("\n===== RESULTADO =====\n");
//    printf("Numero de identificacao: %d\n", identificacao);
//    printf("Nota 1: %.2f\n", nota1);
//    printf("Nota 2: %.2f\n", nota2);
//    printf("Nota 3: %.2f\n", nota3);
//    printf("Media dos exercicios: %.2f\n", mediaExercicios);
//    printf("Media de aproveitamento: %.2f\n", mediaAproveitamento);
//    printf("Conceito: %c\n", conceito);
//    printf("Situacao final: %s\n", situacao);

//q13

//float limite, velocidade, percentual;
//
//    printf("Digite a velocidade maxima permitida na via (km/h): ");
//    scanf("%f", &limite);
//
//    printf("Digite a velocidade registrada do veiculo (km/h): ");
//    scanf("%f", &velocidade);
//
//    printf("\n===== RESULTADO =====\n");
//
//    printf("Limite da via: %.2f km/h\n", limite);
//    printf("Velocidade registrada: %.2f km/h\n", velocidade);
//
//    if (velocidade <= limite) {
//        printf("Percentual excedido: 0.00%%\n");
//        printf("Classificacao: Nao houve infracao.\n");
//    }
//    else {
//        percentual = ((velocidade - limite) / limite) * 100;
//
//        printf("Percentual excedido: %.2f%%\n", percentual);
//
//        if (percentual <= 20) {
//            printf("Classificacao: Infracao media.\n");
//        }
//        else if (percentual <= 50) {
//            printf("Classificacao: Infracao grave.\n");
//        }
//        else {
//            printf("Classificacao: Infracao gravissima.\n");
//        }
//
//        if (velocidade > 120) {
//            printf("ALERTA: velocidade extremamente elevada!\n");
//        }
//    }

// q14

//int codigo;
//
//    printf("===== CARDAPIO =====\n");
//    printf("1 - Hamburguer com fritas       R$ 28,00\n");
//    printf("2 - File de frango grelhado     R$ 32,00\n");
//    printf("3 - Lasanha a bolonhesa         R$ 35,00\n");
//    printf("4 - File de peixe com arroz     R$ 42,00\n");
//    printf("5 - Salada especial             R$ 25,00\n");
//
//    printf("\nDigite o codigo do prato desejado: ");
//    scanf("%d", &codigo);
//
//    printf("\n===== PEDIDO =====\n");
//
//    switch (codigo) {
//
//        case 1:
//            printf("Prato escolhido: Hamburguer com fritas\n");
//            printf("Valor: R$ 28,00\n");
//            break;
//
//        case 2:
//            printf("Prato escolhido: File de frango grelhado\n");
//            printf("Valor: R$ 32,00\n");
//            break;
//
//        case 3:
//            printf("Prato escolhido: Lasanha a bolonhesa\n");
//            printf("Valor: R$ 35,00\n");
//            break;
//
//        case 4:
//            printf("Prato escolhido: File de peixe com arroz\n");
//            printf("Valor: R$ 42,00\n");
//            break;
//
//        case 5:
//            printf("Prato escolhido: Salada especial\n");
//            printf("Valor: R$ 25,00\n");
//            break;
//
//        default:
//            printf("Opcao invalida.\n");
//            break;
//    }

    return 0;
}
