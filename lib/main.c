#include <stdio.h>
#include <string.h>
char    *ft_strcpy(char *dst, const char *src);
size_t     ft_strlen(const char *s);

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Wrong usage\n Usage : ./libasm NAME_FUNC\n");
        return (0);
    }
    else if (strcmp(argv[1],"strcpy") == 0)
    {
        char    *src = "Master Mind @mmurru";
        char    dest[1337];
        printf("Strcpy BEFORE\n");
        printf("SRC string : %s\nSRC ADDR %p\n", src, (void *)src);
        printf("DEST string : %s\nDEST ADDR %p", dest, (void *)dest);
        ft_strcpy(dest, src);
        printf("\n\nStrcpy AFTER\n");
        printf("SRC string : %s\nSRC ADDR %p\n", src, (void *)src);
        printf("DEST string : %s\nDEST ADDR %p\n", dest, (void *)dest);

    }
    else if (strcmp(argv[1],"strlen") == 0)
    {
        char *str = "Master Mind @mmurru";
        printf("ft_strlen of : %s\n LEN : %zu\n", str, ft_strlen(str));
        printf("strlen of : %s\n LEN : %zu\n", str, strlen(str));

    }
    else if (strcmp(argv[1], "strcmp") == 0)
    {
        int cmp = 0;
        char    *s1 = "Master Mind @mmurru";
        char    *s2 = "Master Mind @mmurru";
        printf("STRCMP\n s1 : %s \n s2 : %s\n", s1, s2);
    
        printf("%d", cmp);
    }

}