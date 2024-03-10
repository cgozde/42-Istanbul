#include <fcntl.h>
#include <stdio.h>
//dosyadan sondan bir öncekini veren get_next_line.c
int main()
{
	int fd = open("a.txt", O_RDONLY, 0777);
	char *line;
	int count;
	int len;
	len = 0;
	count = 0;
	while ((line = get_next_line(fd)) != NULL)
	{
		len++;
		free(line);
	}
	close(fd);
	fd = open("a.txt", O_RDONLY, 0777);
	while ((line = get_next_line(fd)) != NULL)
	{
		count++;
		if (count == (len - 1))
			printf("%s", line);
		free(line);
	}
}
//dosya açarak tekli okuma get_next_line.c
int main()
{
	int fd = open("a.txt", O_RDONLY, 0777);
	char *line;

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	system("leaks a.out");
}
//double pointerla tersten okuma tek dosya get_next_line.c
int main()
{
	int fd = open("a.txt", O_RDONLY, 0777);
	char *line;
	int i = 0;
	char *str[9];

	str[i] = get_next_line(fd);

	while (str[i])
	{
		i++;
		str[i] = get_next_line(fd);
	}
	while (--i >= 0)
	{
		printf("%s", str[i]);
	}
}
//double pointerla tutarak gezme tek dosya get_next_line.c
int main()
{
	int fd = open("a.txt", O_RDONLY, 0777);
	char *line;
	int i = 0;
	char *str[256];

	str[i] = get_next_line(fd);

	while (str[i])
	{
		printf("%s", str[i]);
		i++;
		str[i] = get_next_line(fd);
	}
	close(fd);
	system("leaks a.out");
}
//get_next_line_bonus.c
//getconf OPEN_MAX ile terminalde açılabilecek dosya sayısı bulunur

//dosya açıp kapatarak iki dosyayı sırayla okuma
int main()
{
	char *line;
	int fd = open("a.txt", O_CREAT | O_RDWR, 0777);
	int fd1 = open("b.txt", O_CREAT | O_RDWR, 0777);
	
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	while ((line = get_next_line(fd1)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd1);
}
//2 dosyayı sırayla yazdırmak (sırayla basamakları yazdırılır bir ondan bir bundan)
int main()
{
	char *line;
	char *line1;
	int fd = open("a.txt", O_CREAT | O_RDWR, 0777);
	int fd1 = open("b.txt", O_CREAT | O_RDWR, 0777);
	
	while (1)
	{
		line = get_next_line(fd);
		line1 = get_next_line(fd1);
		if (!line && !line1)
		{
			break;
		}
		printf("%s%s", line, line1);
		free(line);
		free(line1);
	}
	close(fd);
	close(fd1);
}
//tersten iki dosyayı sırayla okumak
int main()
{
	char *str[256];
	
	int fd = open("a.txt", O_RDONLY, 0777);
	int fd1 = open("b.txt", O_RDONLY, 0777);

	int i = 0;
	str[i] = get_next_line(fd);
	while (str[i])
	{
		i++;
		str[i] = get_next_line(fd);
	}
	str[i] = get_next_line(fd1);
	while (str[i])
	{
		i++;
		str[i] = get_next_line(fd1);
	}
	while (--i >= 0)
	{
		printf("%s", str[i]);
	}
}
//düzden hepsini okuyup dosyaya yazdırma
int main()
{
	char *str[256];

	int fd = open("a.txt", O_RDONLY, 0777);
	int fd1 = open("b.txt", O_RDONLY, 0777);
	
	int i = 0;
	str[i] = get_next_line(fd);
	while(str[i])
	{
		i++;
		str[i] = get_next_line(fd);
	}
	str[i] = get_next_line(fd1);
	while(str[i])
	{
		i++;
		str[i] = get_next_line(fd1);
	}
	close(fd);
	close(fd1);
	int fd2 = open("c.txt", O_CREAT | O_RDWR, 0777);
	int j = 0;
	while(str[j])
	{
		write(fd2, str[j], ft_strlen(str[j]));
		j++;
	}
	system("leaks a.out");
}