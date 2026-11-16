#include <stdio.h> 


struct Aluno{
	char nome[50];
	int matricula;
	float nota1;
	float nota2;
	float media;
};

void mediaAluno(struct Aluno *a) {
    float soma = a->nota1 + a->nota2;
    a->media = soma / 2.0;
}

#define TOTAL 4
void cadastrar (struct Aluno alunos[], int i){
    
    if(i == TOTAL){
        printf("LIMITE ATINGIDO\n");
        return;
    }
    
    
     printf("\n--- Aluno %d ---\n", i + 1); 
        printf("Nome: "); 
        scanf(" %50[^\n]", alunos[i].nome); 
        printf("Matricula: "); 
        scanf("%d", &alunos[i].matricula); 
        printf("Nota 1: "); 
        scanf("%f", &alunos[i].nota1); 
        printf("Nota 2: "); 
        scanf("%f", &alunos[i].nota2); 
        
        mediaAluno(&alunos[i]);
        printf("Media do aluno: %.2f\n", alunos[i].media);
        
        if(alunos[i].media >= 6){
            printf("Aprovado!");
        }else{
            printf("Reprovado!");
        }
        
}


int main(void){
	struct Aluno alunos[TOTAL]; 
	
	for (int i = 0; i < TOTAL; i++) { 
	    cadastrar(alunos,i);
    } 
	return 0;
}
