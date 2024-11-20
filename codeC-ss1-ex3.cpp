#include <stdio.h>
int main() {
	int num1 = 8;
	int num2 = 3;
	int sum = num1 + num2;
	int difference = num1 - num2;
    int product = num1 * num2; 
    float quotient = (float)num1 / num2;
    printf("Tong cua %d va %d la %d\n", number1, number2, sum);
    printf("Hieu cua %d va %d la %d\n", number1, number2, difference);
    printf("Tich cua %d va %d la %d\n", number1, number2, product);
    printf("Thuong cua %d va %d la %.2f\n", number1, number2, quotient);

}
