#include <stdio.h>
#include <stdlib.h>

#define N 4

void display(int board[N][N]) {
	int r, c;
	for(r = 0; r < N; r++) {
		for(c = 0; c < N; c++) {
			printf("%d ", board[r][c]);
		}
		printf("\n");
	}
}

int solveNQ(int board[N][N], int col) {
	int i;
	if(col >= N) {
		return 0;
	}
	for(i = 0; i < N; i++) {
		if(isSafePos(board, i, col) == 0) {
			board[i][col] = 1;
			if(solveNQ(board, col+1) == 0) {
				return 0;
			}
			board[i][col] = 0;
		}
	}
	return 1;
}

int isSafePos(int board[N][N], int row, int col) {
	int r, c;

	for(c = 0; c < col; c++) {
		if(board[row][c] == 1) {
			return 1;
		}
	}
	for(r = row, c = col; r >= 0 && c >= 0; r--, c--) {
		if(board[r][c] == 1) {
			return 1;
		}
	}
	for (r = row, c = col; c >= 0 && r < N; r++, c--) {
		if (board[r][c] == 1) {
			return 1;
		}
	}

	return 0;
}

int main(void) {
	int board[N][N] = {0};

	if(solveNQ(board, 0) == 1) {
		printf("No solution!\n");
	} else {
		display(board);
	}

	return 0;
}
