#include<stdio.h>
#include<string.h>
#define Q "His Hamlet was funny without being vulgar."
int main()
{
    printf("He sold the painting for $%2.2f.\n", 2.345e2);

    printf("%c%c%c\n", 'H', 105, '\41');
    printf("\"%s\"\nhas %d characters.\n", Q, strlen(Q));
    printf("Is %010.2f the same as %010.2e?\n", 1201.0, 1201.0);
    return 0;
}
