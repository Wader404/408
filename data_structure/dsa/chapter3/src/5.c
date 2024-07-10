// 第一题: AD
// 任意时刻I的数量要大于O的数量，且最后两者数量相等
#include <stdio.h>
#include <stdbool.h>

bool is_valid(char str[10])
{
    int I_num = 0;
    int O_num = 0;
    
    for (int i = 0; i < 10; i++) {
        if (str[i] == 'I') {
            I_num++;
        } else if (str[i] == 'O') {
            O_num++;
        } else {
            break;
        }

        if (I_num < O_num) {
            return false;
        }
    }

    if (I_num != O_num) {
        return false;
    }

    return true;
}


int main(void)
{
    char str[11];
    printf("please input I/O string(less than 10 characters): ");
    scanf("%s", str);

    if(is_valid(str)) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}
