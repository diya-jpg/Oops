#include<stdio.h>
int sortedinsertion(int arr[],int size,int element ,int capacity,int index){
    if(size>=capacity){
        return -1;}
        else{
        for(int i=size-1;i>=index;i--){
arr[i+1]=arr[i];
        }
arr[index]=element;
return 1;
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100]={1,2,6,78};
    int size=4,element =65,index=1;
    display(arr,size);
    sortedinsertion(arr,size,element,100,index);
    size=+1;
    display(arr,size);
    }
