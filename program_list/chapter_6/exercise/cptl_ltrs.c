#include <stdio.h>
int main(void)
{
    const int ROW = 6;
    int row;
    char ch;

    for (row = 0; row < ROW; row++)
    {
	for (ch = 'F'; ch >= ('F' - row); ch--)
	    printf("%c", ch);
	printf("\n");
    }

    return 0;
}
