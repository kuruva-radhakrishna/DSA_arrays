#include<stdio.h>
#include<time.h>
#define size 100

int search_in_array(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

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


    int key;
    printf("enter the element to be searched :");
    scanf("%d",&key);

    int idx=search_in_array(arr,n,key);
    if(idx!=-1){
        printf("%d is found at index %d in the array\n",key,idx);
    }
    else{
        printf("%d is not found in the array\n");
    }

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