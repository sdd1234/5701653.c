#include <stdio.h>
#include <time.h>
double power_iter(int n, int j)
{
    double k = 1;
    for (int i = 1; i <= j; i++) {
        k *= n;
    }
    return k;
}
double power_rec(long n, j)
{
    double a = 1;
    if (j == 0)
        return 1;
    else
        return n * power_rec(n, j - 1);
    a *= power_rec(n, j - 1);
    return a;
}

int main(void) {
    clock_t start, stop;
    double cai;
    start = clock();
    double result_iter = power_iter(13, 21);
    printf("�ݺ�: %f\n", result_iter);
    stop = clock();
    cai = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("�����ð��� %f��.\n", cai);
    start = clock();
    double result_rec = power_rec(13, 21);
    printf("���: %f\n", result_rec);
    stop = clock();
    cai = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("�����ð��� %f��.\n", cai);
    return 0;
}
