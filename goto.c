#include<stdio.h>
int main()
{
    float a,b;
    char ch;
    char op;
    lable:
    printf("enter the value of a:");
    scanf("%f",&a);
    printf("enter the value of b:");
    scanf("%f",&b);
    printf("enter the funtion:\n");
    scanf("%c",&ch);
    if(ch=='+')
    {
      goto plus;
    }
    if(ch=='-')
    {
       goto minus;
    }
    if(ch=='*')
    {
        goto product;
    }
    if(ch=='/')
    {
       goto divide;
    }
    plus:
    printf("%f",a+b);
      printf("\ndo you want to continue:");
     scanf("%c",&op);
     if (op=="yes")
    {
        goto lable;
    }else 
    {
        return 0;
    }
    minus:
    printf("%f",a-b);
    printf("\ndo you want to continue:");
     scanf("%c",&op);
     if (op=="yes")
    {
        goto lable;
    }else 
    {
        return 0;
    }
    product:
    printf("%f",a*b);
    printf("\ndo you want to continue:");
     scanf("%c",&op);
     if (op=="yes")
    {
        goto lable;
    }else 
    {
        return 0;
    }
    divide:
    printf("%f",a/b);  
    printf("\ndo you want to continue:");
     scanf("%c",&op);
     if (op=="yes")
    {
        goto lable;
    }else 
    {
        return 0;
    }
    return 0;
}
