/*
Sum of Two Numbers
Description:
Given two integers, print their sum.

Input Format:
Two space-separated integers a and b.

Constraints:
-1000 ≤ a, b ≤ 1000

Sample Input:
3 5
Sample Output:
8
*/

#include <stdio.h>

int main() {

    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", a+b);

    return 0;
}