#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c, s, Area;
	printf("Insert a,b,c : ");
	scanf("%lf%lf%lf", &a, &b, &c);
	s = (a + b + c) / 2;
	Area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("Area : ");
	if (b + c > a || a + c > b || a + b > c) {
		printf("%lf", Area);
	}
	else {
		printf("0");
	}
	return 0;
}



