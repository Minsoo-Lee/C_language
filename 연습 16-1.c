#include <stdio.h>

int main(void) {
	int gugu[3][9];
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			gugu[i][j] = (i + 2) * (j+1);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d ", gugu[i][j]);
		}
		printf("\n");
	}
	return 0;
}