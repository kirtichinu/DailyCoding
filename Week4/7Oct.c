#include<stdio.h>

void moveZeroes(int *nums, int numsSize)
{
    int j = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    for (int k = j; k < numsSize; k++)
    {
        nums[k] = 0;
    }
}
int main()
{
    int nums[] = {1, 0, 2, 0, 4, 0, 6, 0};
    int numsSize = 8;
    printf("given array =");
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    moveZeroes(nums, numsSize);
    printf("New array = ");
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}