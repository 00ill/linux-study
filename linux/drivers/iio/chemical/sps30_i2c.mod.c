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
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0xe71fc14e, "sps30_probe" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x9c5d5b94, "crc8" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "crc8,sps30");

MODULE_ALIAS("of:N*T*Csensirion,sps30");
MODULE_ALIAS("of:N*T*Csensirion,sps30C*");
MODULE_ALIAS("i2c:sps30");

MODULE_INFO(srcversion, "A02C54FFC19647DDA1F7E8C");
