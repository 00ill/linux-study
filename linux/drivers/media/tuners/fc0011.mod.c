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

KSYMTAB_FUNC(fc0011_attach, "_gpl", "");

SYMBOL_CRC(fc0011_attach, 0x3af1e171, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x669c413b, "_dev_err" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B3955D2C6ECF8A4863AC4D0");
