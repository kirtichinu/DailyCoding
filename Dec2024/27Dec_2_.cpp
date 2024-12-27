//peak of the mountain array problem

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] < arr[mid + 1]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }
};
int main(){
    Solution Solution;
    vector<int> arr = {0,1,0};
    int result = Solution.peakIndexInMountainArray(arr);

    cout<<"peak index of arr is = ";
    cout<<result<<" "<<endl;

    return 0;
}