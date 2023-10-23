#include<iostream>
#include<map>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
        
        int i = 0;
        int j = numbers.size()-1;

        while(i<j){
            if(numbers[i]+numbers[j] == target) 
               return {i,j};

            else if(numbers[i] + numbers[j] > target) j--;

            else i++;
        }

        return {i,j};
    }
    int main(){

        vector<int> ok = {2,7,11,15},l;
        l = twoSum(ok,9);

        for (int i = 0; i <l.size() ; i++)
        {
            cout<<l[i]<<" ";
        }

        return 0;
    }