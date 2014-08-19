#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>

int main(int argc, char *argv[])
{
	int fd;
	fd = open("test.txt", O_RDWR);

	int a = 5;
	write(fd, &a, sizeof(a));

	close(fd);
	return 0;
}