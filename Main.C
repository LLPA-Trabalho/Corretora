#include <stdio.h>
#include <stdlib.h>
#define MAX_CHARACTER 50
int main()
{
    int   ano_Construcao, ano_Reformado, id, modo;
    int   condominio, construido, vendido, reformado;
    char  vendedor[MAX_CHARACTER], cliente[MAX_CHARACTER], tipo_De_Imovel[MAX_CHARACTER], bairro[MAX_CHARACTER], rua[MAX_CHARACTER];
    float condominio_Valor, valor;

    printf("Para cadastrar um imovel\nDigite 1\n");
    scanf("%d",&modo);
    if(modo == 1){

        printf("Digite o nome do vendedor\n");
        gets(vendedor);

        puts("\nDigite o nome do comprador");

        gets(cliente);

        puts("\nDigite o tipo de imovel\n Apartamento ou Casa");

        gets(tipo_De_Imovel);

        puts("\nDigite o bairro do imovel");

        gets(bairro);

        puts("\nDigite a rua do imovel");

        gets(rua);

        puts("\nO Imovel ja foi construido ?\n 0 para sim e 1 para nao");

        scanf("%d",&construido);

        puts("\nA Imovel ja foi vendido ?\n 0 para sim e 1 para nao");

        scanf("%d",&vendido);

        puts("\nA Imovel esta em um condominio ?\n 0 para sim e 1 para nao");

        scanf("%d",&condominio);

        puts("\nA Imovel ja foi reformado ?\n 0 para sim e 1 para nao");

        scanf("%d",&reformado);

        puts("\nAno de construcao ou termino de construcao");

        scanf("%d",&ano_Construcao);

        if(ano_Reformado == 0){
            puts("\nAno da reforma");

            scanf("%d",&ano_Reformado);
        }

        puts("\nDigite o valor do imovel");

        scanf("%f",&valor);

        if(condominio == 0){
            puts("\nDigite o valor do condominio");

            scanf("%f",&condominio_Valor);
        }

        if(vendido == 1){
            printf("\nO Vendedor :%s,",vendedor);
            printf(" ira vender para o comprador:%s ",cliente);
            printf("\nO(a) %s,",tipo_De_Imovel);
            printf(" que esta localizado no bairro:%s",bairro);
            printf("na rua:%s",rua);
            if(construido == 0){
                 printf("\nQue foi construida no ano de %d",ano_Construcao);
            }else{
                 printf("\nQue tera sua construcao encerrada no ano de %d",ano_Construcao);
            }
            if(reformado == 0){
                printf("\nQue foi reformado no ano de %d",ano_Reformado);
            }
            if(condominio == 0){
                printf("\nQue esta localizado em um condominio");
                printf("\nO Valor total do imovel sera de %.2f + %.2f por mes por conta do condominio",valor,condominio_Valor);
            }else{
                printf("\nO Valor total do imovel sera de %.2f ",valor);
            }

        }else{
            puts("Imovel vendido");
        }
    }else{
        printf("Entrada invalida");
    }
    return 0;
}
