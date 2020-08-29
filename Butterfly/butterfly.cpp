#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int row, track;
	scanf("%d", &row);

	for (int i = 1;i <= row - 1;i++) {
		track = row - i;
		for (int star1 = 1;star1 <= i;star1++) { printf("* "); }
		for (int space = 1;space <= 2 * track - 1;space++) { printf("  "); }
		for (int star2 = 1;star2 <= i;star2++) { printf("* "); }
		printf("\n");
	}

	int i = 0;
	while (i < 2 * row - 1) { printf("* ", i++); }
	printf("\n");

	for (int i = 1;i <= row - 1;i++) {
		track = row - i;
		for (int star1 = 1;star1 <= track;star1++) { printf("* "); }
		for (int space = 1;space <= 2 * i - 1;space++) { printf("  "); }
		for (int star2 = 1;star2 <= track;star2++) { printf("* "); }
		printf("\n");
	}

	return 0;
}