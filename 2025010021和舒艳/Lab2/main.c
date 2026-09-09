#include <stdio.h>

// algorithm1: 第一部分，三层嵌套循环，每层都是 n 次
long long algorithm1(int n) {
    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                count++;
            }
        }
    }
    return count;
}

// algorithm2: 第二部分，双重循环，内层次数随外层变化 (i + j < n)
long long algorithm2(int n) {
    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            count++;
        }
    }
    return count;
}

// algorithm3: 第三部分，双重循环，内层次数随外层变化 (j < i)
long long algorithm3(int n) {
    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            count++;
        }
    }
    return count;
}

// algorithm4: 第四部分，单层循环
long long algorithm4(int n) {
    long long count = 0;
    for (int i = 0; i < n; i++) {
        count++;
    }
    return count;
}

int main() {
    // 定义需要测试的四个输入规模
    int ns[] = {2048, 4096, 8192, 16384};
    int len = sizeof(ns) / sizeof(ns[0]);

    // 输出表头，严格符合题目要求的格式
    printf("n\talgorithm1\talgorithm2\talgorithm3\talgorithm4\n");

    for (int i = 0; i < len; i++) {
        int n = ns[i];
        long long a1 = algorithm1(n);
        long long a2 = algorithm2(n);
        long long a3 = algorithm3(n);
        long long a4 = algorithm4(n);
        // 使用 \t (制表符) 对齐输出，并使用 %lld 输出 long long 类型
        printf("%d\t%lld\t%lld\t%lld\t%lld\n", n, a1, a2, a3, a4);
    }

    return 0;
}
