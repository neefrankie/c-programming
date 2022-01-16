#include <stdio.h>

#define MAXLINE 100

double atof(char s[]);
int get_line(char s[], int lim);

int main(int argc, char const *argv[])
{
    double sum;
    char line[MAXLINE];
    
    sum = 0;

    while (get_line(line, MAXLINE) > 0)
    {
        printf("\t%g\n", sum += atof(line));
    }

    return 0;
}
