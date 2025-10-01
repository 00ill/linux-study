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

KSYMTAB_FUNC(dib0070_ctrl_agc_filter, "", "");
KSYMTAB_FUNC(dib0070_get_rf_output, "", "");
KSYMTAB_FUNC(dib0070_set_rf_output, "", "");
KSYMTAB_FUNC(dib0070_wbd_offset, "", "");
KSYMTAB_FUNC(dib0070_attach, "_gpl", "");

SYMBOL_CRC(dib0070_ctrl_agc_filter, 0x277ffc60, "");
SYMBOL_CRC(dib0070_get_rf_output, 0xe7461dff, "");
SYMBOL_CRC(dib0070_set_rf_output, 0xe0e515c5, "");
SYMBOL_CRC(dib0070_wbd_offset, 0x0e2558d9, "");
SYMBOL_CRC(dib0070_attach, 0x24ff5cba, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5EEDD7A1A8B1E42482DEC59");
