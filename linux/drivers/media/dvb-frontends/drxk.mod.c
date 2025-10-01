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

KSYMTAB_FUNC(drxk_attach, "_gpl", "");

SYMBOL_CRC(drxk_attach, 0xaf6f0538, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x8733236, "intlog10" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa0f62c1e, "__i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "26F21E9C035555744A94A4B");
