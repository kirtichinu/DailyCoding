//remove duplicates from a sorted array II

#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    int k = 0;
    int count = 1;
    for (int i = 1; i < numsSize; i++) {

        if (nums[i] == nums[k]) {
            count++;
        } else {
            count = 1;
        }
        if (count <= 2) {
            k++;
            nums[k] = nums[i];
        }
    }
    return k + 1;
}
void printArray(int* nums, int length) {

    for (int i = 0; i < length; i++) {

        printf("%d ", nums[i]);
    }
    printf("\n");
}
int main() {
    int nums[] = {1, 1, 1, 2, 2, 3};
    int Size = sizeof(nums) / sizeof(nums[0]);
    int length = removeDuplicates(nums, Size);
    printf("Array after removing duplicates: ");
    printArray(nums, length);
    printf("New length: %d\n", length);
    return 0;
}