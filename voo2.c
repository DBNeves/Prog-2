#include<stdio.h>
#include<stdlib.h>

int main()
{
int voos[3],lugdisp[3];
int i,id,numvoo;
int pos = -1; 

    for(i=0;i<=2;i++)
    {
         printf("Informe o numero do voo: ");
         scanf("%d",&voos[i]);
         printf("Informe a quantidade de lugares: ");
         scanf("%d",&lugdisp[i]);              
    }
    
    printf("Informe sua ID: ");
    scanf("%d",&id);
    
    while(id!=9999)
    {
      printf("Informe o voo: ");
      scanf("%d",&numvoo);
      
      for(i=0;i<=2;i++)
      {
            if(numvoo == voos[i])
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
        printf("ID: %d Numero do voo: %d",id,numvoo);
        lugdisp[pos]--;
      
       }
      else
      {
        printf("Voo lotado!\n");
      }
      }
      else
      {
       printf("Voo inexistente!\n");
      }
      printf("Informe sua ID:\n");
      scanf("%d",&id);
    
    }
    
system("pause");
return 0;
}
