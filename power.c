#include<stdio.h>
int main(){
    int a,b,d=1;
    printf("....enter the number\n");
    scanf("%d",&a);
    printf("....enter the power\n");
    scanf("%d",&b);
    while (b!=0) // use while loop
    {
       d*=a;
       --b;
    }
    printf("%d\n",d);
    for(b;b!=0;--b)//use for loop
    {
        d*=a;
    }


    printf("%d\n",d);
    

    return 0;
}