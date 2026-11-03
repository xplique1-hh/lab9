#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    const double PI = 3.14159265358979323846;
    int again;
    do
    {
        char sym;
        double x;
        int b, r, c;
        printf("Введите символ для построения: ");
        scanf(" %c", &sym);
        printf("Введите угол a в градусах (от 1 до 89): ");
        scanf("%lf", &x);
        printf("Введите прилежащий катет b > 0: ");
        scanf("%d", &b);
        int h = (int)(b * tan(x * PI / 180.0) + 0.5);
        if (h < 1) h = 1;
        printf("катет a = %d симв.\n\n", h);
        for (r = 0; r < h; r++)
        {
            int n = (int)((double)b * (r + 1) / h + 0.5);
            if (n < 1) n = 1;

            for (c = 0; c < b - n; c++)
                putchar(' ');
            for (c = 0; c < n; c++)
                putchar(sym);
            putchar('\n');
        }
        printf("\nПродолжить?");
        scanf("%d", &again);
        printf("\n");
    } while (again != 0);
    return 0;
}
