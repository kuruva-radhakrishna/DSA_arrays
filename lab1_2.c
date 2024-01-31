#include<stdio.h>
#include<time.h>

int search_in_array(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    clock_t start=clock();

    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }

    //traversal from first to last
    printf("\ntraversal from first to last : ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    //traversal from  last to first
    printf("\ntraversal from  last to first : ");
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    
    //search for an element
    int key;
    printf("\n\nEnter the element to be searched :");
    scanf("%d",&key);
    int idx=search_in_array(arr,n,key);
    if(idx!=-1){
        printf("%d is found at index %d\n",key,idx);
    }
    else{
        printf("Element not found in the array\n");
    }
    clock_t end=clock();
    double executiontime=(double)(end-start)/CLOCKS_PER_SEC;
    printf("exection time : %f",executiontime);
    return 0;
}