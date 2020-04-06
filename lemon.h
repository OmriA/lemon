#include <linux/ioctl.h>

#define IOCTL_SWITCH_ON_OFF _IO(DEVICE_MAJOR, 0)
#define DEVICE_MAJOR (1337)
#define DEVICE_NAME "lemon"