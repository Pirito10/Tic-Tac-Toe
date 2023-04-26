#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "functions.h"

int main()
{
	srand(time(0));
	int i = 1;
	struct table_Values values = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	struct table_Status status = {0, 0, 0, 0, 0, 0, 0, 0, 0};

	title("      THREE IN A ROW");
	printf("\n");

	char token_Player = toupper(tokenPlayer()), token_AI = tokenAI(token_Player);
	char correct_Player[] = {token_Player, token_Player, token_Player}, correct_AI[] = {token_AI, token_AI, token_AI};
	char pl1[3], pl2[3], pl3[3], pc1[3], pc2[3], pc3[3], pd1[3], pd2[3];
	char al1[3], al2[3], al3[3], ac1[3], ac2[3], ac3[3], ad1[3], ad2[3];

	system("clear");

	while (1)
	{
		int x, y;
		title("       THREE IN A ROW\n");
		table(values);
		x = turn();

		switch (x)
		{
		case 1:
			values.p1 = token_Player;
			status.s1 = 1;
			break;
		case 2:
			values.p2 = token_Player;
			status.s2 = 1;
			break;
		case 3:
			values.p3 = token_Player;
			status.s3 = 1;
			break;
		case 4:
			values.p4 = token_Player;
			status.s4 = 1;
			break;
		case 5:
			values.p5 = token_Player;
			status.s5 = 1;
			break;
		case 6:
			values.p6 = token_Player;
			status.s6 = 1;
			break;
		case 7:
			values.p7 = token_Player;
			status.s7 = 1;
			break;
		case 8:
			values.p8 = token_Player;
			status.s8 = 1;
			break;
		case 9:
			values.p9 = token_Player;
			status.s9 = 1;
			break;
		}
		pl1[0] = values.p1, pl1[1] = values.p2, pl1[2] = values.p3, pl2[0] = values.p4, pl2[1] = values.p5, pl2[2] = values.p6, pl3[0] = values.p7, pl3[1] = values.p8, pl3[2] = values.p9, pc1[0] = values.p1, pc1[1] = values.p4, pc1[2] = values.p7, pc2[0] = values.p2, pc2[1] = values.p5, pc2[2] = values.p8, pc3[0] = values.p3, pc3[1] = values.p6, pc3[2] = values.p9, pd1[0] = values.p1, pd1[1] = values.p5, pd1[2] = values.p9, pd2[0] = values.p3, pd2[1] = values.p5, pd2[2] = values.p7;
		if (strncmp(pl1, correct_Player, 3) == 0 || strncmp(pl2, correct_Player, 3) == 0 || strncmp(pl3, correct_Player, 3) == 0 || strncmp(pc1, correct_Player, 3) == 0 || strncmp(pc2, correct_Player, 3) == 0 || strncmp(pc3, correct_Player, 3) == 0 || strncmp(pd1, correct_Player, 3) == 0 || strncmp(pd2, correct_Player, 3) == 0)
		{
			system("clear");
			title("       THREE IN A ROW\n");
			table(values);
			printf("  Congratulations, you won!\n");
			return 0;
		}
		do
		{
			i = 1;
			y = rand() % 9 + 1;
			switch (y)
			{
			case 1:
				if (status.s1 == 1)
					continue;
				values.p1 = token_AI;
				status.s1 = 1;
				i = 0;
				break;
			case 2:
				if (status.s2 == 1)
					continue;
				values.p2 = token_AI;
				status.s2 = 1;
				i = 0;
				break;
			case 3:
				if (status.s3 == 1)
					continue;
				values.p3 = token_AI;
				status.s3 = 1;
				i = 0;
				break;
			case 4:
				if (status.s4 == 1)
					continue;
				values.p4 = token_AI;
				status.s4 = 1;
				i = 0;
				break;
			case 5:
				if (status.s5 == 1)
					continue;
				values.p5 = token_AI;
				status.s5 = 1;
				i = 0;
				break;
			case 6:
				if (status.s6 == 1)
					continue;
				values.p6 = token_AI;
				status.s6 = 1;
				i = 0;
				break;
			case 7:
				if (status.s7 == 1)
					continue;
				values.p7 = token_AI;
				status.s7 = 1;
				i = 0;
				break;
			case 8:
				if (status.s8 == 1)
					continue;
				values.p8 = token_AI;
				status.s8 = 1;
				i = 0;
				break;
			case 9:
				if (status.s9 == 1)
					continue;
				values.p9 = token_AI;
				status.s9 = 1;
				i = 0;
				break;
			}
		} while (i == 1);
		al1[0] = values.p1, al1[1] = values.p2, al1[2] = values.p3, al2[0] = values.p4, al2[1] = values.p5, al2[2] = values.p6, al3[0] = values.p7, al3[1] = values.p8, al3[2] = values.p9, ac1[0] = values.p1, ac1[1] = values.p4, ac1[2] = values.p7, ac2[0] = values.p2, ac2[1] = values.p5, ac2[2] = values.p8, ac3[0] = values.p3, ac3[1] = values.p6, ac3[2] = values.p9, ad1[0] = values.p1, ad1[1] = values.p5, ad1[2] = values.p9, ad2[0] = values.p3, ad2[1] = values.p5, ad2[2] = values.p7;
		if (strncmp(al1, correct_AI, 3) == 0 || strncmp(al2, correct_AI, 3) == 0 || strncmp(al3, correct_AI, 3) == 0 || strncmp(ac1, correct_AI, 3) == 0 || strncmp(ac2, correct_AI, 3) == 0 || strncmp(ac3, correct_AI, 3) == 0 || strncmp(ad1, correct_AI, 3) == 0 || strncmp(ad2, correct_AI, 3) == 0)
		{
			system("clear");
			title("       THREE IN A ROW\n");
			table(values);
			printf("\t You lost :(\n");
			return 0;
		}
		system("clear");
	}

	return 0;
}