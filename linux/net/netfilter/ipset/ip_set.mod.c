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

KSYMTAB_FUNC(ip_set_type_register, "_gpl", "");
KSYMTAB_FUNC(ip_set_type_unregister, "_gpl", "");
KSYMTAB_FUNC(ip_set_alloc, "_gpl", "");
KSYMTAB_FUNC(ip_set_free, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ipaddr4, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ipaddr6, "_gpl", "");
KSYMTAB_FUNC(ip_set_init_comment, "_gpl", "");
KSYMTAB_DATA(ip_set_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_elem_len, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_put_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_match_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_test, "_gpl", "");
KSYMTAB_FUNC(ip_set_add, "_gpl", "");
KSYMTAB_FUNC(ip_set_del, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_byname, "_gpl", "");
KSYMTAB_FUNC(ip_set_put_byindex, "_gpl", "");
KSYMTAB_FUNC(ip_set_name_byindex, "_gpl", "");
KSYMTAB_FUNC(ip_set_nfnl_get_byindex, "_gpl", "");
KSYMTAB_FUNC(ip_set_nfnl_put, "_gpl", "");
KSYMTAB_FUNC(ip_set_put_flags, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ip4_port, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ip6_port, "_gpl", "");
KSYMTAB_DATA(ip_set_netmask_map, "_gpl", "");
KSYMTAB_DATA(ip_set_hostmask_map, "_gpl", "");
KSYMTAB_FUNC(ip_set_range_to_cidr, "_gpl", "");

SYMBOL_CRC(ip_set_type_register, 0x636dde53, "_gpl");
SYMBOL_CRC(ip_set_type_unregister, 0x1c5e4bad, "_gpl");
SYMBOL_CRC(ip_set_alloc, 0xf3b4d4ae, "_gpl");
SYMBOL_CRC(ip_set_free, 0x397f6231, "_gpl");
SYMBOL_CRC(ip_set_get_ipaddr4, 0xa293f8a6, "_gpl");
SYMBOL_CRC(ip_set_get_ipaddr6, 0x9e98722b, "_gpl");
SYMBOL_CRC(ip_set_init_comment, 0x8cb8ed94, "_gpl");
SYMBOL_CRC(ip_set_extensions, 0x115a0beb, "_gpl");
SYMBOL_CRC(ip_set_elem_len, 0x3d8cfa4e, "_gpl");
SYMBOL_CRC(ip_set_get_extensions, 0x4eb7bf9e, "_gpl");
SYMBOL_CRC(ip_set_put_extensions, 0xc3bc94ff, "_gpl");
SYMBOL_CRC(ip_set_match_extensions, 0x1ea0c3a9, "_gpl");
SYMBOL_CRC(ip_set_test, 0x82f0dea4, "_gpl");
SYMBOL_CRC(ip_set_add, 0xb5faa0a1, "_gpl");
SYMBOL_CRC(ip_set_del, 0xdcb678d6, "_gpl");
SYMBOL_CRC(ip_set_get_byname, 0xc152be70, "_gpl");
SYMBOL_CRC(ip_set_put_byindex, 0x64978aeb, "_gpl");
SYMBOL_CRC(ip_set_name_byindex, 0x556fed33, "_gpl");
SYMBOL_CRC(ip_set_nfnl_get_byindex, 0x77bc3ac4, "_gpl");
SYMBOL_CRC(ip_set_nfnl_put, 0x2301b333, "_gpl");
SYMBOL_CRC(ip_set_put_flags, 0x5b9cb702, "_gpl");
SYMBOL_CRC(ip_set_get_ip4_port, 0x203d7cce, "_gpl");
SYMBOL_CRC(ip_set_get_ip6_port, 0x9dfd6235, "_gpl");
SYMBOL_CRC(ip_set_netmask_map, 0x81fff2d1, "_gpl");
SYMBOL_CRC(ip_set_hostmask_map, 0x7924b6de, "_gpl");
SYMBOL_CRC(ip_set_range_to_cidr, 0x22d966c6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7ac71ae4, "__netlink_dump_start" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4ecddc94, "nf_register_sockopt" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x5578a646, "nfnetlink_subsys_register" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x16576c30, "netlink_ack" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xa7be890d, "nf_unregister_sockopt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x69bb6790, "ipv6_skip_exthdr" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x129e5945, "nfnetlink_unicast" },
	{ 0x5a921311, "strncmp" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xac27974a, "ns_capable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa4217810, "nfnetlink_subsys_unregister" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x98cf60b3, "strlen" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "B06F5D6440B874F2FB7952E");
