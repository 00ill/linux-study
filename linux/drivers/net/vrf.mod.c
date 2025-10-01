#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x164ae089, "l3mdev_table_lookup_register" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0xa422dc86, "l3mdev_table_lookup_unregister" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x86c98d4d, "dev_change_flags" },
	{ 0x8502868b, "netdev_err" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x913b61a8, "ip6_pol_route" },
	{ 0x189e289a, "netdev_master_upper_dev_link" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x7861b279, "register_net_sysctl_sz" },
	{ 0x5d9d076f, "netdev_master_upper_dev_get" },
	{ 0x9449e14c, "netdev_upper_dev_unlink" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x7a71a0be, "__nlmsg_put" },
	{ 0xcd66b6e, "fib_nl_newrule" },
	{ 0x21cc2789, "fib_nl_delrule" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x33b58322, "skb_push" },
	{ 0xfbc68554, "dev_queue_xmit_nit" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x89cb18c5, "netdev_lower_get_next" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0x4ecd0187, "nf_hook_slow" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x17b32e54, "arp_tbl" },
	{ 0xc55ae4cd, "__neigh_create" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xebca6d16, "skb_expand_head" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x2ce72391, "ipv6_stub" },
	{ 0x4829a47e, "memcpy" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1a4b0f7f, "fib_new_table" },
	{ 0x4ef51d5e, "rt_dst_alloc" },
	{ 0x505086ca, "fib6_new_table" },
	{ 0x32a3b83a, "ip6_dst_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xd04c1027, "__netif_rx" },
	{ 0xb221c24e, "ip6_dst_lookup_flow" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0xaa4a1b23, "inet_select_addr" },
	{ 0xcd029195, "nd_tbl" },
	{ 0xd4f784c4, "eth_mac_addr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "0FB713EC6B253C1280FB164");
