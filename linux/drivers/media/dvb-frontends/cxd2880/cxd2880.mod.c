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

KSYMTAB_FUNC(cxd2880_attach, "_gpl", "");

SYMBOL_CRC(cxd2880_attach, 0x886b0b85, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8733236, "intlog10" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "12BA76FE70B2192E61AE9AC");
