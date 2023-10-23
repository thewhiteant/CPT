#include<iostream>
#include<map>
#include<vector>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> ch;
        for(int i =0;i<nums.size();i++){
            ch[nums[i]] = i;
        }

        vector<int> res;

        for(int i =0;i<nums.size();i++){
            if( ch[target-nums[i]] != 0 && i != ch[target-nums[i]]  ){
                res.push_back(i);
                res.push_back(ch[target-nums[i]]);
                break;
            }
        }
 

         return res;
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