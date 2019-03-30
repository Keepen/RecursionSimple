#include <stdio.h>
#include <stdlib.h>
//µİ¹éÇó½×³Ë
int fac(int num) {
	if (num == 1) {
		return 1;
	}
	return num * fac(num - 1);	
}

/*if (num != 1) {
		return num * fac(num - 1);
	}
	return 1;*/


int main() {
	int num = 5;
	fac(num);
	printf("%d\n", fac(num));
	system("pause");
	return 0;
}