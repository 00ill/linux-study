#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2d2f5cd5, "ms_sensors_reset" },
	{ 0xf5c79725, "ms_sensors_read_serial" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42283161, "ms_sensors_write_resolution" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x60956a50, "ms_sensors_ht_read_humidity" },
	{ 0x6b9a565f, "ms_sensors_ht_read_temperature" },
	{ 0xb13ef02d, "ms_sensors_write_heater" },
	{ 0xcd2aec36, "ms_sensors_show_heater" },
	{ 0xe5add41a, "ms_sensors_show_battery_low" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x37086b9, "iio_read_const_attr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,ms_sensors_i2c");

MODULE_ALIAS("of:N*T*Cmeas,htu21");
MODULE_ALIAS("of:N*T*Cmeas,htu21C*");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidity");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidityC*");
MODULE_ALIAS("i2c:htu21");
MODULE_ALIAS("i2c:ms8607-humidity");

MODULE_INFO(srcversion, "AA97FFCC92B934F4C7E733A");
