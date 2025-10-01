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
	{ 0x7c440744, "nfct_h323_nat_hook" },
	{ 0x569cf674, "nf_ct_helper_expectfn_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x6ff996e1, "nf_nat_setup_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc4373c03, "nf_nat_follow_master" },
	{ 0x9e1a227e, "nf_ct_helper_expectfn_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9e71d046, "nf_nat_mangle_udp_packet" },
	{ 0xdf2b2b87, "__nf_nat_mangle_tcp_packet" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9a13babd, "nf_nat_exp_find_port" },
	{ 0x7212cd50, "nf_ct_unexpect_related" },
	{ 0xcbe51bd9, "get_h225_addr" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack_h323,nf_conntrack,nf_nat");


MODULE_INFO(srcversion, "2C80BC4FE86CACD13998963");
