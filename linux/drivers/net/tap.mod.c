#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(tap_del_queues, "_gpl", "");
KSYMTAB_FUNC(tap_handle_frame, "_gpl", "");
KSYMTAB_FUNC(tap_get_minor, "_gpl", "");
KSYMTAB_FUNC(tap_free_minor, "_gpl", "");
KSYMTAB_FUNC(tap_get_socket, "_gpl", "");
KSYMTAB_FUNC(tap_get_ptr_ring, "_gpl", "");
KSYMTAB_FUNC(tap_queue_resize, "_gpl", "");
KSYMTAB_FUNC(tap_create_cdev, "_gpl", "");
KSYMTAB_FUNC(tap_destroy_cdev, "_gpl", "");

SYMBOL_CRC(tap_del_queues, 0x4002b708, "_gpl");
SYMBOL_CRC(tap_handle_frame, 0xa4d22035, "_gpl");
SYMBOL_CRC(tap_get_minor, 0x512bb636, "_gpl");
SYMBOL_CRC(tap_free_minor, 0x3d4c14da, "_gpl");
SYMBOL_CRC(tap_get_socket, 0xe6d6e466, "_gpl");
SYMBOL_CRC(tap_get_ptr_ring, 0x0585c838, "_gpl");
SYMBOL_CRC(tap_queue_resize, 0xc80788af, "_gpl");
SYMBOL_CRC(tap_create_cdev, 0xbdbcf7e8, "_gpl");
SYMBOL_CRC(tap_destroy_cdev, 0x066c13dc, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8502868b, "netdev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5b3a7c03, "iov_iter_advance" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x33b58322, "skb_push" },
	{ 0x46589386, "__skb_gso_segment" },
	{ 0x8f990f65, "kfree_skb_list_reason" },
	{ 0x1301cc57, "skb_checksum_help" },
	{ 0x2e536d3e, "__skb_get_hash_net" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x20978fb9, "idr_find" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9d4f95a6, "sock_init_data_uid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xebafb39a, "flow_keys_basic_dissector" },
	{ 0x6ccc56b7, "__skb_flow_dissect" },
	{ 0xf837cdf0, "skb_partial_csum_set" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xaf1d87f3, "iov_iter_npages" },
	{ 0x96b1293c, "sock_alloc_send_pskb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x31d35e43, "zerocopy_sg_from_iter" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xaf8b671, "skb_copy_datagram_from_iter" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x242d8f51, "build_skb" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x5fc3091b, "dev_set_mac_address_user" },
	{ 0xc2c89c60, "dev_get_mac_address" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf8ce1c00, "compat_ptr_ioctl" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "93134EA5D8F9469F2B75E51");
