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
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2d2f5cd5, "ms_sensors_reset" },
	{ 0xcf25153f, "ms_sensors_tp_read_prom" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe3e77cef, "ms_sensors_read_temp_and_pressure" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio,ms_sensors_i2c");

MODULE_ALIAS("of:N*T*Cmeas,ms5637");
MODULE_ALIAS("of:N*T*Cmeas,ms5637C*");
MODULE_ALIAS("of:N*T*Cmeas,ms5803");
MODULE_ALIAS("of:N*T*Cmeas,ms5803C*");
MODULE_ALIAS("of:N*T*Cmeas,ms5805");
MODULE_ALIAS("of:N*T*Cmeas,ms5805C*");
MODULE_ALIAS("of:N*T*Cmeas,ms5837");
MODULE_ALIAS("of:N*T*Cmeas,ms5837C*");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-temppressure");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-temppressureC*");
MODULE_ALIAS("i2c:ms5637");
MODULE_ALIAS("i2c:ms5805");
MODULE_ALIAS("i2c:ms5837");
MODULE_ALIAS("i2c:ms8607-temppressure");

MODULE_INFO(srcversion, "F88B9156B3E4E615F43D282");
