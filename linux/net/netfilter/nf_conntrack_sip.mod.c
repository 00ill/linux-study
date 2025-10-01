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

KSYMTAB_DATA(nf_nat_sip_hooks, "_gpl", "");
KSYMTAB_FUNC(ct_sip_parse_request, "_gpl", "");
KSYMTAB_FUNC(ct_sip_get_header, "_gpl", "");
KSYMTAB_FUNC(ct_sip_parse_header_uri, "_gpl", "");
KSYMTAB_FUNC(ct_sip_parse_address_param, "_gpl", "");
KSYMTAB_FUNC(ct_sip_parse_numerical_param, "_gpl", "");
KSYMTAB_FUNC(ct_sip_get_sdp_header, "_gpl", "");

SYMBOL_CRC(nf_nat_sip_hooks, 0xb8f23d55, "_gpl");
SYMBOL_CRC(ct_sip_parse_request, 0x58b30576, "_gpl");
SYMBOL_CRC(ct_sip_get_header, 0x8aa3babe, "_gpl");
SYMBOL_CRC(ct_sip_parse_header_uri, 0x2437b06c, "_gpl");
SYMBOL_CRC(ct_sip_parse_address_param, 0xabd9464c, "_gpl");
SYMBOL_CRC(ct_sip_parse_numerical_param, 0x450c0eaa, "_gpl");
SYMBOL_CRC(ct_sip_get_sdp_header, 0x50deac6f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x11089ac7, "_ctype" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0xeb1edfd1, "nf_ct_helper_init" },
	{ 0x40705e5c, "nf_conntrack_helpers_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3ae789da, "nf_conntrack_helpers_unregister" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x70382b1, "nf_ct_remove_expect" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x3cac73c0, "__nf_ct_expect_find" },
	{ 0x76e331cf, "nf_ct_expect_alloc" },
	{ 0xfeb7f1cc, "nf_ct_expect_init" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x2d10edf5, "nf_ct_expect_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x13fbc60, "nf_ipv6_ops" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x2b8f11e0, "nf_ip_route" },
	{ 0x7212cd50, "nf_ct_unexpect_related" },
	{ 0x746ec9f7, "nf_ct_helper_log" },
	{ 0xcdb362e, "__nf_ct_refresh_acct" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "373CE1022C5F39CFF4433A6");
