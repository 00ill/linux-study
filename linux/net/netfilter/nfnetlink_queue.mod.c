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
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x5578a646, "nfnetlink_subsys_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x6cceaac7, "nf_register_queue_handler" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa4217810, "nfnetlink_subsys_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x8ad4e35d, "nf_queue_entry_free" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5cad6c33, "nf_ct_hook" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x13fbc60, "nf_ipv6_ops" },
	{ 0xa95ab702, "nf_queue" },
	{ 0x51a647d4, "ip_route_me_harder" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xd7ea7094, "nf_unregister_queue_handler" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xdcb764ad, "memset" },
	{ 0x9ed72da3, "proc_create_net_data" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x73c78fd1, "nfnl_ct_hook" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0x4829a47e, "memcpy" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0xe19fdf44, "___pskb_trim" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x391df80a, "netstamp_needed_key" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x2b282359, "skb_tx_error" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0x6084b7a4, "__nla_reserve" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x771f0565, "init_user_ns" },
	{ 0x10d63cce, "from_kuid_munged" },
	{ 0xe4151e2c, "from_kgid_munged" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x11811771, "skb_zerocopy" },
	{ 0x129e5945, "nfnetlink_unicast" },
	{ 0xf09e6950, "skb_zerocopy_headlen" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x1301cc57, "skb_checksum_help" },
	{ 0x47c20f8a, "refcount_dec_not_one" },
	{ 0x21e649b9, "skb_crc32c_csum_help" },
	{ 0x46589386, "__skb_gso_segment" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x505fef4e, "nf_queue_entry_get_refs" },
	{ 0x9d9e8944, "module_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "6B370A2E61D9A2400C74DCB");
