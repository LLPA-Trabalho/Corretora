#include <stdio.h>
#include <stdlib.h>
#define MAX_CHARACTER 50
#define MAX_NUM 10
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese"); /* Colocando a lingua do programa em portugues para poder utilizar nos printf*/

    int i,j,modo; /* Variavel i serve como um contador para o for do modo 1, Variavel j server para a quantIdade de imoves que voce deseja cadastrar no modo 1*/
    int Id[MAX_NUM];
    char Tipo_De_Imovel[MAX_NUM][MAX_CHARACTER], Bairro[MAX_NUM][MAX_CHARACTER],Rua[MAX_NUM][MAX_CHARACTER];

    printf("Para cadastrar um imovel\nDigite 1\nPara ver um imovel já cadastrado\nDigite 2\nPara acessar como vendedor e alterar um ímovel\nDigite 3\n");
    scanf("%d",&modo);/*Selecionar o modo*/

    if(modo == 1){/*Condicional para selecionar o modo de uso*/
        printf("Digites o número de imóveis a cadastrar\n");
        scanf("%d",&j);

        for(i=0;i<j;i++){
            printf("\nDigite o tipo de imovel\n Apartamento ou Casa\n");
            fflush(stdin); /*Flush para nao acontecer erros com o gets*/
            gets(Tipo_De_Imovel[i]);/*Gets para armazenar uma nova string*/

            printf("\nDigite o Bairro do imovel\n");
            gets(Bairro[i]);/*Gets para armazenar uma nova string*/

            printf("\nDigite a Rua do imovel\n");

            gets(Rua[i]);/*Gets para armazenar uma nova string*/

            printf("\nDigite o numero do imovel\n");

            scanf("%d",&Id[i]);
        }

        for(i=0;i<j;i++){
            printf("Novos Imoveis Cadastrados");
            printf("\nO(a) %s\n",Tipo_De_Imovel[i]);
            printf("que esta localizado no Bairro:%s\n",Bairro[i]);
            printf("na Rua:%s\n",Rua[i]);
            printf("no numero:%d\n",Id[i]);
        }
    }
    if(modo == 2){

        strcpy(Tipo_De_Imovel[0], "Casa");      /*Strcpy usado para atribuir valores a uma matris de string*/
        strcpy(Bairro[0] , "José das neves");
        strcpy(Rua[0] , "Flores");
        Id[0] = 4569;                           /*Atribuindo o ID de um imovel*/


        strcpy(Tipo_De_Imovel[1] ,"Apartamento");/*Strcpy usado para atribuir valores a uma matris de string*/
        strcpy(Bairro[1] , "Alto do Asilo");
        strcpy(Rua[1] , "MargarIda Rosas");
        Id[1] = 98;                              /*Atribuindo o ID de um imovel*/


        strcpy(Tipo_De_Imovel[2] , "Casa");     /*Strcpy usado para atribuir valores a uma matris de string*/
        strcpy(Bairro[2] , "Centro");
        strcpy(Rua[2] , "Acapulco");
        Id[2] = 56;                             /*Atribuindo o ID de um imovel*/


        strcpy(Tipo_De_Imovel[3] , "Apartamento");/*Strcpy usado para atribuir valores a uma matris de string*/
        strcpy(Bairro[3] , "Torre");
        strcpy(Rua[3] , "Extremo Sul");
        Id[3] = 23;                             /*Atribuindo o ID de um imovel*/



        for(i=0;i<4;i++){/* 4 eo numeros Cadastrado para a utilizacao do modo 2*/
            printf("Imovél %d",i+1);
            printf("\nO(a) %s\n",Tipo_De_Imovel[i]);
            printf(" Bairro:%s\n",Bairro[i]);
            printf("Rua:%s\n",Rua[i]);
            printf("numero:%d\n",Id[i]);
        }
    }
    if(modo == 3){

        strcpy(Tipo_De_Imovel[0], "Casa");      /*Strcpy usado para atribuir valores a uma matris de string*/
        strcpy(Bairro[0] , "José das neves");
        strcpy(Rua[0] , "Flores");
        Id[0] = 4569;                           /*Atribuindo o ID de um imovel*/

        strcpy(Tipo_De_Imovel[1] ,"Apartamento");/*Strcpy usado para atribuir valores a uma matris de string*/
        strcpy(Bairro[1] , "Alto do Asilo");
        strcpy(Rua[1] , "MargarIda Rosas");
        Id[1] = 98;                              /*Atribuindo o ID de um imovel*/

        strcpy(Tipo_De_Imovel[2] , "Casa");     /*Strcpy usado para atribuir valores a uma matris de string*/
        strcpy(Bairro[2] , "Centro");
        strcpy(Rua[2] , "Acapulco");
        Id[2] = 56;                             /*Atribuindo o ID de um imovel*/

        strcpy(Tipo_De_Imovel[3] , "Apartamento");  /*Strcpy usado para atribuir valores a uma matris de string*/
        strcpy(Bairro[3] , "Torre");
        strcpy(Rua[3] , "Extremo Sul");
        Id[3] = 23;                             /*Atribuindo o ID de um imovel*/

        for(i=0;i<4;i++){
            printf("Imovél %d",i+1);
            printf("\nO(a) %s\n",Tipo_De_Imovel[i]);
            printf(" Bairro:%s\n",Bairro[i]);
            printf("Rua:%s\n",Rua[i]);
            printf("numero:%d\n",Id[i]);
        }

        printf("Digite o numero do imovel a qual deseja alterar");
        scanf("%d",&j);

        if(j==1){
            printf("\nO(a) %s\n",Tipo_De_Imovel[0]);

            fflush(stdin);/*Flush para nao acontecer erros com o gets*/

            printf("\nDigite o Bairro do imovel\n");

            gets(Bairro[0]);/*Gets para armazenar uma nova string*/

            printf("\nDigite a Rua do imovel\n");

            gets(Rua[0]);/*Gets para armazenar uma nova string*/

            printf("\nDigite o numero do imovel\n");

            scanf("%d",&Id[0]);
        }
        if(j==2){
            printf("\nO(a) %s\n",Tipo_De_Imovel[1]);

            fflush(stdin);/*Flush para nao acontecer erros com o gets*/

            printf("\nDigite o Bairro do imovel\n");

            gets(Bairro[1]);/*Gets para armazenar uma nova string*/

            printf("\nDigite a Rua do imovel\n");

            gets(Rua[1]);/*Gets para armazenar uma nova string*/

            printf("\nDigite o numero do imovel\n");

            scanf("%d",&Id[1]);
        }
        if(j==3){
            printf("\nO(a) %s\n",Tipo_De_Imovel[2]);

            fflush(stdin);/*Flush para nao acontecer erros com o gets*/

            printf("\nDigite o Bairro do imovel\n");

            gets(Bairro[2]);/*Gets para armazenar uma nova string*/

            printf("\nDigite a Rua do imovel\n");

            gets(Rua[2]);/*Gets para armazenar uma nova string*/

            printf("\nDigite o numero do imovel\n");

            scanf("%d",&Id[2]);
        }
        if(j==4){
            printf("\nO(a) %s\n",Tipo_De_Imovel[3]);

            fflush(stdin);/*Flush para nao acontecer erros com o gets*/

            printf("\nDigite o Bairro do imovel\n");

            gets(Bairro[3]);/*Gets para armazenar uma nova string*/

            printf("\nDigite a Rua do imovel\n");

            gets(Rua[3]);/*Gets para armazenar uma nova string*/

            printf("\nDigite o numero do imovel\n");

            scanf("%d",&Id[3]);
        }
        for(i=0;i<4;i++){
            printf("\nO(a) %s\n",Tipo_De_Imovel[i]);
            printf(" Bairro:%s\n",Bairro[i]);
            printf("Rua:%s\n",Rua[i]);
            printf("numero:%d\n",Id[i]);
        }
    }

    return 0;
}
