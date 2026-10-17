#include <stdio.h>
int max2(int a, int b) {
    if (a>b) return a;
    return b;
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
	printf("Max = %d\n", result);
	return 0;

}

