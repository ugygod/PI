#include <stdio.h>

#define TAM 100

typedef struct
{
    int cod;
    char nome[50];
    float altura;
}Atleta;

//Exercicio 1
typedef struct
{
    int cod;
    char nome[50];
    char treinador[50];
    char liga[50];
}Clube;

//Exercicio 2
void RegistarAtleta(Atleta a[])
{
    int cont = 0;
    printf("Introduza quantos atletas deseja registar: ");
    scanf("%d", &cont);
    
    for(int i = 0; i < cont; i++)
    {
        printf("Introduza o codigo do %dº atleta: ");
        scanf("%d", &a[i].codigo);
        printf("Introduza o nome do %dº atleta: ");
        scanf("%s", &a[i].nome);
        printf("Introduza a altura do %dº atleta: ");
        scanf("%f", &a[i].altura);
        
    }
}

//Exercicio 3
void ApresentarAtletas(Atleta a[])
{
    int tamanho = sizeof(a);
    for(int i = 0; i < tamanho; i++)
    {
        printf("########## ATLETA %d ##########\n", i + 1)
        printf("\nCódigo: %d", a[i].codigo);
        printf("\nNome: %s", a[i].nome);
        printf("\nAltura: %.2f", a[i].altura);
    }
}

//Exercicio 4
void ApresentarAtletaporCod(Atleta a[], int codigo)
{
    int verdade = 0;
    int tamanho = sizeof(a);
    for(int i = 0; i < tamanho; i++)
    {
        if(a[i].codigo == codigo)
        {
            verdade = 1;
            printf("########## ATLETA ##########\n", i + 1)
            printf("\nCódigo: %d", a[i].codigo);
            printf("\nNome: %s", a[i].nome);
            printf("\nAltura: %.2f", a[i].altura);   
        }
    }
    if(verdade == 0)
    {
        printf("Atleta não encontrado!");
    }
}

//Exercicio 5
void MediaAltura(Atleta a[])
{
    float soma = 0;
    int tamanho = sizeof(a);
    for(int i = 0; i < tamanho; i++)
    {
        soma = soma + a[i].altura;
    }
    
    media = soma / tamanho;
    
    printf("A média da altura de todos os atletas é de: %.2f", media);
}

void MenuOpcoes()
{
    printf("\n################## Menu Principal ##################");
    printf("\n1  - Registar Atleta");
    printf("\n2  - Apresentar Atletas");
    printf("\n3  - Apresentar Atleta através do Codigo");
    printf("\n4  - Obter média da altura dos Atletas");
    printf("\n5 - Sair");
    printf("\n################## ++++++++++++++ ##################\n");
    printf("\nQual a opcao? ");
}

int main()
{
    //Arrays
    Atleta atletas[TAM];
    Clube clubes[TAM];
    
    int op, codigo;
    int continuar = 1;
    //Executar o procedimento MenuOpcoes() enquanto o continuar for igual a 1
    while(continuar == 1)   
    {
        MenuOpcoes();
        scanf("%d", &op);

        switch (op)
        {
            case 1:
                RegistarAtleta(atletas);
            break;

            case 2:
                ApresentarAtletas(atletas);
            break;

            case 3:
                printf("\nInsira o codigo do atleta que deseja apresentar: ");
                scanf("%d", &codigo);
                ApresentarAtletaporCod(atletas, codigo);
            break;

            case 4:
                MediaAltura(atletas);
            break;

            case 5:
                //Passar o valor de continuar para 0, saindo assim do ciclo
                continuar = 0;
            break;

            default:
                //Caso escolha uma opçao invalida o programa vai voltar a apresentar o Menu
            break;
        }
    }

    return 0;
}


