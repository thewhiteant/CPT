#include<iostream>
using namespace std;

void count_sort(int arr[],int n ){


    int output[n];
  
    int mx = arr[0];
    for (int i = 0; i < n; i++)
        mx = max(arr[i],mx);

    int count[mx];
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    
    for (int i = 1; i <=mx; i++)
    {
        count[i] += count[i-1];
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }

    
}


int main(){

    int arr[12] = {1,2,5,5,5,20,2,1,8,2,3};
    int n = 10;
    count_sort(arr,n);
    for (int  i = 0; i <  n; i++)
    {
        cout<<arr[i]<<" ";
    }   
    



    return 0;
}