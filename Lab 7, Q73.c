#include <stdio.h>

int main()
{
    int count[5] = {0}, spoilt = 0, vote;

    printf("Enter votes (1-5, or -1 to stop):\n");
    while (scanf("%d", &vote) && vote != -1)
        (vote >= 1 && vote <= 5) ? count[vote - 1]++ : spoilt++;

    for (int i = 0; i < 5; i++)
    {
        printf("Candidate %d: %d votes\n", i + 1, count[i]);
    }
    printf("Spoilt ballots: %d\n", spoilt);

    return 0;
}
