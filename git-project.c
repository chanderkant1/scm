#include<stdio.h>
void mul(int a,int b);
void div(int a,int b);
int main(){
    int a,b;
    printf("Enter first digit = ");
    scanf("%d",&a);
    printf("Enter second digit = ");
    scanf("%d",&b);
    
    mul(a,b);
    div(a,b);
    sum(a,b);
    sub(a,b);
    
    return 0;
}

void mul(int a,int b) 
{
    printf("%d",a+b);
}  

void div(int a,int b) 
{
    printf("%d",a/b);
}  

