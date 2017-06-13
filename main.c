#include <stdio.h>
#include "list.h"
#include "device.h"
//#include <led_driver.c>

extern OPERATIONS led_ops;
int main()
{
	device_queue_init();
	DEVICE led_dev;
	device_register(&led_dev, "led", &led_ops);
	device_open("led", 1);
	device_read(&led_dev, NULL, 1);
	device_write(&led_dev, NULL, 1);
	device_close("led");
	return 0;
}
