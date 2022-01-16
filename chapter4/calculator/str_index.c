int str_index(char s[], char t[])
{
    int i, j, k;

    // Starting from a character of source and see
    // if target matches every char from here.
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
        { }

        // If search target reached the end, it indicates source string
        // contains it.
        if (k > 0 && t[k] == '\0')
        {
            return i;
        }
    }

    return -1;
}