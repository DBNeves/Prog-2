#include<stdio.h>




 
  int main()
{    float n1,n2,n3,resp;
     char l;
     
     printf("Escolha do tipo de media(a/p): ");
     scanf("%c",l);
     
      printf("Entre com 3 notas:\n");
     scanf("%f---%f---%f---\n",&n1,&n2,&n3);
     printf("p = Media Aritmetica");
     printf("a = Media Ponderada");
     
     
     resp = media(n1, n2, n3, l);
     printf("Media = %f", resp);

system("pause");
return 0;

}

  int media( n1, n2, n3,l)
 {
  float resp;
    if( l=='a')
  {
          resp=(n1+n2+n3)/3; 
      
  }
   if(l=='p')
  {
           resp=(n1*5+n2*3+n3*2)/10;
           
  }
 else
  {
           printf("Opcao invalida");
  }
return resp;
}
