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
	{ 0xf4a0aaa, "xt_register_targets" },
	{ 0x6f25365e, "nf_defrag_ipv6_disable" },
	{ 0xe4a7b2ec, "nf_defrag_ipv4_disable" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x29df7741, "nf_defrag_ipv6_enable" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x97d992e8, "nf_defrag_ipv4_enable" },
	{ 0xe2ece698, "ipv6_find_hdr" },
	{ 0x41393d59, "nf_tproxy_get_sock_v6" },
	{ 0x97fcb9d2, "nf_tproxy_laddr6" },
	{ 0x525928de, "sock_gen_put" },
	{ 0xc0776766, "sock_edemux" },
	{ 0xebe57130, "nf_tproxy_handle_time_wait6" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x19a193c1, "nf_tproxy_get_sock_v4" },
	{ 0x353a29fd, "nf_tproxy_laddr4" },
	{ 0xd6342173, "nf_tproxy_handle_time_wait4" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_defrag_ipv6,nf_defrag_ipv4,nf_tproxy_ipv6,nf_tproxy_ipv4");


MODULE_INFO(srcversion, "FD5D485DD82D12D0953AF2F");
