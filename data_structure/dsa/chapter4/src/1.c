#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char character;
    char alpha_num[37];
    for (int i = 0; i<36; i++) {
        alpha_num[i] = 0;
    }

    printf("please input characters(press enter to stop): \n");
    while ((character = getchar()) != '\n') {
        if (character >= '0' && character <= '9') {
            int i = character - 48;
            alpha_num[i]++;
        } else if (character >= 'A' && character <= 'Z') {
            int i = character - 65 + 10;
            alpha_num[i]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i, alpha_num[i]);
    }
    for (int i = 10; i < 36; i++) {
        printf("%c: %d\n", (char)i+55, alpha_num[i]);
    }

    alpha_num[36] = '\0';
    FILE *f_ptr;
    f_ptr = fopen("1.txt", "w+");
    if (f_ptr == NULL) {
        printf("Error");
        exit(1);
    }
    fputs(alpha_num, f_ptr);
    fclose(f_ptr);

    return 0;
}
