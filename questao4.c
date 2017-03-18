#include<stdio.h>
#include<math.h>
int main()
{
int h,c1,c2,resp;


printf("Entre com os lados do triangulo:");
scanf("%d %d %d",&h ,&c1, &c2);


triangulo(h,c1,c2);

system("pause");
return 0;
}


int triangulo(h,c1,c2)
{
 
 if(h*h==c1*c1+c2*c2)
 {
   printf("E um triangulo retangulo.\n");   
 }
 else
 {
   printf("Nao e um triangulo retangulo.\n");   
 }
return 0;
}
