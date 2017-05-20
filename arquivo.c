#include <stdio.h>
#include <string.h>
//CLIENTE EM VETOR DE STRUCT
//MEDIA DOS LIMITES IMPRESSO NA TELA
//ESCREVER NA TELA / ARQUIVO OS CLIENTES COM LIMITE ACIMA DA MÉDIA

struct cliente
{
char var_sexo;
char nomecli[50];
int cd_cli;
int vl_idade;
float vl_limite_credito;
}


int main()
{
 
FILE *arq_cliente;
int indice = 0;
arq_cliente = fopen("CLIENTE.TXT", "r");
struct cliente vet[100];

 if (arq_cliente == NULL)
 {
   printf("\nArquivo CLIENTE.TXT nao pode ser aberto.");
   printf("\nOcorreu um Erro Grave ! Use alguma tecla para finalizar !");
   getch();
 }
 
 else
 {
   var_arquivo_aux = fscanf(arq_cliente,"%d %c %s %d %f",&cd_cli,&var_sexo, nomecli, &vl_idade, &vl_limite_credito);
   while (var_arquivo_aux != EOF)
 {
 indice = indice + 1;
 printf("\n Dados do %d § cliente : \n ", indice);
 printf("\n Codigo do Cliente...: %d Sexo..: %c", cd_cli, var_sexo);
 printf("\n Nome do Cliente.................: %s ", nomecli);
 printf("\n Idade..........: %d Credito....: %8.2f", vl_idade, vl_limite_credito);
 printf("\n-------------------------------------------------------------- [Tecle algo] !");
 getch();
 var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f",&cd_cli, &var_sexo
,nomecli, &vl_idade, &vl_limite_credito);
  }
 fclose (arq_cliente);
 printf("\n *** FIM : [Tecle algo] !");
 getch();
 }
}
    
    
    
    
    
    
    
    
    
    
    
    
    

