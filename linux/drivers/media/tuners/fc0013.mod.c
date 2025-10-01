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

KSYMTAB_FUNC(fc0013_rc_cal_add, "", "");
KSYMTAB_FUNC(fc0013_rc_cal_reset, "", "");
KSYMTAB_FUNC(fc0013_attach, "_gpl", "");

SYMBOL_CRC(fc0013_rc_cal_add, 0x74f34df3, "");
SYMBOL_CRC(fc0013_rc_cal_reset, 0x8f5584b0, "");
SYMBOL_CRC(fc0013_attach, 0x3ef9d83a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A04A6EDE54D6AD432AAEEB");
