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
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xdcb764ad, "memset" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x8733236, "intlog10" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tc90522sat");
MODULE_ALIAS("i2c:tc90522ter");

MODULE_INFO(srcversion, "C1E9432BA42DBA5672C1AE0");
