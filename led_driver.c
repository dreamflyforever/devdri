#include <stdio.h>
#include "list.h"
#include "device.h"

int led_open(char *name, char flag)
{
	printf("%s open flag: %d\n", name, flag);
	return 0;
}

int led_read(U8 * buff, U8 size)
{
	printf("led read\n");
	return 0;
}

int led_write(U8 * buff, U8 size)
{
	printf("led write\n");
	return 0;
}

int led_close(U8 * name)
{
	printf("%s close\n", name);
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
