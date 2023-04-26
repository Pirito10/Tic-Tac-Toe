#ifndef FUNCTION_H
#define FUNCTION_H

struct table_Values
{
	char p1, p2, p3, p4, p5, p6, p7, p8, p9;
};

struct table_Status
{
	int s1, s2, s3, s4, s5, s6, s7, s8, s9;
};

void title(char message[]);
void table(struct table_Values actual_Values);
char tokenPlayer();
char tokenAI(char token_Player);
int turn();

#endif