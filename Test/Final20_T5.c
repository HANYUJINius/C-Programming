#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

int winCheck(char b[][BOARD_SIZE + 1], int r, int c)
{
	int i, k;
	char player = b[r][c]; //플레이어를 받아온다
	int cnt = 1;
	int tmp = 0;

	//-------------------대각선----------------------
	k = c;
	//내 기준 왼쪽 위

	for (i = r - 1; i >=0 &&k >= 0; i--)
		if (b[i][--k] != player)
			continue;
		else
			cnt++;

	k = c;
	//내 기준 오른쪽 아래 
	for (i = r + 1; i < BOARD_SIZE && k < BOARD_SIZE; i++)
		if (b[i][++k] != player)
			continue;
		else
			cnt++;

	//--------------역대각선-------------------------
	tmp = 0;
	k = c;
	//현재 내 기준 오른쪽 위
	for (i = r - 1; i >= 0 && k < BOARD_SIZE; i--)
		if (b[i][++k] != player)
			continue;
		else
			tmp++;

	
	//현재 내 기준 왼쪽 아래
	k = c;
	for (i = r + 1; i < BOARD_SIZE && k >=0; i++)
		if (b[i][--k] != player)
			continue;
		else
			tmp++;

	return cnt + tmp ;
}

void display(char b[][BOARD_SIZE + 1])
{
	int i, j;
	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n     ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int main(void)
{
	char board[BOARD_SIZE][BOARD_SIZE + 1] = { ' ' };
	char turn = 'X';
	int r, c;
	int i;
	int lose;

	// (A)말들이 이미 놓인 판으로 입력
	for (i = 0; i < BOARD_SIZE; i++)
		scanf("%s", board[i]); // 판의 행부분을 한꺼번에 입력 받는다

	//display(board); // 보드판의 말이 놓인 것을 보려면 주석 취소
	for (i = 0; i < 2; i++) { // 이미 말들이 놓인 판에 X, O 말을 한 번씩 놓고 
								            // 대각선, 역대각선에 있는 자신의 말의 수를 출력한다
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);

		if(board[r][c] != '-') continue; // 이미 말이 놓인 자리

		board[r][c] = turn;
		display(board); // 보드판의 말이 놓인 것을 보려면 주석 취소

		printf("%d\n", winCheck(board, r, c));
		turn = (turn == 'X' ? 'O' : 'X');
	}
}
