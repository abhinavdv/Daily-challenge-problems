/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    int* arr;
    arr = (int*)malloc(2*sizeof(int));
    arr[0] = 0; //uytgyuh
    arr[1] = 0; 
    for(i=0;i<numsSize;i++)
    {for(j=i+1;j<numsSize;j++)
    {int k = nums[i]+nums[j];
     
        if( k == target)
        {
            arr[0] = i;
            arr[1] = j;
        }
     
        
    }
  
    }
    return arr;
}
