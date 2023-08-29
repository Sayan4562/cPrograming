#include<stdio.h>
#include<stdlib.h>
struct myarray
{
    int total_size;
    int use_size;
    int *ptr;
};

void creatarray(struct myarray *a ,int tsize,int usize){    
    (*a).total_size=tsize;
    (*a).use_size=usize;
    (*a).ptr=(int *) malloc(tsize*sizeof(int));
    // use this or

    // a->total_size=tsize;
    // a->use_size=usize;
    // a->ptr=(int *) malloc(tsize*sizeof(int));
    // this all same
}

void show(struct myarray *a){
    for(int i=0;i<a->use_size;i++){
        printf("%d\n",(a->ptr)[i]);
    }

}

void setval(struct myarray *a){
    int n;
    for(int i=0;i<a->use_size;i++){
        printf("enter eliment %d",i);
        (a->ptr)[i]=n;
        scanf("%d",&n);
    }

}

int main(){
    struct myarray marks; 
    creatarray(&marks,20,2);
    show(&marks);
    

    return 0;
}
