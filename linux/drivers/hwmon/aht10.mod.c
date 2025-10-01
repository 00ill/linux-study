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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9c5d5b94, "crc8" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "crc8");

MODULE_ALIAS("of:N*T*Caosong,aht10");
MODULE_ALIAS("of:N*T*Caosong,aht10C*");
MODULE_ALIAS("of:N*T*Caosong,aht20");
MODULE_ALIAS("of:N*T*Caosong,aht20C*");
MODULE_ALIAS("i2c:aht10");
MODULE_ALIAS("i2c:aht20");

MODULE_INFO(srcversion, "358CE35E8B9F705FC3B3F36");
