#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void title(char message[])
{
	printf("%s\n", message);
	return;
}

char tokenPlayer()
{
	char token_Player;
	printf("  Choose your token (X/O): ");
	token_Player = fgetc(stdin);
	fgetc(stdin);
	return token_Player;
}

char tokenAI(char token_Player)
{
	char token_AI;
	if (token_Player == 'X')
		token_AI = 'O';
	else
		token_AI = 'X';
	return token_AI;
}

void table(struct table_Values actual_Values)
{
	printf("\t %c | %c | %c \n\t-----------\n\t %c | %c | %c \n\t-----------\n\t %c | %c | %c \n\n", actual_Values.p1, actual_Values.p2, actual_Values.p3, actual_Values.p4, actual_Values.p5, actual_Values.p6, actual_Values.p7, actual_Values.p8, actual_Values.p9);
	return;
}

int turn()
{
	char str[2];
	int pos;
	printf("  Choose the box you want: ");
	pos = atoi(fgets(str, 2, stdin));
	fgetc(stdin);
	return pos;
}