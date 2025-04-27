#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int k = 0; // Pointer for the next position to fill in the array
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i]; // Give the element the right position
            k++; // Move the pointer to the next position
        
        }
    }
    return k; // Return the new length of the array
}

int main(){
   int nums[] = {0,1,2,2,3,0,4,2};
   int val = 2;
   int numsSize = sizeof(nums) / sizeof(nums[0]);


   int k = removeElement(nums, numsSize, val); // K is the new length of the array after removing the element

   printf("The new Length of the array is: %d\n", k);
   printf("The new array is : \n");
   for (int i = 0; i < k; i++){
       printf("%d ", nums[i]); // Print the new array
   }
   printf("\n");    
   

    return 0;
}