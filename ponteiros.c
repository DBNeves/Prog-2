#include<stdio.h>


int soma(int*a,int*b)
{
 return *a + *b;
}






int main()
{
    int c, d, resp;
    
    scanf("%d %d", &c,&d);
    
    resp=soma(&c, &d);

    printf("%d",resp);
    
    system("pause");
    return 0;

}
