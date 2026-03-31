#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char    *ft_strcpy(char *dst, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
size_t  ft_strlen(const char *s);
ssize_t ft_write(int fd, const void *buf, size_t count);
char    *ft_strdup(const char *s);
ssize_t	ft_read(int fd, void *buf, size_t count);


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
		cmp = ft_strcmp(s1, s2);
		printf("%d", cmp);
	}
	else if (strcmp(argv[1], "write") == 0)
	{
		printf("real write : %zd\n", write(1, "Master Mind @mmurru", 19));
		printf("my ft_write : %zd\n", ft_write(1, "Master Mind @mmurru", 19));

	}
	else if (strcmp(argv[1], "read") == 0)
	{
		int fd = open("test_read.txt", O_RDONLY);
		char	*BUFFER[1337];
		if (!fd)
		{
			printf("Error loading test_read file !");
			exit(1);
		}
		printf("real read : %zd\n", read(fd, &BUFFER, sizeof(BUFFER)));
		close(fd);
		fd = open("test_read.txt", O_RDONLY);
		printf("my ft_read : %zd\n", ft_read(fd, &BUFFER, sizeof(BUFFER)));
		close(fd);
	}
	else if (strcmp(argv[1], "strdup") == 0)
	{
		const char    *s1 = "Master Mind @mmurru";
		char *s2 = strdup(s1);
		printf("BEFORE\nOrignal string : %s\n string dup : %s\n",s1,s2);
		s2 = ft_strdup(s1);
		printf("AFTER\nOrignal string : %s\n string dup : %s\n",s1,s2);
	}
	else
		printf("The second argument of the binary need to be the name of function want to test\nExample: ./libasm strcpy\n");
	return (0);
}