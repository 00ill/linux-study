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
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9c5d5b94, "crc8" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x705c065b, "devm_iio_device_alloc" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd02eafcc, "__devm_iio_device_register" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "crc8,industrialio");

MODULE_ALIAS("i2c:sgp30");
MODULE_ALIAS("i2c:sgpc3");
MODULE_ALIAS("of:N*T*Csensirion,sgp30");
MODULE_ALIAS("of:N*T*Csensirion,sgp30C*");
MODULE_ALIAS("of:N*T*Csensirion,sgpc3");
MODULE_ALIAS("of:N*T*Csensirion,sgpc3C*");

MODULE_INFO(srcversion, "45CD8C24F120E69FC32155C");
