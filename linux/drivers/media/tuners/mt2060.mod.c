#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(mt2060_attach, "_gpl", "");

SYMBOL_CRC(mt2060_attach, 0x5f78bf22, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:mt2060");

MODULE_INFO(srcversion, "AA9A77CC37780CFA9901F88");
