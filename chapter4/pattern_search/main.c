#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int max);
int str_index(char source[], char searchfor[]);

char pattern[] = "ould";

/*
Ah Love! could you and I with Fate conspire
To grasp this sorry Scheme of Things entire,
Would not we shatter it to bits -- and then
Re-mould it nearer to the Heart's Desire!
*/
int main(int argc, char const *argv[])
{
    char line[MAXLINE];
    int found = 0;

    while (get_line(line, MAXLINE) > 0)
    {
        if (str_index(line, pattern) >= 0)
        {
            printf("%s", line);
            found++;
        }
    }

    return found;
}