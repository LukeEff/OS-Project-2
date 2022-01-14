#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  if (argc == 0)
  {
    return -1;
  }
  int fd = open(argv[1], O_RDONLY);
  char buf[2048];
  int count = read(fd, buf, sizeof buf);
  count = write(1, buf, count);
  close(fd);
  return 0;
}
