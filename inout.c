#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
int fd = open("file.txt", O_RDWR | O_CREAT);
if (fd == -1)
{
perror("open");
exit(1);
}

char buffer[1024];
ssize_t nread = read(fd, buffer, sizeof(buffer));
if (nread == -1)
{
perror("read");
exit(1);
}

ssize_t nwritten = write(STDOUT_FILENO, buffer, nread);
if (nwritten == -1)
{
perror("write");
exit(1);
}

if (close(fd) == -1)
{
perror("close");
exit(1);
}

return 0;
}
