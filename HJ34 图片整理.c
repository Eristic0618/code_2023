// Lily上课时使用字母数字图片教小朋友们学习英语单词，每次都需要把这些图片按照大小（ASCII码值从小到大）排列收好。
// 请大家给Lily帮忙，通过代码解决。
// Lily使用的图片使用字符"A"到"Z"、"a"到"z"、"0"到"9"表示。
//  输入描述：
//  一行，一个字符串，字符串中的每个字符表示一张Lily使用的图片。
//  输出描述：
//  Lily的所有图片按照从小到大的顺序输出
// 示例1
// 输入：Ihave1nose2hands10fingers
// 输出：0112Iaadeeefghhinnnorsssv
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    char ch[1000];
    scanf("%s", ch);
    int len = strlen(ch);
    int *sort = (int *)malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++)
    {
        sort[i] = (int)ch[i];
    }
    qsort(sort, len, sizeof(int), cmp);
    for (int i = 0; i < len; i++)
    {
        printf("%c", (char)sort[i]);
    }
    return 0;
}