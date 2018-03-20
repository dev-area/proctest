#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void main(void)
{
	char buf[100];
	int fd = open("/proc/mydev", O_RDWR);
	read(fd, buf, 100);
	puts(buf);

	lseek(fd, 0 , SEEK_SET);
	write(fd, "33 4", 5);
	
	lseek(fd, 0 , SEEK_SET);
	read(fd, buf, 100);
	puts(buf);
}	
	
