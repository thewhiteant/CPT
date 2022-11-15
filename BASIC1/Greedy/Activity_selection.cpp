#include<iostream>
#include<algorithm>
using namespace std;

void ASProblem(vector<pair<int,int>> p,int n){

    sort(p.begin(),p.end(),[&](pair<int,int>&a,pair<int,int>&b){
        return (a.second < b.second);
    });
    int i = 0;
    cout<<p[0].first<<" "<<p[0].second<<endl;

    for (int j = 1; j < n; j++)
    {
        if(p[j].first >= p[i].second) {
            cout<<p[j].first <<" "<<p[j].second<<endl;
            i = j;
        }
    }
}


int main(){

    vector<pair<int, int>> ok = {{10, 1}, {1, 1}, {40, 5}, {7, 102}};
    ASProblem(ok,4);

    return 0;
}
