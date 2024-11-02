#include <stdio.h>
#include <stdlib.h>

int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int max_count = 0;
    int curr_count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            curr_count++;
        }
        else
        {
            if (curr_count > max_count)
            {
                max_count = curr_count;
            }
            curr_count = 0;
        }
    }
    if (curr_count > max_count)
    {
        max_count = curr_count;
    }
    return max_count;
}
int main()
{
    int nums[] = {1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1,1};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Max consecutive 1's: %d\n", findMaxConsecutiveOnes(nums, size));
    return 0;
}
