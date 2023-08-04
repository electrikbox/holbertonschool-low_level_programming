#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num)
{
    if (num < 0)
        return false;

    int originalNum = num;
    int reversedNum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num = num / 10;
    }

    return originalNum == reversedNum;
}

int main(void)
{
	int i, j, result, largestPalindrom = 0;

    if (!result)
        return (0);

    for (i = 100; i < 1000; i++)
        for (j = i; j < 1000; j++)
        {
            result = i * j;
            if (isPalindrome(result) && largestPalindrom < result)
                largestPalindrom = result;
        }

    printf("%d\n", largestPalindrom);

	return (0);
}
