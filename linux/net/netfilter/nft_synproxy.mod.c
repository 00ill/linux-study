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
	{ 0xcbfd1d19, "nft_register_obj" },
	{ 0x5b221cd, "nft_register_expr" },
	{ 0x90fe0bd5, "nft_unregister_obj" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x23defc63, "nf_ct_netns_get" },
	{ 0x6f2a64f9, "nf_synproxy_ipv4_init" },
	{ 0x3dc8dd8b, "nf_synproxy_ipv6_init" },
	{ 0xf24afe72, "nf_synproxy_ipv4_fini" },
	{ 0x5eab8ad3, "nf_ct_netns_put" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xa0a84700, "nf_synproxy_ipv6_fini" },
	{ 0x2949864c, "nf_ip_checksum" },
	{ 0xb00a4e27, "synproxy_parse_options" },
	{ 0x7ded7ff9, "synproxy_recv_client_ack_ipv6" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xd4349ffb, "synproxy_recv_client_ack" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xe02c8545, "synproxy_send_client_synack_ipv6" },
	{ 0xb07919a1, "synproxy_send_client_synack" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "A8D76CFBE347378C25DF0E4");
