/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <zephyr.h>
#include <device.h>
#include <devicetree.h>
#include <drivers/gpio.h>
#include <drivers/spi.h>
#include <usb/usb_device.h>

#include <logging/log.h>
LOG_MODULE_REGISTER(app, LOG_LEVEL_DBG);

#define CIRQUE_NODE DT_NODELABEL(cirque)
#define FOO DT_PROP(CIRQUE_NODE, label)

void main(void)
{
	int ret = usb_enable(NULL);
	if (ret != 0) {
		LOG_ERR("Failed to enable USB");
		return;
	}

	LOG_INF("node label: %s", FOO);
	
	const struct device *cirque;
	cirque = device_get_binding(DT_LABEL(CIRQUE_NODE));
	if (cirque == NULL) {
		LOG_ERR("couldn't get device binding for cirque device");
		return;
	}



	/* static struct spi_dt_spec *spec = SPI_DT_SPEC_GET(CIRQUE_NODE, 0, 0) */
	/* const struct spi_dt_spec config = SPI_DT_SPEC_GET(CIRQUE_NODE, 0, 0); */
	/* uint8_t buf[1]; */
	/* const struct spi_buf rx_buf = { */
	/* 	.buf = buf, */
	/* 	.len = 1 */
	/* }; */

	/* const struct spi_buf_set rx = { */
	/* 	.buffers = &rx_buf, */
	/* 	.count = 1 */
	/* }; */
	

	/* printk("about to read from the spi bus maybe!!!\n"); */
	/* if (spi_read(cirque, config, rx) != 0) { */
	/* 	printk("spi_read returned non-zero\n"); */
	/* } else { */
	/* 	printk("spi_read returned zero, yay, value read: %x\n", buf[0]); */
	/* } */





	


	
	/* const struct device *hw_dr; */
	/* hw_dr = device_get_binding(CIRQUE_IRQ); */
	/* if (hw_dr == NULL) { */
	/* 	return; */
	/* } */

	/* ret = gpio_pin_configure(dev, PIN, GPIO_OUTPUT_ACTIVE | FLAGS); */
	/* if (ret < 0) { */
	/* 	return; */
	/* } */

	/* while (1) { */
	/* 	gpio_pin_set(dev, PIN, (int)led_is_on); */
	/* 	led_is_on = !led_is_on; */
	/* 	k_msleep(SLEEP_TIME_MS); */
	/* } */
}
