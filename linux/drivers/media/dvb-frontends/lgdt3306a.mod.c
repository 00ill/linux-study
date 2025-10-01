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

KSYMTAB_FUNC(lgdt3306a_attach, "_gpl", "");

SYMBOL_CRC(lgdt3306a_attach, 0xad761cf0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x649b3692, "i2c_mux_del_adapters" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xdcb764ad, "memset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x760c9fbb, "i2c_mux_alloc" },
	{ 0xde29233a, "i2c_mux_add_adapter" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:lgdt3306a");

MODULE_INFO(srcversion, "E569E4BFB0FBB8C281993AE");
