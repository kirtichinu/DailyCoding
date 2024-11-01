// find missing number

int missingNumber(int* nums, int numsSize) {
    int expectedSum = numsSize * (numsSize + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < numsSize; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main()
{
    int nums[]= {3,0,1};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    int missing = missingNumber(nums,numsSize);
    printf("%d",missing);
    
    return 0;
}