// sort colour program (colours as numbers 0,1,2)

#include <stdio.h>
#include <stdlib.h>
void sortColors(int *nums, int numsSize)
{
    int temp = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
int main()
{
    int nums[] = {1, 0, 2, 1, 1, 0, 2, 2, 2, 0, 1, 0, 2};

    int size = sizeof(nums) / sizeof(nums[0]);
    sortColors(nums, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}