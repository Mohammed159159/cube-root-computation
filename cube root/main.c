#include<stdio.h>

int cuberoot(int num);
int main() {

    int num;
    printf(" Enter Number to find it's cube root: ");
    scanf_s("%d", &num);
    printf("\n  RESULT: %d", cuberoot(num));
}

int cuberoot(int num) {
    int initial = 0;
    while (initial * initial * initial < num)
    {
        initial++;

    }
    while (initial * initial * initial != num) {
        printf("\n %d is not perfect cube, Enter another number: ", num);
        scanf_s("%d", &num);
        return cuberoot(num);
    }
    if (initial * initial * initial == num)
        return initial;
}

