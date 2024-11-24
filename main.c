#include <stdio.h>

int main(void){
    
    struct ficha_de_aluno {
        char nome[50];
        char disciplina[30];
        double nota_prova1;
        double nota_prova2;
    };
    
    struct ficha_de_aluno aluno;
    
    printf("---------------- Cadastro de aluno---------------- \n \n \n");
    
    printf("nome do aluno ............");
    fgets(aluno.nome, 50, stdin);
    
    printf("Disciplina...........");
        fgets(aluno.disciplina, 30, stdin);
        
        printf("informe a primeira nota ...:");
            scanf("%lf", &aluno.nota_prova1);
            
            printf("informe a segunta nota....:");
                scanf("%lf", &aluno.nota_prova2);
                
                printf("\n \n --------- lendo os dados da Struct --------------");
                printf("Nome-------------------- %s",aluno.nome);
                printf("Disciplina-----------------%s",aluno.disciplina);
                printf("nota da prova 1----------------- %.2f", aluno.nota_prova1);
                printf("nota da prova 2----------------- %.2f", aluno.nota_prova2);

                
                
    
    return 0;
}
