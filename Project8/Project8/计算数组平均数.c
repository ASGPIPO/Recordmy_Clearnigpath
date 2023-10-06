#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int num, m, i = 0;
	int counter = 0;
	double  sum = 0, anve;
	printf("输入你所需要求的平均数数据的个数和数据");
	scanf("%d", &num);
	printf("你输入的数组数据个数为%d\n", num);
	float array[10];
	while (counter < num) {
		printf("输入第%d个数据:", counter + 1);
		scanf("%f", &array[i]);
		counter++, i++;

	}
	for (m = 0; m < num; m++) {
		sum += array[m];
	}
	anve = sum / num;
	printf("平均数为%f", anve);
	return 0;
}