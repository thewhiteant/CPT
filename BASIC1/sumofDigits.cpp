#include<iostream>
using namespace std;

int Sum_of_Digits(int n){
    int sum;
    //     while(n!=0){   //technique 1
    //     sum = sum +  n%10;
    //     n = n  -  n/10;
    // }

    for (sum = 0;n!=0 ; sum+=n%10,n/=10); 
    return sum;
    
}


int main(int argc, char const *argv[])
{
    
    cout<<Sum_of_Digits(20101111)<<endl;

    return 0;
}




