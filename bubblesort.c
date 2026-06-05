#include<stdio.h>
//---------------------------------------------**** BUBBLE SORT ****---------------------------------
void BubbleSort(int arr[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;i++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int k=0;k<size;k++){
        printf("%d  ",arr[k]);
    }
}

int main(){
    int arr[10]={9,7,56,33,23,56,233,12,546,76};
    BubbleSort(arr,10);
    return 0;
}