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

KSYMTAB_FUNC(lnbh24_attach, "_gpl", "");
KSYMTAB_FUNC(lnbp21_attach, "_gpl", "");

SYMBOL_CRC(lnbh24_attach, 0x3feae36b, "_gpl");
SYMBOL_CRC(lnbp21_attach, 0xe70970a0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EC910B7EE005F0921FC3903");
