#include <stdio.h>
#include <string.h>

int main(void)
{
    // 1. 编写 一个 程序， 提示 用户 输入 名 和 姓， 然后 以“ 名, 姓” 的 格式 打印 出来。
    char name[40];
    printf("Please input your name: ");
    scanf("%s", name);
    printf("Your name and surname is \"%s\"\n", name);
    printf("Your name and surname is \"%20s\"\n", name);
    printf("Your name and surname is \"%-20s\"\n", name);
    printf("Your name and surname is \"%*s\"\n", (int) strlen(name) + 3, name);
    return 0;
}
