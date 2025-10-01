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
	{ 0x3aaa0000, "try_module_get" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x27c66375, "simple_attr_open" },
	{ 0x3c57e074, "debugfs_attr_write" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x1d27ff8f, "l2cap_chan_create" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x80a1fcfa, "lowpan_register_netdev" },
	{ 0x43879a8c, "netdev_notify_peers" },
	{ 0xe4c6c53, "l2cap_chan_connect" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x36dc6ece, "put_device" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xa7bedd2, "bt_debugfs" },
	{ 0x7391c4a5, "lowpan_unregister_netdev" },
	{ 0xbd395e28, "skb_copy_expand" },
	{ 0x9d9e8944, "module_put" },
	{ 0x4afafda4, "lowpan_header_decompress" },
	{ 0x72e7f8aa, "dev_open" },
	{ 0xa861d6a8, "debugfs_attr_read" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x83d92544, "debugfs_create_file_unsafe" },
	{ 0x2ef9e47d, "simple_attr_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xcd029195, "nd_tbl" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x3958a712, "dev_close" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0xff65ed11, "iov_iter_kvec" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0x4835380d, "l2cap_chan_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e2a4d88, "hci_get_route" },
	{ 0x50d00458, "netif_rx" },
	{ 0x718b8b7, "bt_info" },
	{ 0x61447d02, "l2cap_chan_close" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x661256ad, "seq_read" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x8d3173e5, "l2cap_add_psm" },
	{ 0xc9ddfdb8, "neigh_destroy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa35a813f, "l2cap_chan_send" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb22d67bc, "lowpan_header_compress" },
	{ 0xac85f68f, "skb_copy" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6d5004a5, "l2cap_chan_del" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x71c90ddc, "single_open" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x220734ea, "l2cap_chan_set_defaults" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,6lowpan,ipv6");


MODULE_INFO(srcversion, "708127C23C68FD1E5C542EE");
