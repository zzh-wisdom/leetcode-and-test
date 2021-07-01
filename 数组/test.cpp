#include<stdio.h>
using namespace std;

#define ARRAY_LEN 5
#define ARRAY_HIGH 3

/**
 * int (*d2_array_dynamic)[ARRAY_HIGH] = new int[ARRAY_LEN][ARRAY_HIGH];
 * 这样申请出来的二维数组也是连续的
 * 
 * https://github.com/zzh-wisdom/leetcode-master/blob/master/problems/%E6%95%B0%E7%BB%84%E6%80%BB%E7%BB%93%E7%AF%87.md
 * 这里所说的 int[][] rating = new int[3][4]; 不是连续的，是分离的多个一维数组
 * 但上面那样写，编译不通过，有待考究。
 */

int main() {
    // 一维静态数组的地址连续性
    printf("一维静态数组的地址连续性:\n");
    int array_static[ARRAY_LEN];
    for(int i = 0; i < ARRAY_LEN; i++) {
        printf("%p ", &array_static[i]);
    }
    printf("\n");

    // 一维动态数组的地址连续性
    printf("一维动态数组的地址连续性:\n");
    int *array_dynamic = new int[ARRAY_LEN];
    for(int i = 0; i < ARRAY_LEN; i++) {
        printf("%p ", &array_dynamic[i]);
    }
    printf("\n");

    // 二维静态数组的地址连续性
    printf("二维静态数组的地址连续性:\n");
    int d2_array_static[ARRAY_LEN][ARRAY_HIGH];
    for(int i = 0; i < ARRAY_LEN; i++) {
        for (int j = 0; j < ARRAY_HIGH; j++) {
            printf("%p ", &d2_array_static[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 二维动态数组的地址连续性
    printf("二维动态数组的地址连续性:\n");
    int (*d2_array_dynamic)[ARRAY_HIGH] = new int[ARRAY_LEN][ARRAY_HIGH];
    for(int i = 0; i < ARRAY_LEN; i++) {
        for (int j = 0; j < ARRAY_HIGH; j++) {
            printf("%p ", &d2_array_dynamic[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}