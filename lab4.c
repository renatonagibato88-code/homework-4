#include <stdio.h>

int main()
{
    int A, B, C;
    int condition;

    printf("Введите три целых числа A, B и C: ");
    scanf("%d %d %d", &A, &B, &C);

    condition = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    if (condition)
    {
        printf("Портал открыт\n");
    }
    else
    {
        printf("Портал не открывается\n");
    }

    return 0;
}
