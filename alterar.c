#include "cabec.h"
void consultar()
{
    int i, codigo;
    printf("Digite o RA do aluno a ser encontrado: ");
    scanf("%d", &codigo);
    for(i=0; i < p; i++)
    {
        if(codigo == alunos[i].ra)
        {
            //listar os dados
            printf("Ra: %d \n", alunos[i].ra);
            printf("Nome: %s \n",alunos[i].nome);
            printf("Idade: %d \n",alunos[i].idade);
            system("pause");
            return;
        }
    }

    printf("RA de aluno nao encontrado \n");
    system("pause");
}
