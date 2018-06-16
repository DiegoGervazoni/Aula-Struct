#include "cabec.h"
int main()
{
    int opc = 0;
    p = 0;

    do {
        system("cls");
        printf("\t\tMenu Principal\n\n\n");
        printf("\t\t1 - Inserir\n");
        printf("\t\t2 - Alterar\n");
        printf("\t\t3 - Consultar\n");
        printf("\t\t4 - Listar Todos\n");
        printf("\t\t9 - Sair\n");
        printf("\t\tEscolha sua opcao: ");
        scanf("%d", &opc);

        switch(opc)
        {
                case 1:
                    inserir();
                    break;
                case 2:
                    alterar();
                    break;
                case 3:
                    consultar();
                    break;
                case 4:
                    listarTodos();
                    break;
                case 9:
                    printf("Good bye Camilindo\n");
                    break;
                default:
                    printf("Opcao do Camilindo errada\n");
                    system("pause");

        }
    }while(opc!=9);


    return 0;
}
