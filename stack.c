#include<stdio.h>

int top=-1 ,stak[4];

int push(int n){   
    if (top==4){
        printf("The stack is full");
        
    }
    else{
        ++top;     
        stak[top]=n;  
        printf("%d inserted",n);
    }
    return 0;
}
 int pop(){
    int a ;
    
    if (top==-1)
    {
        printf("The stack is emity");
    }
    else{
        a=stak[top];
        printf("Pop first eliment");
    }
    return a;
 }
int main(){
    int poper;
     push(23);
     push(58);
     poper=pop();

    return 0;
}