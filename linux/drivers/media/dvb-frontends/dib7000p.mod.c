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

KSYMTAB_FUNC(dib7000p_attach, "_gpl", "");

SYMBOL_CRC(dib7000p_attach, 0x913e6f21, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x57bb9174, "dibx000_get_i2c_adapter" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdd8b5f87, "dibx000_exit_i2c_master" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8733236, "intlog10" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x283f4977, "dibx000_init_i2c_master" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0xcf5e40ce, "dibx000_reset_i2c_master" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dibx000_common");


MODULE_INFO(srcversion, "4E1EB283A3B501A6DBE2DDF");
