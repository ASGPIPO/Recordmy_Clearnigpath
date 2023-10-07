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
//	/*printf("结果为%.4lf", result);*/
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
	printf("输入第1个数字");
	scanf("%lf", &num1);
	printf("输入第2个数字");

		while (scanf("%lf", &num2) == 1) {//当用户输入非数字时退出

			printf("输入第%d个数字", counter);
			/*scanf("%lf", &num2);*/
			num1 += num2;
			counter++;

		}
	
	printf("%lf", num1);
	return num1;
}
double jianfa(){
	int counter = 3;
	printf("输入第1个数字");
	scanf("%lf", &num1);
	printf("输入第2个数字");
	while (scanf("%lf", &num2) == 1) {

		printf("输入第%d个数字", counter);
		/*scanf("%lf", &num2);*/
		num1 -= num2;
		counter++;

	}
	printf("%lf", num1);
	return num1;
}
double chengfa(){
	int counter = 3;
	printf("输入第1个数字");
	scanf("%lf", &num1);
	printf("输入第2个数字");
	while (scanf("%lf", &num2) == 1) {

		printf("输入第%d个数字", counter);
		/*scanf("%lf", &num2);*/
		num1 *= num2;
		counter++;

	}
	printf("%lf", num1);
	return num1;
}
double chufa(){
	int counter = 3;
	printf("输入第1个数字");
	scanf("%lf", &num1);
	printf("输入第2个数字");
	while (scanf("%lf", &num2) == 1) {

		printf("输入第%d个数字", counter);
		/*scanf("%lf", &num2);*/
		num1 *= num2;
		counter++;

	}
	printf("%lf", num1);
	return num1;
}
double kaifang() {
	printf("输入数字:");
	scanf("%lf", &num1);
	printf("开几次:");
	scanf("%lf", &num2);
	double 	result = pow(num1, 1 / num2);
	printf("%lf", result);
}
double quyu() {
	printf("输入数字1:");
	scanf("%lf", &num1);
	printf("输入数字2:");
	scanf("%lf",&num2);
	double 	result = fmod(num1, num2);
	printf("%lf", result);
}
int main() {
	int choice;
	printf("你要进行下列哪种运算\n1 加法 2 减法 3 乘法 4 除法 5开方 6 取余 输入其他退出程序\n请输入对应编号");
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
