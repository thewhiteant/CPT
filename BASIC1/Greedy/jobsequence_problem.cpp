#include<iostream>
#include<algorithm>
using namespace std;

struct job{
    char lvl;
    int deadline;
    int profit;
};

bool comp(job a,job b){
    return(a.profit>b.profit); //set profit wise decresing order
}


void job_sequence_profit(job arr[],int n){

    sort(arr,arr+n,comp);
    int result[n];
    bool slot[n];

    for (int i = 0; i <n; i++)
    {
        slot[i] = false;   
    }
    
    for (int i = 0; i <n; i++)
    {
        for (int j =  min(n,arr[i].deadline)-1 ; j>=0; j--)
        {
            if(slot[j]==false){
                result[j] = i;
                slot[j] =true;
                break;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
        if (slot[i])
            cout << arr[result[i]].lvl << " ";
}



int main(int argc, char const *argv[])
{

    job arr[] = {{'a', 2, 100},
                 {'b', 1, 19},
                 {'c', 2, 27},
                 {'d', 1, 25},
                 {'e', 3, 15}};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs "
            "\n";

    // Function call
    job_sequence_profit(arr, n);

    return 0;
}
