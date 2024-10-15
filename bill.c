#include<stdio.h>

int a,b,b1,b2,b3,b4,c,c1,c2,c3,c4,d,d1,d2,d3,d4,T;
float i,f;
void main()
{
    printf("Enter Bill no: ");
    scanf("%d",&a);
    printf("Enter computer QTY: ");
    scanf("%d",&b);
    printf("Enter compuer Price: ");
    scanf("%d",&c);
    printf("Enter CPU QTY: ");
    scanf("%d",&b1);
    printf("Enter CPU price: ");
    scanf("%d",&c1);
    printf("Enter hardisk QtY: ");
    scanf("%d",&b2);
    printf("Enter hardisk price: ");
    scanf("%d",&c2);
    printf("Enter RAM QTY: ");
    scanf("%d",&b3);
    printf("Enter RAM price: ");
    scanf("%d",&c3);
    printf("Enter mouse QTY: ");
    scanf("%d",&b4);
    printf("Enter mouse price: ");
    scanf("%d",&c4);
    printf("Discout in %: ");
    scanf("%f",&i);
    
    printf("%25s","XYZ Company\n");
    printf("%25s","PARUL UNIVERSITY\n");
    printf("==============================\n");
    printf("Bill no: %-6d %15s",a,"Date: 27/07/2024\n");
    printf("==============================\n");
    printf("%-4s %-10s %-4s %-4s","No","product","Qty","price\n");
    printf("\n%-4s %-10s %-4d %-4d","1","Computer",b,c,"\n"); 
    printf("\n%-4s %-10s %-4d %-4d","2","CPU",b1,c1,"\n");
    printf("\n%-4s %-10s %-4d %-4d","3","hardisk",b2,c2,"\n");
    printf("\n%-4s %-10s %-4d %-4d","4","RAM",b3,c3,"\n");
    printf("\n%-4s %-10s %-4d %-4d","5","Mouse",b4,c4,"\n");
    printf("\n----------------------------\n");
    d=b*c;
    d1=b1*c1;
    d2=b2*c2;
    d3=b3*c3;
    d4=b4*c4;
    T=d+d1+d2+d3+d4;
    f=T*i/100;
    printf("Total Amount: %10d",T);
    printf("\nAfter discount: %10f",T-f);
    printf("%15s Thank you");
    
}
