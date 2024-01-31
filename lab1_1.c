#include<stdio.h>
#include<time.h>

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

    int maxelement=arr[0],minelement=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>maxelement){
            maxelement=arr[i];
        }
        if(arr[i]<minelement){
            minelement=arr[i];
        }
    }

    printf("Maximum Element in the Array is : %d\n",maxelement);
    printf("Minimum Element in the Array is : %d\n",minelement);
    clock_t end=clock();
    double executiontime=(double)(end-start)/CLOCKS_PER_SEC;
    printf("exection time : %f",executiontime);
    return 0;
}