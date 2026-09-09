#include <stdio.h>

// 2.1 单层循环
static long long algorithm1(int n) {
    long long count = 0;
    for (int i = 0; i < n; i++){
        count++;
    }
    return count;
}

// 2.2 内层次数随外层变化的循环
static long long algorithm2(int n) {
    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            count++;
        }
    }
    return count;
}

// 2.3 倍增循环
static long long algorithm3(int n) {
    long long count = 0;
    for (int i = 1; i < n; i *= 2) {
        count++;
    }
    return count;
}

// 2.4 双重倍增循环
static long long algorithm4(int n) {
    long long count = 0;
    for (int i = 1; i < n; i *= 2) {
        for (int j = 1; j < n; j *= 2) {
            count++;
        }
    }
    return count;
}

// 主函数入口
int main() {
    int n = 10;
    printf("algorithm1 count = %lld\n", algorithm1(n));
    printf("algorithm2 count = %lld\n", algorithm2(n));
    printf("algorithm3 count = %lld\n", algorithm3(n));
    printf("algorithm4 count = %lld\n", algorithm4(n));

    return 0;
}
