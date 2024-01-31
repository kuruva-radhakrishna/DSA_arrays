#include<stdio.h>
#include<time.h>
#define size 100
//insert an element at a index in array
void insert(int arr[],int n,int idx,int key){
    if(idx<0 && idx<size){
        printf("given wrong index to be inserted\n");
        return;
    }
    for(int i=n;i>idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=key;
}

//delete the element in array

void delete_in_arry(int arr[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            break;
        }
    }
    for(i;i<n;i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    clock_t start=clock();

    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);

    int arr[100];
    for(int i=0;i<n;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    //undeclared elements
    for(int i=n;i<size;i++){
        arr[i]=0;
    }

    int idx,key;
    printf("Enter the number to be inserted : ");
    scanf("%d",&key);
    printf("Enter the index where the element should be inserted :");
    scanf("%d",&idx);
    insert(arr,n,idx,key);
    
    if(n<idx){
        n=idx;
    }
    n++;
    printf("Array after insertion : ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

    int delkey;
    printf("Enter the number to be deleted : ");
    scanf("%d",&delkey);
    delete_in_arry(arr,n,delkey);
    n--;

    //array after deletion
    printf("Array after deletion : ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    clock_t end=clock();
    double executiontime=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\nexection time : %f",executiontime);
    return 0;
}