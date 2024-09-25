#include<bits/stdc++.h>
using namespace std;

int searchInsert(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low;
}
int main()
{
    int nums[5]={1,3,5,7,8};
    int target = 6;
    cout<<"insert position is = "<<searchInsert(nums,5,target);
    return 0;
}