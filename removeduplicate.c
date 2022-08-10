#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }

    if(!nums)
    {
        fprintf(stderr, "Invalid pointer!\n");
        exit(EXIT_FAILURE);
    }

    int i, j = 0;

    for (i = 0; i < numsSize; ++i)
    {
        if (nums[i] != nums[j])
        {
            ++j;
            nums[j] = nums[i];
            // we can also use nums[++j] = nums[i]'
        }
    }
    return j + 1; 
}
    
int main(void)
{
    int i;
    int a[] = {1, 1, 2};

    printf("The array before call the function removeDuplicates:\n[");
    for(i = 0; i < 2; ++i)
    {
        printf("%d, ", a[i]);
    }
    printf("%d]\n\n\n",a[2]);

    int k = removeDuplicates(a, 3);

    printf("The array after call the function removeDuplicates:\n[");
    for(i = 0; i < k - 1; ++i)
    {
        printf("%d, ", a[i]);
    }
    printf("%d]\n\n\n", a[k]);

    return 0;
}