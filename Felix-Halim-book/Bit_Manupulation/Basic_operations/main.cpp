#include<iostream>
#include<string>
using namespace std;







int main(){

    int S = 34;
    cout<<"Original: "<<S<<endl;

    //Manupulation
    S = S<<1;
    
    cout<<"Mul: "<<S<<endl;
    
    //Division
    S = S>>1;
    cout<<"Div: "<<S<<endl;    
    
    //Set Bit 
    int j = 2;
    S |= (1<<j);
    cout<<"Set Bit: "<<S<<endl;

    //Clear Bit
    S = S & ~(1<<j);
    cout<<"Clear Bit: "<<S<<endl;

    //Flip The Bit 
    S ^=(1<<j);
    cout<<"Flip Bit: "<<S<<endl;

    //Chechk the bit
    int T = S & (1<<j);
    cout<<"jth Bit: "<<T<<endl;

    //Get The Values Of LSB 
    T = (S) & -(S);
    cout<<"MOST LSB: "<<T<<endl;

    //All bit set on a Time 
    int n = 10; 
    S = (1<<n);
    cout<<"All Bit set: "<<S<<endl;


    //All Subset of a Bitmask
    int mask = 18;
    for(int subset = mask; subset; subset=(mask&(subset-1))){
        cout<<subset<<endl;
    }

    //Builtin 
    cout<<"Amount of 1 in: "<<__builtin_popcount(18)<<endl;
    cout<<"Amount of 0 in: "<<__builtin_ctz(18)<<endl;
    
    



} 