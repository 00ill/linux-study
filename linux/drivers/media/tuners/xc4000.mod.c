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

KSYMTAB_FUNC(xc4000_attach, "_gpl", "");

SYMBOL_CRC(xc4000_attach, 0x58923aac, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x10843d0a, "param_ops_string" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C01805C462F034A2AEAB49C");
