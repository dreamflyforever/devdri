#include <stdio.h>
#include "list.h"
#include "device.h"

int led_open(char *name, U8 flag)
{
	printf("%s open flag: %d\n", name, flag);
	return 0;
}

int led_read(char * buff, U8 size)
{
	printf("led read\n");
	return 0;
}

int led_write(char * buff, U8 size)
{
	printf("led write: %s\n", buff);
	return 0;
}

int led_close()
{
	printf("led close\n");
	return 0;
}

OPERATIONS led_ops = {
	.open = led_open,
	.read = led_read,
	.write = led_write,
	.close = led_close,
};

OPERATIONS pwm_ops = {
	.open = led_open,
	.read = led_read,
	.write = led_write,
	.close = led_close,
};

OPERATIONS update_ops = {
	.open = led_open,
	.read = led_read,
	.write = led_write,
	.close = led_close,
};

int device_init(DEVICE *dev, char *dev_name)
{
	ops_init(&led_ops, led_open, led_write, led_read, NULL, led_close);
	device_register(dev, dev_name, &led_ops);
	return 0;
}
