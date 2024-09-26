#include<stdio.h>
int main()
{
    float a,b;
    int ch;
    int op;
    lable:
    printf("enter the value of a:");
    scanf("%f",&a);
    printf("enter the value of b:");
    scanf("%f",&b);
    printf("enter the funtion:\n");
    scanf("%d",&ch);
    if(ch==1)
    {
      goto plus;
    }
    if(ch==2)
    {
       goto minus;
    }
    if(ch==3)
    {
        goto product;
    }
    if(ch==4)
    {
       goto divide;
    }
    plus:
    printf("%f",a+b);
      printf("\ndo you want to continue:");
     scanf("%d",&op);
     if (op==1)
    {
        goto lable;
    }else 
    {
        return 0;
    }
    minus:
    printf("%f",a-b);
    printf("\ndo you want to continue:");
     scanf("%d",&op);
     if (op==1)
    {
        goto lable;
    }else 
    {
        return 0;
    }
    product:
    printf("%f",a*b);
    printf("\ndo you want to continue:");
     scanf("%d",&op);
     if (op==1)
    {
        goto lable;
    }else 
    {
        return 0;
    }
    divide:
    printf("%f",a/b);  
    printf("\ndo you want to continue:");
     scanf("%d",&op);
     if (op==1)
    {
        goto lable;
    }else 
    {
        return 0;
    }
    return 0;
}