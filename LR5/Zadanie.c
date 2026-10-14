#include <stdio.h>
#include <locale.h>
#include <math.h> 

#define M_PI 3.14159265358979323846

double z_1(double gr);
double z_2_a(double k, double x); 
double z_2_b(double k, double x); 
double z_2_y(double b, double a); 

int main(void)
{
    setlocale(LC_CTYPE, "ru_RU.UTF-8");

    //ЗАДАНИЕ 1
    double gr;
    double res;

    printf("Задание 1\n");
    printf("Введите значение угла в градусах: ");
    scanf("%lf", &gr);

    res = z_1(gr);

    printf("%.0f град = %.6f\n", gr, res);


    //ЗАДАНИЕ 2
    const double x = 2.2;
    double k;
    double a, b, y;

    printf("\nЗадание 2\n");
    printf("Введите значение параметра k: ");
    scanf("%lf", &k);

    a = z_2_a(k, x);
    b = z_2_b(k, x);
    y = z_2_y(b, a);

    printf("\nРезультаты вычислений:\n");
    printf("x = %.1f\n", x);
    printf("k = %.0f\n", k);
    printf("a = %.5f\n", a);
    printf("b = %.5f\n", b);
    printf("y = %.3f\n", y);


    //ЗАДАНИЕ 3
    printf("\nЗадание 3*\n");

    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    printf("Целые части: A = %d, B = %d, C = %d\n\n", A, B, C);

    int rez_a = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));
    printf("а) Только одно из чисел А и В четное:\n");
    printf("Условие выполнено (1 - да, 0 - нет): %d\n", rez_a);
    printf("Значение выражения: %d\n\n", rez_a);

    int rez_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("б) Каждое из чисел А, В, С кратно 3:\n");
    printf("Условие выполнено (1 - да, 0 - нет): %d\n", rez_b);
    printf("Значение выражения: %d\n", rez_b);

    return 0;
}

double z_1(double gr) {
    double rad;
    double res;

    rad = gr * M_PI / 180.0;
    res = sin(rad);

    return res;
}

double z_2_a(double k, double x) {
    double a;
    a = pow(k + x, 3);
    return a;
}

double z_2_b(double k, double x) {
    double b;
    b = log10(fabs(k * x));
    return b;
}

double z_2_y(double b, double a) {
    double y;
    y = pow(b, 2) + sqrt(fabs(a));
    return y;
}
