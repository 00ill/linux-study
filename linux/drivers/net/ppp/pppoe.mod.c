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
	{ 0x5b390004, "register_pernet_device" },
	{ 0xa8707ce6, "proto_register" },
	{ 0x6079fe99, "register_pppox_proto" },
	{ 0x1db41cf8, "dev_add_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x26fb156, "proto_unregister" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0xa813464, "sock_init_data" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x8bff47bb, "dev_remove_pack" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xb53675e6, "seq_write" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x7b62de73, "sock_wmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0xd2d80c01, "release_sock" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x9ed72da3, "proc_create_net_data" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x74e822bb, "pppox_unbind_sock" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x594477ee, "skb_pull_rcsum" },
	{ 0x114af337, "__sk_receive_skb" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x4795ed98, "pskb_trim_rcsum_slow" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb4d04431, "dev_get_by_name_rcu" },
	{ 0xf43f04b4, "dev_get_by_name" },
	{ 0x8af44010, "ppp_register_net_channel" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0xeca35a76, "ppp_input" },
	{ 0x9252cbd2, "sock_no_bind" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xe1cd003a, "pppox_ioctl" },
	{ 0xe55761ea, "pppox_compat_ioctl" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "pppox,ppp_generic");


MODULE_INFO(srcversion, "50486769FABF7EB499409FD");
