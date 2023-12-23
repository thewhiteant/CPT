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
