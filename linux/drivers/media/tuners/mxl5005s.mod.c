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

KSYMTAB_FUNC(mxl5005s_attach, "_gpl", "");

SYMBOL_CRC(mxl5005s_attach, 0xb0176303, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A0727137842A7FCE621546E");
