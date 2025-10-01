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

KSYMTAB_FUNC(simple_tuner_attach, "_gpl", "");

SYMBOL_CRC(simple_tuner_attach, 0x4a5415d7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x122c3a7e, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc2821775, "tuner_count" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4c48939e, "tuners" },
	{ 0x4829a47e, "memcpy" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x343bf64a, "i2c_clients_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "tuner-types");


MODULE_INFO(srcversion, "5686B8F5B42A74458606715");
