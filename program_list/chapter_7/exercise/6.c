#include<stdio.h>
#define STOP '#'
int main(void)
{
    char ch, prev;
    int count = 0;

    while((ch=getchar())!= STOP)
    {
	if(ch=='i'&&prev=='e')
	    count++;
	prev = ch;
    }
    printf("%d time(s) ei occurs.\n", count);
    return 0;
}
