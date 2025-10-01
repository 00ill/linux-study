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

KSYMTAB_DATA(nfct_h323_nat_hook, "_gpl", "");
KSYMTAB_FUNC(get_h225_addr, "_gpl", "");

SYMBOL_CRC(nfct_h323_nat_hook, 0x7c440744, "_gpl");
SYMBOL_CRC(get_h225_addr, 0xcbe51bd9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x746ec9f7, "nf_ct_helper_log" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x13fbc60, "nf_ipv6_ops" },
	{ 0x3cac73c0, "__nf_ct_expect_find" },
	{ 0x3ae789da, "nf_conntrack_helpers_unregister" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x76e331cf, "nf_ct_expect_alloc" },
	{ 0x2d10edf5, "nf_ct_expect_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x40705e5c, "nf_conntrack_helpers_register" },
	{ 0x2b8f11e0, "nf_ip_route" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xfeb7f1cc, "nf_ct_expect_init" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x951f365e, "nf_conntrack_helper_unregister" },
	{ 0xcdb362e, "__nf_ct_refresh_acct" },
	{ 0x3d0fe93d, "nf_conntrack_helper_register" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x7212cd50, "nf_ct_unexpect_related" },
	{ 0xf2636df, "nf_ct_remove_expectations" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "F683A53D2FFDE627A745B86");
