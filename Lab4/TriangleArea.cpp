#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c, s, AreaInRoot;
	printf("Insert a,b,c : ");
	scanf("%lf%lf%lf", &a, &b, &c);
	s = (a + b + c) / 2;
	AreaInRoot = s * (s - a) * (s - b) * (s - c);
	printf("Area : ");
	if (AreaInRoot > 0) {
		printf("%lf", sqrt(AreaInRoot));
	}
	else {
		printf("0");
	}
	return 0;
}

