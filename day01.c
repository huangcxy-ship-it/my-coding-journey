#include <stdio.h>

int main() {
    //1.打印我的名字
    printf("My name is Huang.I am starting my coding journey today!\n");

    //2.算一下 10 + 3
    int a = 10;
    int b = 3;
    int sum = a + b;
    printf("10 + 3 = %d\n",sum);

    //3.判断奇偶
    int num = 7;
    if (num % 2 == 0) {
        printf("%d 是偶数\n",num);
    }else {
        printf("%d 是奇数\n",num);
    }

    //4.1到100求和
    int total = 0;
    for (int i = 1; i <= 100; i++) {
        total = total + i;
    }
    printf("total = %d\n",total);
    return 0;
}
