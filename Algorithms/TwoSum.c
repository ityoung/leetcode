/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *cursor;
    cursor = (int*)malloc(sizeof(int) *2);
    int i,j,s,l;
    for(i = 0;i<numsSize; i++)
        for(j = 0; j<numsSize;j++)
            if(i!=j)
                if(nums[i]+nums[j] == target)
                    if(i<j){
                        s = i;
                        l = j;
                    }
                    else{
                        s = j;
                        l = i;
                    }
    printf("[%d,%d]",s,l);
    cursor[0] = s;
    cursor[1] = l;
    return cursor;
}
