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

KSYMTAB_FUNC(stv0367ter_attach, "_gpl", "");
KSYMTAB_FUNC(stv0367cab_attach, "_gpl", "");
KSYMTAB_FUNC(stv0367ddb_attach, "_gpl", "");

SYMBOL_CRC(stv0367ter_attach, 0x314eb3e0, "_gpl");
SYMBOL_CRC(stv0367cab_attach, 0x936ae701, "_gpl");
SYMBOL_CRC(stv0367ddb_attach, 0x57571ccb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A7EBF4A8159FC1407D29F32");
