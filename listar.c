#include "cabec.h"
void listarTodos()
{
    int i;
    for(i=0; i < p; i++)
    {
            //listar os dados
            printf("Ra: %d \n", alunos[i].ra);
            printf("Nome: %s \n",alunos[i].nome);
            printf("Idade: %d \n\n",alunos[i].idade);

    }
    system("pause");
}
