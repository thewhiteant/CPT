#include<iostream>
using namespace std;

int binerySearch(int arr[],int n,int se){
    int k = 0;
    for (int b = n/2; b>=1; b/=2)
    {
         while(k+b<n&&arr[k+b]<=se) k+=b;
    }
    
    if(arr[k]==se) return k;
    return -1;
}

int main(){ 

    int arr[100 ] = {1,2,3,4,5,6,7,8,8,9,10};
    int n = 11;
 
    cout<<binerySearch(arr,n,5);

    

    return 0;
}