#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int num, m, i = 0;
	int counter = 0;
	double  sum = 0, anve;
	printf("����������Ҫ���ƽ�������ݵĸ���������");
	scanf("%d", &num);
	printf("��������������ݸ���Ϊ%d\n", num);
	float array[10];
	while (counter < num) {
		printf("�����%d������:", counter + 1);
		scanf("%f", &array[i]);
		counter++, i++;

	}
	for (m = 0; m < num; m++) {
		sum += array[m];
	}
	anve = sum / num;
	printf("ƽ����Ϊ%f", anve);
	return 0;
}