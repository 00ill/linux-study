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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x893a5557, "regmap_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x8733236, "intlog10" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdcb764ad, "memset" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7af7db8b, "__regmap_init_i2c" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:af9033");

MODULE_INFO(srcversion, "BC275F88B6265E33F662CBC");
