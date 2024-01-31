#include<stdio.h>
#include<time.h>
#define size 100

void  search_in_array(int arr[],int n,int key){
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            found++;
            if(found==1){
                printf("%d found at index: ",key);
            }
            printf(" %d",i);
        }
    }
    printf("\n");
    if(found==0){
        printf("%d is not found in the array\n",key);
    }
}

int delete_in_array(int arr[], int n, int key) {
    int newsize = n;

    for (int i = 0; i < newsize; i++) {
        if (arr[i] == key) {
            for (int j = i; j < newsize - 1; j++) {
                arr[j] = arr[j + 1];
            }
            newsize--;
            i--;  // Recheck the current position after deletion
        }
    }

    return newsize;
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

    search_in_array(arr,n,key);

    int delkey;
    printf("Enter the number to be deleted : ");
    scanf("%d",&delkey);
    n=delete_in_array(arr,n,delkey);

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