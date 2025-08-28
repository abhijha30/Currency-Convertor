// Problem c-17:-Write a program to convert currency. 
#include<stdio.h>
#include<conio.h>
void main()
{
    float rupees,inr,dollar;
    int ch;
    printf("enter the value for currency");
    scanf("%d",&ch);
    printf("\t 1.rupees ->dollar\n");
    printf("\t 2.dollar ->rupees\n");
    printf("\t 3.pound ->rupees\n");
    printf("\t 4.euro ->rupees\n");
    printf("\t enter your choice\n");
    scanf("%d",&ch);
    switch(ch)

    
   { case 1:
    printf("enter the currency in rupees =");
    scanf("%f",&rupees);
    dollar=rupees/80;
    printf("the currency in dollar is =%.2f",dollar);
    break;

    case 2:
    printf("enter the currency in dollar =");
    scanf("%f",&rupees);
    inr=rupees*65;
    printf("the currency in rupees is =%.2f",inr);
    break;

    case 3:
    printf("enter the currency in pound =");
    scanf("%f",&rupees);
    inr=rupees*100;
    printf("the currency in rupees is =%.2f",inr);
    break;

    case 4:
    printf("enter the currency in euro =");
    scanf("%f",&rupees);
    inr=rupees*85;
    printf("the currency in rupees is =%.2f",inr);
    break;

    case 5:
    printf("enter the currency in kuwaiti dinar =");
    scanf("%f",&rupees);
    inr=rupees*269;
    printf("the currency in rupees is =%.2f",inr);
    break;

    case 6:
    exit(0);
    }
    
    getch();

}


