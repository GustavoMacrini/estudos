//criptografa de maneira simples um arquivo txt
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int confirmarArquivo();
int menu();
int cripto(int flag);
int descripto(int flag);
void mostrar();

int main(){
    int op, confirm; 
    
    int flag = 0; //flag = 1 texto criptografado; flag = -1 texto descriptografado;
    //flag começa em 0 para a primeira ação determinar se o arquivo esta ou não criptografado no inicio

    confirm = confirmarArquivo(); //confirm = 1 tudo certo; confirm = -1 texto.txt não existe
    if(confirm == -1){
        printf("\nProblema ao abrir o arquivo\n\n");
        return 0;
    }

    do{

        op = menu();

        switch(op){
            case 1:
                flag = cripto(flag);
                break;
            case 2:
                flag = descripto(flag);
                break;
            case 3:
                mostrar();
                break;
            case 9:
                printf("\nSaindo...\n\n");
                break;
            default:
                printf("\nEscolha Invalida!!!\n\n");
        }

        system("pause");

    }while(op !=9);

    return 0;
}

int menu(){
    int escolha;
    system("cls");
    printf("---------- MENU ----------\n");
    printf("1 - Criptografar texto\n");
    printf("2 - Descriptografar texto\n");
    printf("3 - Mostrar texto\n");
    printf("9 - Sair\n");
    printf("--------------------------\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    return escolha;
}

int confirmarArquivo(){
    FILE *arquivo;

    arquivo = fopen("texto.txt", "r");

    if(arquivo == NULL){
        fclose(arquivo);
        return -1;
    }
    else{
        fclose(arquivo);
        return 1;
    }
         
}

void mostrar(){
    char texto[MAX] = {NULL};
    FILE *arquivo;
    arquivo = fopen("texto.txt","r");

    for(int i = 0; !feof(arquivo); i++)
        texto[i] = fgetc(arquivo);
    
    system("cls");
    printf("-------------------- TEXTO --------------------\n");
    printf("\n%s\n\n", texto);
    printf("-----------------------------------------------\n");
}

int cripto(int flag){

    if(flag == 1){
        printf("\n------------------------------------\n");
        printf("Texto ja esta criptografado\n");
        printf("------------------------------------\n");
        return 1;
    }

    char textoIncrip[MAX] = {NULL};
    FILE *arquivo;
    arquivo = fopen("texto.txt","r");

    for(int i = 0; !feof(arquivo); i++)
        textoIncrip[i] = fgetc(arquivo)+3;

    fclose(arquivo);

    arquivo = fopen("texto.txt","w");
    
    //-1 no strlen evita lixo no final da variavel
    for(int i = 0; i < strlen(textoIncrip)-1; i++)
        fputc(textoIncrip[i],arquivo);

    printf("\n------------------------------------\n");
    printf("Texto Criptografado com Sucesso\n");
    printf("------------------------------------\n");

    fclose(arquivo);

    return 1;
}

int descripto(int flag){

    if(flag == -1){
        printf("\n------------------------------------\n");
        printf("Texto ja esta descriptografado\n");
        printf("------------------------------------\n");
        return -1;
    }

    char textoDescrip[MAX] = {NULL};

    FILE *arquivo;
    arquivo = fopen("texto.txt","r");

    for(int i = 0; !feof(arquivo); i++)
        textoDescrip[i] = fgetc(arquivo)-3;

    fclose(arquivo);

    arquivo = fopen("texto.txt","w");

    //-1 no strlen evita lixo no final da variavel
    for(int i = 0; i < strlen(textoDescrip)-1;i++)
        fputc(textoDescrip[i],arquivo);

    printf("\n------------------------------------\n");
    printf("Texto Descriptografado com Sucesso\n");
    printf("------------------------------------\n");

    fclose(arquivo);

    return -1;
}
