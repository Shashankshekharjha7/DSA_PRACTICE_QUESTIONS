#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 4, 3, 2};
    int k = 3;

    int n = arr.size();
    int window_sum = 0;

    for(int i = 0; i < k; i++)
        window_sum += arr[i];

    int max_sum = window_sum;

    for(int i = 1; i <= n - k; i++) {
        window_sum = window_sum - arr[i - 1] + arr[i + k - 1];
        if(window_sum > max_sum)
            max_sum = window_sum;
    }

    cout << "Maximum sum of subarray of size " << k << " is: " << max_sum << endl;
    return 0;
}