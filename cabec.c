#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    int ra;
    char nome[51];
    int idade;
}alunos[100];

void inserir();
void alterar();
void listarTodos();
void consultar();
int  p;
