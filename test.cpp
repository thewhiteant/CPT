#include<iostream>
using namespace std;

int main(){


    int n;
    cin>>n;

    int c = 0;
    for(int i =0;i<n;i++){t

        char x;
        cin>>x;
        
        if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U' ) c++;
    }
    
    cout<<"Count: "<<c<<endl;

}
