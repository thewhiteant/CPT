#include<iostream>
using namespace std;


int partion(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low;j<high;j++){
        
        if(pivot>arr[j]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);


    return(i+1);
}

void QkSort(int arr[],int low,int high){
    
    if(low<high){
        
        int pivot = partion(arr,low,high);     
        QkSort(arr,low,pivot-1);
        QkSort(arr,pivot+1,high); 
    }
}

int main(){

    int arr[10];
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    QkSort(arr,0,n-1);

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}