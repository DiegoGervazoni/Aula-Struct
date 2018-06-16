#include "cabec.h"
void inserir()
{
    //inserir na posicao corrente um novo aluno
    if(p==100){
        printf("Espaco insuficiente em memoria \n");
        system("pause");
        return;
    }
    system("cls");
    printf("Digite o RA: ");
    scanf("%d", &alunos[p].ra);
    fflush(stdin);
    printf("\nDigite o nome do aluno(a): ");
    gets(alunos[p].nome);
    printf("\nDigite a idade do aluno: ");
    scanf("%d", &alunos[p].idade);
    printf("\nCadastro efetuado com sucesso!!!\n");
    p++; //mudar para proxima posicao
    system("pause");

}
