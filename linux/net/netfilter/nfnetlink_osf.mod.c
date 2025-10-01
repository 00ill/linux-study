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

KSYMTAB_DATA(nf_osf_fingers, "_gpl", "");
KSYMTAB_FUNC(nf_osf_match, "_gpl", "");
KSYMTAB_FUNC(nf_osf_find, "_gpl", "");

SYMBOL_CRC(nf_osf_fingers, 0x35eff5e0, "_gpl");
SYMBOL_CRC(nf_osf_match, 0x012201dd, "_gpl");
SYMBOL_CRC(nf_osf_find, 0xeff29c21, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5578a646, "nfnetlink_subsys_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc6cbbc89, "capable" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xa07a37f0, "memchr" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4217810, "nfnetlink_subsys_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc53d42bd, "nf_log_packet" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "0C70BD0D433B2F885080176");
