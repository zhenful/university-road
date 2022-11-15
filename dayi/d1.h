#include<stdio.h>

int main() {
    int a[50];
    int max, min;
    int i, n;
    int j = 0;
    int k = 0;
    printf("输入数组的元素个数：\n");
    scanf("%d", &n);
    printf("依次输入数组中的元素");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            j = i + 1;

        }
    }
    max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            k = i + 1;

        }
    }
    printf("输出最小值所在地方：%d\n", j);
    printf("最小值是：%d\n", min);
    printf("输出最大值所在的地方：%d\n", k);
    printf("最大值是：%d\n", max);
}