#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int candidate = 0;
    for (int i = 0; i < numsSize - 1; i++) {

        if (count == 0) {
            candidate = nums[i];
        }
        count = count + ((nums[i] == candidate) ? 1 : -1);
    }
    return candidate;
}

int main()
{
    int nums[] = {2,3,4,4,1,2,2,2,3};
    int numsSize =10;
    cout<<"majority element is = "<< majorityElement(nums,numsSize)<<endl;
    return 0;
}