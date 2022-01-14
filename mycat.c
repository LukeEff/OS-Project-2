#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 0)
    {
        char buf[2048];
        int count = read(0, buf, sizeof buf);
        count = write(1, buf, count);
    }
    for (int i = 1; i < argc; i++)
    {
        int fd = open(argv[i], O_RDONLY);
        char buf[2048];
        int count = read(fd, buf, sizeof buf);

        while (count > 0)
        {
            write(1, buf, count);
            count = read(fd, buf, sizeof buf);
        }
        close(fd);
    }

    return 0;
}
