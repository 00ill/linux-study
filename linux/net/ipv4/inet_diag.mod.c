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

KSYMTAB_FUNC(inet_diag_msg_common_fill, "_gpl", "");
KSYMTAB_FUNC(inet_diag_msg_attrs_fill, "_gpl", "");
KSYMTAB_FUNC(inet_sk_diag_fill, "_gpl", "");
KSYMTAB_FUNC(inet_diag_find_one_icsk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_dump_one_icsk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_bc_sk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_dump_icsk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_register, "_gpl", "");
KSYMTAB_FUNC(inet_diag_unregister, "_gpl", "");

SYMBOL_CRC(inet_diag_msg_common_fill, 0x50d3a31a, "_gpl");
SYMBOL_CRC(inet_diag_msg_attrs_fill, 0x989daf86, "_gpl");
SYMBOL_CRC(inet_sk_diag_fill, 0xc4a4fdc3, "_gpl");
SYMBOL_CRC(inet_diag_find_one_icsk, 0xed71171a, "_gpl");
SYMBOL_CRC(inet_diag_dump_one_icsk, 0xa725b5cf, "_gpl");
SYMBOL_CRC(inet_diag_bc_sk, 0xdf339fe3, "_gpl");
SYMBOL_CRC(inet_diag_dump_icsk, 0x3636b190, "_gpl");
SYMBOL_CRC(inet_diag_register, 0x44d32385, "_gpl");
SYMBOL_CRC(inet_diag_unregister, 0xcf000982, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb4d257d8, "sock_diag_save_cookie" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x37548669, "sock_i_uid" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0x9846b85d, "sock_i_ino" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8e4eb451, "bpf_sk_storage_diag_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x9d9e8944, "module_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x7ac71ae4, "__netlink_dump_start" },
	{ 0x306c4dca, "sock_diag_unregister" },
	{ 0x494ce228, "sock_diag_unregister_inet_compat" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x5c04bd1f, "sock_diag_register" },
	{ 0x7dac9ea6, "sock_diag_register_inet_compat" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xb0499174, "netlink_net_capable" },
	{ 0x5d8476d3, "bpf_sk_storage_diag_alloc" },
	{ 0xb4124809, "inet6_lookup" },
	{ 0x48022cc9, "sock_diag_check_cookie" },
	{ 0x12bb5ee1, "__inet_lookup_established" },
	{ 0x525928de, "sock_gen_put" },
	{ 0xc55b8e04, "__inet_lookup_listener" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xfe58e02a, "bpf_sk_storage_diag_put" },
	{ 0xb33c64c5, "sock_diag_put_meminfo" },
	{ 0x98cf60b3, "strlen" },
	{ 0x616ad95a, "nla_reserve_64bit" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "90F85384506243E4694C237");
