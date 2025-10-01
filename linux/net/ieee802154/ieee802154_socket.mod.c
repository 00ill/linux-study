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
	{ 0x8fa1a568, "skb_free_datagram" },
	{ 0xe3d997df, "sock_queue_rcv_skb_reason" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x1db41cf8, "dev_add_pack" },
	{ 0x80816f26, "get_user_ifreq" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x1f1beab6, "sock_common_getsockopt" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x5c2fb513, "sock_common_setsockopt" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4ce6a914, "put_cmsg" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x122c3a7e, "_printk" },
	{ 0x26fb156, "proto_unregister" },
	{ 0xc1802efc, "dev_getfirstbyhwtype" },
	{ 0xb706a33f, "sock_register" },
	{ 0x7b8c6989, "datagram_poll" },
	{ 0xc5300d6f, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa8707ce6, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0x1a6ab775, "init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x8bff47bb, "dev_remove_pack" },
	{ 0x4192b128, "dev_get_by_index" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x33b58322, "skb_push" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xac27974a, "ns_capable" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x9252cbd2, "sock_no_bind" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x4e5cd016, "ieee802154_hdr_pull" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x3ee14d42, "sock_common_recvmsg" },
	{ 0x560c3ffb, "sk_common_release" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0x96b1293c, "sock_alloc_send_pskb" },
	{ 0x85988b5f, "sock_no_getname" },
	{ 0xf43f04b4, "dev_get_by_name" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x83227012, "sock_gettstamp" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7bc75023, "dev_getbyhwaddr_rcu" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa813464, "sock_init_data" },
	{ 0xc1044e05, "dev_load" },
	{ 0x8f76a0d4, "sk_ioctl" },
	{ 0x87809aeb, "put_user_ifreq" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "DD82299E1593FF05217A5A6");
