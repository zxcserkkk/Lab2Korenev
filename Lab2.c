#include <stdio.h>
#include <locale.h>
int t1();
int t2();
int t3();

int main()
{
	setlocale(LC_CTYPE, ".UTF8");
	t1();
	t2();
	t3();
	return 0;
}

int t1()
{
	printf("123\n"); // подзадание 1
	printf("1\n2\n3\n");
	printf("\t1\n\t\t2\n\t\t\t3\n");
	printf("%d\n\t%d\n\t\t%d\n\t\t\t%d\n",1,2,3,4);
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("деление %d на %d равно %d\n ", 7, 5, 7 / 5);
	printf("умножение %d на %d равно %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("%d разделить %d равно %d\n ", 5., 2000000., 5. / 2000000);
	printf("%f разделить %f равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("%g разделить %g равно %g\n ", 5., 2000000., 5. / 2000000);
	printf("%e разделить %e равно %e\n ", 5., 2000000., 5. / 2000000);
	return 0;
}

int t2()
{
	int N = 2;
	int K = 2;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K);
	printf("До полуночи осталось %d часов и %d минут\n", N, K);
	printf("С 8.00 прошло %d секунд\n", N*3600 + K*60);
	printf("Текущий час  = %.2f суток  и текущая минута =  %.2f часа\n", N/24.0, K/60.0);
	return 0;
}
int t3()
{
	int l = 133, k = 2, m = 4;
	int n = 2;
	printf("Дано:\n%d\n%d\n______\n%0+*.*f\n", n, l, k+m+2, m, (n/1.0)/l );
	return 0;
}