#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(dibx000_i2c_set_speed, "", "");
KSYMTAB_FUNC(dibx000_get_i2c_adapter, "", "");
KSYMTAB_FUNC(dibx000_reset_i2c_master, "", "");
KSYMTAB_FUNC(dibx000_init_i2c_master, "", "");
KSYMTAB_FUNC(dibx000_exit_i2c_master, "", "");

SYMBOL_CRC(dibx000_i2c_set_speed, 0x0e294dd0, "");
SYMBOL_CRC(dibx000_get_i2c_adapter, 0x57bb9174, "");
SYMBOL_CRC(dibx000_reset_i2c_master, 0xcf5e40ce, "");
SYMBOL_CRC(dibx000_init_i2c_master, 0x283f4977, "");
SYMBOL_CRC(dibx000_exit_i2c_master, 0xdd8b5f87, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5EE64CEA35245406CCE0620");
