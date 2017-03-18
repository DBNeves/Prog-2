#include<stdio.h>


int main()
{
  
    int a,b,resp;
    printf("Entre com dois numeros inteiros:");
    scanf("%d %d",&a, &b);
    resp=soma(a, b);
    printf("Total = %d\n", resp);    
 system("pause");
 return 0;   
}



int soma(int a, int b)
{
   int total=0;
   int i;
   if(a>=b)
   {
           printf("Intevalo invalido\n");        
   }    
   else
   {
       for(i=a+1;i<b;i++)
       {
                total=total+i; 
       }   
   }
   return total;

}






