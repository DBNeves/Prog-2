#include<stdio.h>
#include<string.h>

void inverte(int *vet,int tam)
{
int i,temp;

for(i=0;i<tam/2;i++)
{
temp = vet[i];
vet[i]=vet[(tam-1)-i];
vet[(tam-1)-i] = temp;
}

}

int main()
{
int i;
int vet[6]; 
int tam = 6;
printf("Entre com os elementos do vetor: ");
for(i=0;i<=5;i++)
{
scanf("%d",&vet[i]);
}
inverte(vet,tam);

for(i=0;i<=5;i++)
{
 printf("%d",vet[i]);

}



system("pause");
return 0;
}
