#include<stdio.h>
#define rows 8
#define cols 8

void int_board(int board[rows][cols]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			board[i][j] = 0;
		}
	}
}
void setup_board(int board[rows][cols]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < cols; j++) {
			if ((i + j) % 2 == 1) {
				board[i][j] = 1;
			}
		}
	}

	for (int i = rows-2; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if ((i + j) % 2 == 1) {
				board[i][j] = 2;
			}
		}
	}
}

void print_board(int board[rows][cols]) {
	printf("\n ");
	for (int j = 0; j < cols; j++) {
		printf("%d", j);

	}
	printf("\n");

	printf(" ");
	for (int j = 0; j < cols; j++) {
		printf("--", j);

	}
	printf("\n");

	for (int i = 0; i < rows; i++) {
		printf("%d|", i);
		for (int j = 0; j < cols; j++) {
			if (board[i][j] == 0) {
				printf(".");
			}
			else if (board[i][j] == 1) {
				printf("o");
			}
			else if (board[i][j] == 2) {
				printf("x");
			}

		}
		printf("|\n");
	}

	printf(" ");
	for (int j = 0; j < cols; j++) {
		printf("--", j);

	}
	printf("\n");

}
int main(void) {

	int board[rows][cols];
	int_board(board);
	setup_board(board);
	print_board(board);
	return 0;
}