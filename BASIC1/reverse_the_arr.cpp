#include<iostream>
using namespace std;

void reverseA(int arr[],int n){
    for (int  i = 0,j=n-1; i < j; i++,j--)
    {
        swap(arr[i],arr[j]);
    }
}



int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5};
    reverseA(arr,5);
    
    for (int i = 0; i <5; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
