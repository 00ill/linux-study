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
	{ 0x80869f39, "xt_register_target" },
	{ 0x4fce08d7, "xt_unregister_target" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2949864c, "nf_ip_checksum" },
	{ 0xb00a4e27, "synproxy_parse_options" },
	{ 0xd4349ffb, "synproxy_recv_client_ack" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xb07919a1, "synproxy_send_client_synack" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf24afe72, "nf_synproxy_ipv4_fini" },
	{ 0x5eab8ad3, "nf_ct_netns_put" },
	{ 0x23defc63, "nf_ct_netns_get" },
	{ 0x6f2a64f9, "nf_synproxy_ipv4_init" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "DFB790625F0CB2EAE0035B0");
