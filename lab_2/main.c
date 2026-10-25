#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double x, y, z;
    double res1, res2;

    printf("Введіть x, y, z: ");
    scanf_s("%lf%lf%lf", &x, &y, &z);

    res1 = x + y * z;
    res2 = x * y + z;

    if (res1 > res2) {
        printf("Більше значення (x + y * z) = %f\n", res1);
    } 
    else if (res2 > res1) {
        printf("Більше значення (x * y + z) = %f\n", res2);
    } 
    else {
        printf("Значення рівні: %f\n", res1);
    }

    return 0;
}