#include <ctype.h>

double atof(char s[])
{
    // Power to used to devide to get the fraction part.
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++)
        ;

    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
    {
        i++;
    }

    for (val = 0.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
    }

    // Ignore dot.
    if (s[i] == '.')
    {
        i++;
    }

    // Continue to add fraction part.
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    return sign * val / power;
}