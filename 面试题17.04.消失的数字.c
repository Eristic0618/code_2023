// 数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
int missingNumber(int *nums, int numsSize)
{
    int n = numsSize;
    int x = 0;
    for (int i = 0; i <= n; i++)
    {
        x ^= i;
    }
    for (int i = 0; i < n; i++)
    {
        x ^= nums[i];
    }
    return x;
}
