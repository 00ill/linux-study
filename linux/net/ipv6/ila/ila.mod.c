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
	{ 0x3e6760b4, "__do_once_done" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xa459061b, "xfrm_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0xc5e84112, "inet_proto_csum_replace_by_diff" },
	{ 0xfbcd121e, "genlmsg_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe8fbf4fa, "__alloc_bucket_spinlocks" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6fb0cf6f, "nf_register_net_hooks" },
	{ 0x3517a6a6, "ip6_route_output_flags" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf4889f04, "netlink_unicast" },
	{ 0x8162c74, "free_bucket_spinlocks" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6225e493, "dst_cache_get" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0xa243d05d, "nf_unregister_net_hooks" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x5d2aa5fb, "rhashtable_walk_peek" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf0cb9894, "lwtunnel_state_alloc" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2ab8b837, "dst_cache_set_ip6" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x41e4f2cd, "genl_unregister_family" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf8be5aef, "lwtunnel_encap_add_ops" },
	{ 0xce91aba6, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0xbe80f1d6, "lwtunnel_encap_del_ops" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "0FD66A96A35306A6D9E7590");
