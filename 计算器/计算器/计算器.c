#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double  num2 = 0;
static double num1 = 0;
//double jiafa(){
//
//
//	return  result = ADD(num1, num2);
//
//	/*printf("���Ϊ%.4lf", result);*/
//}
//
//double jianfa(num1, num2){
//
//
//	return  result = ADD(num1, -num2);
//	
//}
double jiafa(){
	int counter = 3;
	printf("�����1������");
	scanf("%lf", &num1);
	printf("�����2������");

		while (scanf("%lf", &num2) == 1) {//���û����������ʱ�˳�

			printf("�����%d������", counter);
			/*scanf("%lf", &num2);*/
			num1 += num2;
			counter++;

		}
	
	printf("%lf", num1);
	return num1;
}
double jianfa(){
	int counter = 3;
	printf("�����1������");
	scanf("%lf", &num1);
	printf("�����2������");
	while (scanf("%lf", &num2) == 1) {

		printf("�����%d������", counter);
		/*scanf("%lf", &num2);*/
		num1 -= num2;
		counter++;

	}
	printf("%lf", num1);
	return num1;
}
double chengfa(){
	int counter = 3;
	printf("�����1������");
	scanf("%lf", &num1);
	printf("�����2������");
	while (scanf("%lf", &num2) == 1) {

		printf("�����%d������", counter);
		/*scanf("%lf", &num2);*/
		num1 *= num2;
		counter++;

	}
	printf("%lf", num1);
	return num1;
}
double chufa(){
	int counter = 3;
	printf("�����1������");
	scanf("%lf", &num1);
	printf("�����2������");
	while (scanf("%lf", &num2) == 1) {

		printf("�����%d������", counter);
		/*scanf("%lf", &num2);*/
		num1 *= num2;
		counter++;

	}
	printf("%lf", num1);
	return num1;
}
double kaifang() {
	printf("��������:");
	scanf("%lf", &num1);
	printf("������:");
	scanf("%lf", &num2);
	double 	result = pow(num1, 1 / num2);
	printf("%lf", result);
}
double quyu() {
	printf("��������1:");
	scanf("%lf", &num1);
	printf("��������2:");
	scanf("%lf",&num2);
	double 	result = fmod(num1, num2);
	printf("%lf", result);
}
int main() {
	int choice;
	printf("��Ҫ����������������\n1 �ӷ� 2 ���� 3 �˷� 4 ���� 5���� 6 ȡ�� ���������˳�����\n�������Ӧ���");
	scanf("%d",&choice);
	switch (choice) {

	case 1:
		jiafa();
		break;
	case 2:
		jianfa();
		break;
	case 3:
		chengfa();
		break;
	case 4:
		chufa();
		break;
	case 5:
		kaifang();
		break;
	case 6:
		quyu();
		break;
	default:
		break;
	}




}
