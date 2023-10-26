#include <iostream>
#include <vector>

using namespace std;

int longestIncreasingContiguousSubarray(const vector<int>& S) {
    int left = 0;
    int maxLength = 1;
    int currentLength = 1;

    for (int right = 1; right < S.size(); right++) {
        if (S[right] > S[right - 1]) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    return max(maxLength, currentLength);
}

int main() {
    vector<int> S = {1, 2, 3, 2, 4, 7, 8, 9, 2, 1, 3, 4, 5};
    int result = longestIncreasingContiguousSubarray(S);
    cout << result << endl;
    
    return 0;
}
