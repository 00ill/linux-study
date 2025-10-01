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
	{ 0xb8f23d55, "nf_nat_sip_hooks" },
	{ 0xc29ef887, "nf_nat_helper_register" },
	{ 0x569cf674, "nf_ct_helper_expectfn_register" },
	{ 0x9e71d046, "nf_nat_mangle_udp_packet" },
	{ 0xdf2b2b87, "__nf_nat_mangle_tcp_packet" },
	{ 0x50deac6f, "ct_sip_get_sdp_header" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8aa3babe, "ct_sip_get_header" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x7212cd50, "nf_ct_unexpect_related" },
	{ 0x746ec9f7, "nf_ct_helper_log" },
	{ 0x17a8b535, "nf_ct_seqadj_set" },
	{ 0x224faff1, "nf_nat_helper_unregister" },
	{ 0x9e1a227e, "nf_ct_helper_expectfn_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdcb764ad, "memset" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x2437b06c, "ct_sip_parse_header_uri" },
	{ 0x6ff996e1, "nf_nat_setup_info" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9a13babd, "nf_nat_exp_find_port" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xabd9464c, "ct_sip_parse_address_param" },
	{ 0x58b30576, "ct_sip_parse_request" },
	{ 0x450c0eaa, "ct_sip_parse_numerical_param" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack_sip,nf_conntrack,nf_nat");


MODULE_INFO(srcversion, "E64B433109F4B307961908F");
