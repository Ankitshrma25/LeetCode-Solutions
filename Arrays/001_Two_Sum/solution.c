#include <stdio.h>

void twoSum(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j);  // Print the indices
                return;
            }
        }
    }
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    twoSum(nums, numsSize, target);

    return 0;
}
