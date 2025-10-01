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
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9c5d5b94, "crc8" },
	{ 0xadd14be9, "iio_get_time_ns" },
	{ 0xebf2304b, "iio_push_event" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "crc8,industrialio");

MODULE_ALIAS("of:N*T*Cti,hdc3020");
MODULE_ALIAS("of:N*T*Cti,hdc3020C*");
MODULE_ALIAS("of:N*T*Cti,hdc3021");
MODULE_ALIAS("of:N*T*Cti,hdc3021C*");
MODULE_ALIAS("of:N*T*Cti,hdc3022");
MODULE_ALIAS("of:N*T*Cti,hdc3022C*");
MODULE_ALIAS("i2c:hdc3020");
MODULE_ALIAS("i2c:hdc3021");
MODULE_ALIAS("i2c:hdc3022");

MODULE_INFO(srcversion, "118C669743D348944CF2F16");
