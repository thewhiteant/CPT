#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n)
{

	vector<int> ans;
    map<int,int> ck;

    for (int i = 0; i < n; i++)
    {
        ck[arr[i]]++;
    }

    for (auto k:ck)
    {
        if(k.second>=2) ans.push_back(k.first);
    }
    
    return ans;
    

}

int main()
{
	int arr[] = { 1, 6, 3, 1, 3, 6, 6 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "The repeating elements are: \n";


	vector<int> ans = duplicates(arr, arr_size);
	for (auto x : ans)
		cout << x << " ";

	return 0;
}
