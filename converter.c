#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
 
void main()
{
float c,k,f;
printf("Celsius= ");
scanf("%f", &c); // ���� �������� �������
k=c+273,15;
printf("Kelvin =%f\n", k); // ����� �������� ��������
f=c*1.8+32;
printf("Fahrenheit =%f\n", f); // ����� �������� ���������
}