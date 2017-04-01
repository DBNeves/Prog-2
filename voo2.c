#include<stdio.h>
#include<stdlib.h>

void preenche(int *voos,int *lugdisp)
{
int i;
for(i=0;i<=2;i++)
    {
         printf("Informe o numero do voo: ");
         scanf("%d",&voos[i]);
           printf("--------------------------------------------\n");
         printf("Informe a quantidade de lugares: ");
         scanf("%d",&lugdisp[i]);  
           printf("--------------------------------------------\n");            
    }
}

void disponib(int id, int *voo, int *lugdisp)
{
int pos = -1;
int i,numvoo;
while(id!=9999)
{     printf("Informe o voo: ");
      scanf("%d",&numvoo);
      printf("--------------------------------------------\n");
for(i=0;i<=2;i++)
      {
            if(numvoo == voo[i])
            {
                      pos=i;
                      break;
            }
      }
      if(pos!=-1)
      {
       if(lugdisp[pos]!=0)
       {
        printf("Reserva feita com sucesso!\n");
          printf("--------------------------------------------\n");
        printf("ID: %d Numero do voo: %d\n",id,numvoo);
          printf("--------------------------------------------\n");
        lugdisp[pos]--;
      
       }
      else
      {
        printf("Voo lotado!\n");
          printf("--------------------------------------------\n");
      }
      }
      else
      {
       printf("Voo inexistente!\n");
         printf("--------------------------------------------\n");
      }
      printf("Informe sua ID:");
      scanf("%d",&id);
        printf("--------------------------------------------\n");
}
 }



int main()
{
int voos[3],lugdisp[3];
int i,id,numvoo;


    
    preenche(voos,lugdisp);
      printf("--------------------------------------------\n");
    printf("Informe sua ID: ");
    scanf("%d",&id);
      printf("--------------------------------------------\n");
    
   
      disponib(id,voos,lugdisp);
    
    
system("pause");
return 0;
}
