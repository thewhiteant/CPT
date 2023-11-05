#include<iostream>
#include<algorithm>
using namespace std;





// serach // liner // binery
// sort - bubble // insertion // selection // merge // qk 
//heap // heap sort 
//MSt // kruskal // prims 
//ST GRAPH// bfs // dfs


int LinerSearch(int arr[],int n,int SearchItem){
    //BC : O(1)
    //AC : O(n)
    //WC : O(n)
    for(int i = 0;i<n;i++){
        if(arr[i]==SearchItem) return i;
    }
    return -1;

}

int BinerySeach(int arr[],int n,int SearchItem){

    int h = n-1;
    int l = 0;

    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid] == SearchItem) return mid;
        else if(arr[mid]<SearchItem){
                l = mid+1;
        }else {
            h = mid - 1;
        }
    }
    return -1;
    
}



int main(){

    int arr[10] = {1,23,55,663,90};
    cout<<"LS:"<<LinerSearch(arr,5,663)<<endl;
    sort(arr,arr+5);
    cout<<"BS"<<BinerySeach(arr,5,23);
    
}
