#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

void reverse(int *nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}
void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;

    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize - 1);
    reverse(nums, 0, numsSize - 1);
}

int main()
{
    int nums[] = {1,2,3,4,5,6,7};
    int k=2;
    int numsSize = sizeof(nums)/ sizeof(nums[0]);
    rotate(nums,numsSize,k);
    cout<<"array after rotation = \n"<<endl;
    for(int i=0; i<numsSize; i++)
    {
        cout<<nums[i]<<" "; 
    }
    cout<<endl;
    return 0;
}