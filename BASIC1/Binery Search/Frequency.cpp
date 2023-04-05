#include<bits/stdc++.h>
using namespace std;

int main(){

    //Count frequency table
    vector<int> chk = {1,2,2,3,3,4,4,5,5,5,5,6,6,6};
    vector<int>  lb, up;

    // for (int i = 0; i < (int)chk.size(); i++)
    // {
             lb = lower_bound(chk.begin(),chk.end(),2)-chk.end();
             up = upper_bound(chk.begin(),chk.end(),2)-chk.end();giyf

                cout<<lb<<" "<<up<<endl; 
    // }
    

    



    return 0;
}