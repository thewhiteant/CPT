#include<iostream>
using namespace std;


/*
    Problem : Find the Number of Swap need to sort the Array  or Swap like bubble sort 

    Approch - 1 O(n^2) use bubble sort and Count swaps;
    Approch - 1 O(log n) use merge sort and Count swaps;
    
*/

int merge(int arr[],int l,int m,int r){
    int i = l;
    int j = m+1;
    int k = l;
    int result[r+1];

    int  count = 0;

    while(i<=m && j<=r){
        if(arr[i]<arr[j]){
            result[k++] = arr[i++];
         
        }else{
            result[k++] = arr[j++];

            count = count + (m-i+1);
        }


    }

    while(i<=m){
        result[k++] = arr[i++];
    }
    
    while(j<=r){
        result[k++] = arr[j++];
    }

    for (int kk = l; kk<=r ; kk++)
    {
        arr[kk] = result[kk];
    }

    
    return count;

}


int  mergeSortSolution(int arr[],int l,int r){


    int count = 0;
    if(l>=r) return count;

    int mid  = (l+r)/2;
    count += mergeSortSolution(arr,l,mid);
    count += mergeSortSolution(arr,mid+1,r);
    
    count += merge(arr,l,mid,r);


    return count;
}





int bubbleSortSolution(int arr[],int n){
    int count = 0;
    for (int i = 0; i <n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
        
    }
    
    return count;
}


int main(){

    int arr[3] = {3,2,1};
    int n = 3;

    // cout<<bubbleSortSolution(arr,n)<<endl;
    cout<< mergeSortSolution(arr,0,n-1);

    

    return 0;
}