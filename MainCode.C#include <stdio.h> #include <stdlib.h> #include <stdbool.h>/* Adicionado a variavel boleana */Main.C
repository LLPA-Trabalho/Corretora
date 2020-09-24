#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /* Adicionado a variavel boleana */


typedef struct 
{
    int   ano_Construcao, ano_Reformado, id, modo;
    bool  condominio, construido, vendido, reformado;
    char  vendedor[50], cliente[50], tipo_De_Imovel[50], bairro[50], rua[50];
    float condominio_Valor, valor;
    
}Imovel;

void Verificacao()
{
    
}

int main()
{
    int modo;

    do{
        system("cls");
        printf("Digite o tipo de oporacao que voce deseja fazer\n");
        printf("1 Para Comprar, 2 Para Adicionar um imovel e 3 para efetuar uma verificao\n");
        scanf("%d",&modo);
    }while(modo < 1 || modo > 3);

    if(modo == 1){

    }else if(modo == 2){

    }else{

    }

    return 0;
}
