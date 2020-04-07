#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <sys/ioctl.h>
#include "lemon.h"

int main()
{
    int fd, ret_val;

    fd = open("/dev/lemon", O_RDONLY);
    if (fd < 0)
    {
        perror("Can't open device file: ");
        return -1;
    }

    if ((ret_val = ioctl(fd, IOCTL_SWITCH_ON_OFF, 0)) != 0)
    {
        printf("Error! ioctl returned value: %d\n", ret_val);
    }

    close(fd);

    return 0;
}