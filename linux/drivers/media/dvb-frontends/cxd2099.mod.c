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
	{ 0xcc0983c6, "regmap_write" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xee1be65c, "regmap_raw_write" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7af7db8b, "__regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x6cfb64fe, "regmap_raw_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:cxd2099");

MODULE_INFO(srcversion, "1D69D49D3E2E55A33CF90A3");
