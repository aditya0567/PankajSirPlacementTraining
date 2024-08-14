#include <stdio.h>
int mystrcmp(const char *str1, const char *str2)
{
    int diff = 0;
    while (*str1 != '\0' || *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            // unmatched char is found
            diff = *str1 - *str2;
            return diff;
        }
        ++str1;
        ++str2;
    }
    return diff;
}
int main()
{
    int i;
    printf("%d", mystrcmp("ram", "ram"));

    return 0;
}