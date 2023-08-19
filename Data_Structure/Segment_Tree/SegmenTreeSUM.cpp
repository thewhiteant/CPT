#include <iostream>
using namespace std;


//res - tree array
// left right range
//int array er index
//postion tree er upre theka index ja alws sataring e 1 hobe
//Segment Tree builld up here
void buildTree(int arr[],int res[],int left,int right,int index,int position){
    //For Single Unit Segment Only
    if(left==index && right == index){
            res[position] = arr[index];
            return;
    }
    int mid = (left+right)/2;

    if(index<=mid){
        buildTree(arr,res,left,mid,index,position*2);
    }else{
         buildTree(arr,res,mid+1,right,index,(position*2)+1);
    }

    //Sum both side of segments for 
    res[position] = res[position*2] + res[(position*2)+1];

}

//use segment tree for Range Qurey
int RQ_sum(int arr[], int res[], int left, int right, int SR, int ER, int position) {
    if (right < SR || ER < left)
        return 0;
    if (SR <= left && ER >= right) {
        return res[position];
    }

    int mid = (left + right) / 2;
    int leftS = RQ_sum(arr, res, left, mid, SR, ER, position * 2);
    int RightS = RQ_sum(arr, res, mid + 1, right, SR, ER, (position * 2) + 1);

    return leftS + RightS;
}


void UpdateTree(int res[],int left,int right,int index,int position,int value){
    //For Single Unit Segment Only
    if(left==index && right == index){
            res[position] = value;
            return;
    }
    int mid = (left+right)/2;

    if(index<=mid){
        UpdateTree(res,left,mid,index,position*2,value);
    }else{
         UpdateTree(res,mid+1,right,index,(position*2)+1,value);
    }

    //Sum both side of segments for 
    res[position] = res[position*2] + res[(position*2)+1];

}





int main()
{
    int n = 10;
    int arr[n] = {1,2,3,4};
    

//Tree olding array
    int res[4*n]={0};

    for (int i = 0; i <n; i++)
    {
        buildTree(arr,res,0,n-1,i,1);
    }
  

    UpdateTree(res,0,n-1,3,1,10);
    // for (int i = 0; i <4*n; i++)
    // {
    //   cout<<res[i]<<" ";
    // }

    cout<<RQ_sum(arr,res,0,n-1,1,3,1)<<endl;


     return 0;
}