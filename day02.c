#include <stdio.h>

//这个就是一个函数:求两个整数的最大值
int get_max(int a, int b) {
    if (a>b) {
        return a;
    }else {
        return b;
    }
}

int main() {
    //1.数组求和
    int arr[5] = {10,20,30,40,50};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }
    printf("sum = %d\n", sum);

    //2.调用函数
    int result = get_max(arr[0], arr[1]);
    printf("result = %d\n", result);
}
