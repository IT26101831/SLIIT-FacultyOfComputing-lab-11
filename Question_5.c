#include <stdio.h>

#define SIZE 2

int main(void)
{
    char names[SIZE][50];
    int ids[SIZE];
    int scores[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", names[i]);

        printf("Enter ID: ");
        scanf("%d", &ids[i]);

        printf("Enter score: ");
        scanf("%d", &scores[i]);
    }

    printf("\nStudent Details:\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%s (%d), Score: %d\n",
               names[i], ids[i], scores[i]);
    }

    return 0;
}
