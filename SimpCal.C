/* programmed by Harshad joshi */
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,op,x;
    printf("************************SIMPLE CALCULATOR*************************\n");
    printf("------------------------------------------------------------------\n");
    printf("Enter two no.\n");
    scanf("%d\t%d",&a,&b);
    do
    {
    printf("\nChoose any one option\n");
    printf("\nEnter 1 for add");
    printf("\nEnter 2 for sub");
    printf("\nEnter 3 for mult");
    printf("\nEnter 4 for div\n");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        printf("\nAddition is:%d\n",a+b);
        break;
    case 2:
        printf("\nsubtraction is:%d\n",a-b);
        break;
    case 3:
        printf("\nmultiplication is:%d\n",a*b);
        break;
    case 4:
        printf("\ndivision is:%d\n",a/b);
        break;
    default :
        printf("ERROR!choose correct option");
        break;
    }
      printf("\n--------------------------------------------------------------\n");
    printf("\nIf you want to continue press any no. except 0: ");
    scanf("%d",&x);
    printf("\n----------------------------------------------------------------\n");
    }
     while(x!=0);
}
