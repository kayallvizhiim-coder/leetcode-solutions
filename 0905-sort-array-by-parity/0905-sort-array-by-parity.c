/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
     int *result = (int*)malloc(numsSize * sizeof(int));
    int j = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            result[j++] = nums[i];
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 != 0) {
            result[j++] = nums[i];
        }
    }

    *returnSize = numsSize;
    return result;
}                                                                                                                                    