/* 
Жигунов Кирилл Андреевич
П.И. 1-1
Функции с параметрами результатом
*/
#include <stdio.h>
int max2(int a, int b) {
    if (a>b) return a;
    return b;
}
int min2(int a, int b) {
    if (a<b) return a;
    return b;
}
int range3(int a, int b, int c) {
    int result, max2, min2;
    if (a > b && a > c) {
        max2 = a;
    }else if (b > a && b > c) {
        max2 = b;
    } else {
        max2 = c;
    }
    if (a < b && a < c) {
        min2 = a;
    }else if (b < a && b < c) {
        min2 = b;
    } else {
        min2 = c;
    }
    result = max2 - min2;
    return result;
}

int main(void) {
	int x, y, z;
	if (scanf("%d %d %d", &x, &y, &z) != 3) {
	    puts("Input error"); return 1;
	}
	if (x < -1000 || x > 1000 || y < -1000 || y > 1000 || z < -1000 || z > 1000) {
	    puts("Range error"); return 1;
	}
	int pair = max2(x, y);
	int result = max2(pair, z);
	int pair1 = min2(x, y);
	int result1 = min2(pair, z);
	int result2 = range3(x, y, z);
	printf("Max = %d\n", result);
	printf("Min = %d\n", result1);
	printf("Range = %d\n", result2);
	return 0;

}

