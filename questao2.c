#include<stdio.h>

void tempo(int seg)
{ 
 int h , m, s;

 h=seg/3600;
 m=(seg%3600)/60;
 s=(seg%3600)%60;
 printf("%dh : %dm : %ds\n", h,m,s);

}







int main()
{
    
    int seg;
    printf("Entre com um valor em segundos:");
    scanf("%d", &seg);
    tempo(seg);
    
system("pause");
return 0;
}
