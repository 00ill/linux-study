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
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xef160adf, "devm_hwmon_device_register_with_groups" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csensirion,shtc1");
MODULE_ALIAS("of:N*T*Csensirion,shtc1C*");
MODULE_ALIAS("of:N*T*Csensirion,shtw1");
MODULE_ALIAS("of:N*T*Csensirion,shtw1C*");
MODULE_ALIAS("of:N*T*Csensirion,shtc3");
MODULE_ALIAS("of:N*T*Csensirion,shtc3C*");
MODULE_ALIAS("i2c:shtc1");
MODULE_ALIAS("i2c:shtw1");
MODULE_ALIAS("i2c:shtc3");

MODULE_INFO(srcversion, "7FDF134E088CA5FF6CAC116");
