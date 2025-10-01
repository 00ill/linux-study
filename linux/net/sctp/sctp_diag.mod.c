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
	{ 0xb0499174, "netlink_net_capable" },
	{ 0xe070523c, "sctp_for_each_endpoint" },
	{ 0x6162e96a, "sctp_get_sctp_info" },
	{ 0x7cc6193a, "sctp_transport_traverse_process" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x44d32385, "inet_diag_register" },
	{ 0x94721dcb, "nla_reserve" },
	{ 0xb4d257d8, "sock_diag_save_cookie" },
	{ 0x48022cc9, "sock_diag_check_cookie" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x50d3a31a, "inet_diag_msg_common_fill" },
	{ 0x616ad95a, "nla_reserve_64bit" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdcb764ad, "memset" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x989daf86, "inet_diag_msg_attrs_fill" },
	{ 0xcf000982, "inet_diag_unregister" },
	{ 0x6682f945, "sctp_transport_lookup_process" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "8CF11F1D6065F43D9170146");
