// [8,6,4,3,5] ,size=5
// insert eliment in 3 position


#include<stdio.h>
int array[7]={8,6,4,3,5} ,Asize=5;
void display(  ){    
    int i;
    for (i=0;i<Asize;i++){
        printf("%d\n",array[i]);
    }
    printf("all eliment are here✌✌\n Arry size is : %d\n",Asize);
}

void insert(int pos,int elem){
    int i;
    for (i=Asize;i>=pos;i--){
        array[i+1]=array[i];
        }
    array[pos]=elem;
    Asize++;
    printf("insert complit 👍👍\n Now arry size is : %d\n",Asize);
}


void delete(int pos){
    int element=array[pos];
    int i;
    for(i=pos;i<=Asize-1;i++){
        array[i]=array[i+1];          
    }
    Asize--;
    printf("Deletion is done ✔✔\nThe delet eliment is😥 : %d\nNow arry size is : %d\n",element,Asize);
}

int main(){
    // int size=sizeof(array)/sizeof(array[0]); //for get the size of the array
    display();
    insert(3,10);
    display();
    delete(2);
    display();

    return 0;
}