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
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0xac4038d6, "proc_dointvec_jiffies" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x1db41cf8, "dev_add_pack" },
	{ 0xcc32c0b8, "inet_frag_queue_insert" },
	{ 0x667e27ab, "inet_frags_init" },
	{ 0xde75e9bb, "lowpan_register_netdevice" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1e3c0529, "ieee802154_hdr_peek_addrs" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x596e056, "lowpan_unregister_netdevice" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x7861b279, "register_net_sysctl_sz" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd020f7ae, "inet_frag_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc874271f, "inet_frag_reasm_finish" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0x6dc6116f, "fqdir_init" },
	{ 0x4afafda4, "lowpan_header_decompress" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0x1a6ab775, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xcd029195, "nd_tbl" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x8bff47bb, "dev_remove_pack" },
	{ 0x4192b128, "dev_get_by_index" },
	{ 0xd9d852c7, "ieee802154_hdr_peek" },
	{ 0xd90a0a6b, "inet_frags_fini" },
	{ 0x896c49d8, "proc_doulongvec_minmax" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x50d00458, "netif_rx" },
	{ 0xab8fb3f2, "inet_frag_reasm_prepare" },
	{ 0xa6b83a12, "inet_frag_find" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xaf1140ed, "fqdir_exit" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0xc9ddfdb8, "neigh_destroy" },
	{ 0x771f0565, "init_user_ns" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb22d67bc, "lowpan_header_compress" },
	{ 0xac85f68f, "skb_copy" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x35361669, "inet_frag_kill" },
	{ 0x685b0483, "neigh_lookup" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ieee802154,6lowpan,ipv6");


MODULE_INFO(srcversion, "C19FBE70F2C1359AD068751");
