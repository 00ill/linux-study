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

KSYMTAB_FUNC(r820t_attach, "_gpl", "");

SYMBOL_CRC(r820t_attach, 0x11caef13, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7ED1FD352050CA90FC29041");
