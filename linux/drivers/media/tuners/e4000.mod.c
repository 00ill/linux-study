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
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x960d0a9, "v4l2_ctrl_auto_cluster" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,regmap-i2c");

MODULE_ALIAS("i2c:e4000");

MODULE_INFO(srcversion, "E909EF20CFF31149D2798D1");
