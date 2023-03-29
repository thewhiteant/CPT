#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){


    int aarr[] = {1,2,3,4,5,6,7,8,9,11};
    auto s = lower_bound(aarr,aarr+10,9);
    auto p = upper_bound(aarr,aarr+10,9);
    cout<<s-aarr<<endl;
    cout<<p-aarr<<endl;
           


    return 0;
}