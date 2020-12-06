#include <stdio.h>
#include <stdlib.h>
#define MAX_CHARACTER 50
#define MAX_NUM 10
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"portuguese"); /* Colocando a lingua do programa em portugues para poder utilizar nos printf*/

   int i,j,modo; /* Variavel i serve como um contador para o for do modo 1, Variavel j server para a quantidade de imoves que voce deseja cadastrar no modo 1*/
   int id[MAX_NUM];
   char tipo_imovel[MAX_NUM][MAX_CHARACTER], bairro[MAX_NUM][MAX_CHARACTER],rua[MAX_NUM][MAX_CHARACTER];

   printf("Para cadastrar um imovel\nDigite 1\n Para ver um imovel já cadastrado\nDigite 2\n Para acessar como vendedor e alterar um ímovel\nDigite 3\n");
   scanf("%d",&modo);
    if(modo == 1){
        printf("Digites o número de imóveis a cadastrar\n");
        scanf("%d",&j);
        for(i=0;i<j;i++){
            printf("\nDigite o tipo de imovel\n Apartamento ou Casa\n");
            fflush(stdin);
            gets(tipo_imovel[i]);

            printf("\nDigite o bairro do imovel\n");
            gets(bairro[i]);

            printf("\nDigite a rua do imovel\n");

            gets(rua[i]);

            printf("\nDigite o numero do imovel\n");

            scanf("%d",&id[i]);
        }

        for(i=0;i<j;i++){
            printf("Novos Imoveis Cadastrados");
            printf("\nO(a) %s\n",tipo_imovel[i]);
            printf(" que esta localizado no bairro:%s\n",bairro[i]);
            printf("na rua:%s\n",rua[i]);
            printf("no numero:%d\n",id[i]);
        }
        }
        if(modo == 2){

            strcpy(tipo_imovel[0], "Casa");
            strcpy(bairro[0] , "José das neves");
            strcpy(rua[0] , "Flores");
            id[0] = 4569;


            strcpy(tipo_imovel[1] ,"Apartamento");
            strcpy(bairro[1] , "Alto do Asilo");
            strcpy(rua[1] , "Margarida Rosas");
            id[1] = 98;


            strcpy(tipo_imovel[2] , "Casa");
            strcpy(bairro[2] , "Centro");
            strcpy(rua[2] , "Acapulco");
            id[2] = 56;


            strcpy(tipo_imovel[3] , "Apartamento");
            strcpy(bairro[3] , "Torre");
            strcpy(rua[3] , "Extremo Sul");
            id[3] = 23;



        for(i=0;i<4;i++){
            printf("Imovél %d",i+1);
            printf("\nO(a) %s\n",tipo_imovel[i]);
            printf(" bairro:%s\n",bairro[i]);
            printf("rua:%s\n",rua[i]);
            printf("numero:%d\n",id[i]);
            }
        }
        if(modo == 3){

            strcpy(tipo_imovel[0], "Casa");
            strcpy(bairro[0] , "José das neves");
            strcpy(rua[0] , "Flores");
            id[0] = 4569;

            strcpy(tipo_imovel[1] ,"Apartamento");
            strcpy(bairro[1] , "Alto do Asilo");
            strcpy(rua[1] , "Margarida Rosas");
            id[1] = 98;

            strcpy(tipo_imovel[2] , "Casa");
            strcpy(bairro[2] , "Centro");
            strcpy(rua[2] , "Acapulco");
            id[2] = 56;

            strcpy(tipo_imovel[3] , "Apartamento");
            strcpy(bairro[3] , "Torre");
            strcpy(rua[3] , "Extremo Sul");
            id[3] = 23;

            for(i=0;i<4;i++){
            printf("Imovél %d",i+1);
            printf("\nO(a) %s\n",tipo_imovel[i]);
            printf(" bairro:%s\n",bairro[i]);
            printf("rua:%s\n",rua[i]);
            printf("numero:%d\n",id[i]);
            }
            printf("Digite o numero do imovel a qual deseja alterar");
            scanf("%d",&j);
            if(j==1){
                printf("\nO(a) %s\n",tipo_imovel[0]);

                fflush(stdin);

                printf("\nDigite o bairro do imovel\n");

                gets(bairro[0]);

                printf("\nDigite a rua do imovel\n");

                gets(rua[0]);

                printf("\nDigite o numero do imovel\n");

                scanf("%d",&id[0]);
            }
            if(j==2){
                printf("\nO(a) %s\n",tipo_imovel[1]);

                fflush(stdin);

                printf("\nDigite o bairro do imovel\n");

                gets(bairro[1]);

                printf("\nDigite a rua do imovel\n");

                gets(rua[1]);

                printf("\nDigite o numero do imovel\n");

                scanf("%d",&id[1]);
            }
            if(j==3){
                printf("\nO(a) %s\n",tipo_imovel[2]);

                fflush(stdin);

                printf("\nDigite o bairro do imovel\n");

                gets(bairro[2]);

                printf("\nDigite a rua do imovel\n");

                gets(rua[2]);

                printf("\nDigite o numero do imovel\n");

                scanf("%d",&id[2]);
            }
            if(j==4){
                printf("\nO(a) %s\n",tipo_imovel[3]);

                fflush(stdin);

                printf("\nDigite o bairro do imovel\n");

                gets(bairro[3]);

                printf("\nDigite a rua do imovel\n");

                gets(rua[3]);

                printf("\nDigite o numero do imovel\n");

                scanf("%d",&id[3]);
            }
            for(i=0;i<4;i++){
            printf("\nO(a) %s\n",tipo_imovel[i]);
            printf(" bairro:%s\n",bairro[i]);
            printf("rua:%s\n",rua[i]);
            printf("numero:%d\n",id[i]);
            }
        }

    return 0;
}
