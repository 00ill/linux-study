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

KSYMTAB_DATA(nf_nat_irc_hook, "_gpl", "");

SYMBOL_CRC(nf_nat_irc_hook, 0xb8f1ac52, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xeb1edfd1, "nf_ct_helper_init" },
	{ 0x40705e5c, "nf_conntrack_helpers_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ae789da, "nf_conntrack_helpers_unregister" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x98cf60b3, "strlen" },
	{ 0x76e331cf, "nf_ct_expect_alloc" },
	{ 0xfeb7f1cc, "nf_ct_expect_init" },
	{ 0x2d10edf5, "nf_ct_expect_put" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x746ec9f7, "nf_ct_helper_log" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "E34A7EE1B8C1E8908777E4E");
