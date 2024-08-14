#include <stdio.h>
int mystrlen(const char *src)
{
    int count = 0;
    while (*src != '\0')
    {
        count++;
        src++;
    }
    return count;
}
int main()
{
    char str1[20] = "pankaj";
    char str2[20] = "sharma sir";
    puts(str1);
    puts(str2);
    printf("the length of %s is %d ", str1, mystrlen(str1));
    printf("\nthe length of %s is %d ", str2, mystrlen(str2));

    return 0;
}