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

	DEVICE pwm_dev;
	device_queue_init();
	device_register(&pwm_dev, "led", &led_ops);
	device_open("pwm", 1);
	device_read(&pwm_dev, NULL, 1);
	device_write(&pwm_dev, NULL, 1);
	device_close("led");

	DEVICE update_dev;
	device_queue_init();
	device_register(&update_dev, "led", &led_ops);
	device_open("update", 1);
	device_read(&update_dev, NULL, 1);
	device_write(&update_dev, NULL, 1);
	device_close("led");
	device_traverse();
	return 0;
}
