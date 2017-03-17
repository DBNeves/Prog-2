//Faça uma funçao que retorne a divisao INTEIRA de dois numeros INTEIROS e atraves de um parametro por referencia retorne tambem o resto da divisao//

#include<stdio.h>
int divisao(int*a,int*b,int*c)
{
*c= *a / *b;
*b= *a % *b;
return *c;

}



int main()
{
 int a, b, resp,c;
 printf("Entre com dois numeros inteiros: ");
 scanf("%d %d", &a, &b);
 
 resp=divisao(&a,&b,&c);
 printf("Valor inteiro= %d\n", resp);

 printf("Resto inteiro da divisao = %d\n",b);
 system("pause");
 return 0;

}
