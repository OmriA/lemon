#include <linux/ioctl.h>

#define IOCTL_SWITCH_ON_OFF _IO(DEVICE_MAJOR, 0)
#define DEVICE_MAJOR (499)
#define DEVICE_NAME "lemon"