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
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6cf1de35, "br_handle_frame_finish" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa9c68bf9, "__skb_ext_del" },
	{ 0x29628e4e, "nf_br_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e4fc92c, "ip_route_output_flow" },
	{ 0x5cad6c33, "nf_ct_hook" },
	{ 0x594477ee, "skb_pull_rcsum" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x7861b279, "register_net_sysctl_sz" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6fb0cf6f, "nf_register_net_hooks" },
	{ 0x13fbc60, "nf_ipv6_ops" },
	{ 0x83dd3a68, "ip_route_input_noref" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x2ccb574b, "br_forward_finish" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x1a6ab775, "init_net" },
	{ 0x87e5a304, "nf_ip6_check_hbh_len" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x33b58322, "skb_push" },
	{ 0xa243d05d, "nf_unregister_net_hooks" },
	{ 0x8a0dc5d, "br_dev_queue_push_xmit" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x4ecd0187, "nf_hook_slow" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0xc9ddfdb8, "neigh_destroy" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa1952ab0, "__vlan_find_dev_deep_rcu" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0xfbdc1512, "ip_do_fragment" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0xe0a1caf7, "skb_ext_add" },
	{ 0x4795ed98, "pskb_trim_rcsum_slow" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bridge,ipv6");


MODULE_INFO(srcversion, "3AA0483264681547B3E1C4D");
