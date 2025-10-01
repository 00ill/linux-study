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

KSYMTAB_FUNC(lgdt330x_attach, "_gpl", "");

SYMBOL_CRC(lgdt330x_attach, 0xbed42723, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x5390eff6, "i2c_new_client_device" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x374647f3, "_dev_printk" },
	{ 0x5c362e8, "i2c_unregister_device" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8733236, "intlog10" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lgdt330x");

MODULE_INFO(srcversion, "1F511DBDB00F3B217D85481");
