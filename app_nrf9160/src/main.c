#include <stdio.h>
#include <stdlib.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/spi.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/device.h>
#include <ei_wrapper.h>


#include "accelerometer_low.h"

int main(void)
{
	static const struct spi_dt_spec spi_dev = SPI_DT_SPEC_GET(SPI3_NODE, SPI_OP_MODE_MASTER, 0);








	// int ret;
	// ret = Initialize_machine_learning();

	// ret =  Initialize_accelerometers();
	// if(ret == 0){
	// 	printk("Accelerometers not initialized\n");
	// }
	// else{
	// 	printk("Accelerometers initialized sucesfully\n");
	// }

	// ret = print_adxl362_data();
	// size_t cnt = 0;
	// return 0;






	return 0;
}


