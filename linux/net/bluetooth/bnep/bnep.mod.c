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
	{ 0xe914e41e, "strcpy" },
	{ 0xbd041193, "bt_procfs_cleanup" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x5406ab7a, "bt_procfs_init" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xc1ea4986, "set_user_nice" },
	{ 0x52faf957, "sock_no_sendmsg" },
	{ 0x4df02057, "crc32_be" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x15fcbdad, "sock_no_connect" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd8940511, "__module_get" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x26fb156, "proto_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xa8707ce6, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x9d9e8944, "module_put" },
	{ 0xa37ebe21, "bt_sock_link" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0xacceb7d8, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1a6ab775, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x2ac4c7cc, "__module_put_and_kthread_exit" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9252cbd2, "sock_no_bind" },
	{ 0x3a7f8679, "l2cap_is_socket" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xb92cb3bb, "bt_sock_alloc" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x11328e9c, "bt_sock_unlink" },
	{ 0xfbb08405, "sock_no_recvmsg" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x50d00458, "netif_rx" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x75adf774, "bt_sock_register" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x85988b5f, "sock_no_getname" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x33e54082, "sockfd_lookup" },
	{ 0x68a638e7, "kernel_sendmsg" },
	{ 0x53b954a2, "up_read" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "FFEAE97CCF96D10C4EF4196");
