#include <iostream>
#include <vector>

using namespace std;

void longestIncreasingContiguousSubarray(const vector<int>& S) {
    int left = 0;
    int maxLength = 1;
    int currentLength = 1;
    int max_index = 0;
    for (int right = 1; right < S.size(); right++) {
        if (S[right] > S[right - 1]) {
            currentLength++;
        } else {



            if(max_index<currentLength)
            {
                maxLength = currentLength;
                max_index = right - maxLength;

            }
            currentLength = 1;
        }
    }


    if(maxLength<currentLength){
        maxLength = currentLength;
        max_index = S.size()-maxLength;
    }

    for (int i = max_index; i < max_index+maxLength; i++)
    {
        cout<<S[i]<<" ";
    }
    
    
}

int main() {
    vector<int> S = {1, 2, 3, 2, 4, 7, 8, 9, 2, 1, 3, 4, 5};
    longestIncreasingContiguousSubarray(S);
    
    return 0;
}
