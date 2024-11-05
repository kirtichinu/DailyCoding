// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
#include <stdio.h>
#include <stdlib.h>

int search(int *nums, int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("%d", search(nums, size, 0));
    return 0;
}