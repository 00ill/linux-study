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
	{ 0x79a1f63a, "vhost_add_used" },
	{ 0x586e9f0f, "virtio_transport_purge_skbs" },
	{ 0x4c736f29, "virtio_transport_notify_recv_init" },
	{ 0xdd14daed, "vhost_init_device_iotlb" },
	{ 0x7c99e197, "virtio_transport_release" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0x94090688, "misc_deregister" },
	{ 0x90aa8549, "vsock_find_cid" },
	{ 0x91adacec, "virtio_transport_consume_skb_sent" },
	{ 0x87d1a985, "vhost_vring_ioctl" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x60497cf8, "vsock_for_each_connected_socket" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x22408967, "vhost_dev_flush" },
	{ 0x7341b79b, "virtio_transport_connect" },
	{ 0xce8f179c, "virtio_transport_notify_set_rcvlowat" },
	{ 0x85740d3b, "virtio_transport_stream_has_data" },
	{ 0x65035566, "vhost_vq_access_ok" },
	{ 0xd584f2da, "vhost_dev_stop" },
	{ 0xeb04ba4c, "vhost_dev_init" },
	{ 0xe8c96296, "virtio_transport_stream_rcvhiwat" },
	{ 0x37a0cba, "kfree" },
	{ 0xc26cc301, "iov_iter_init" },
	{ 0x65fe0146, "virtio_transport_dgram_bind" },
	{ 0xc1b89cb8, "sk_error_report" },
	{ 0xf276f758, "virtio_transport_notify_recv_pre_block" },
	{ 0x5b8fadd, "vhost_vq_init_access" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x8868a47f, "virtio_transport_dgram_enqueue" },
	{ 0xcbf9d9c8, "vhost_vq_work_queue" },
	{ 0x3479e651, "virtio_transport_shutdown" },
	{ 0x745b58f, "vhost_exceeds_weight" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf14b8abf, "virtio_transport_notify_send_post_enqueue" },
	{ 0xe1b1431a, "virtio_transport_dgram_dequeue" },
	{ 0x9c94d738, "vhost_poll_queue" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0xf8ce1c00, "compat_ptr_ioctl" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x69a99213, "virtio_transport_notify_send_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xe3add77d, "vhost_chr_write_iter" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x821c80be, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x47e01b33, "virtio_transport_seqpacket_dequeue" },
	{ 0xb0748d09, "vhost_get_vq_desc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xec509257, "virtio_transport_seqpacket_enqueue" },
	{ 0x1ccd8a0b, "virtio_transport_seqpacket_has_data" },
	{ 0x4292519c, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x36593882, "virtio_transport_stream_enqueue" },
	{ 0x214d1149, "vhost_chr_read_iter" },
	{ 0xacc24b3e, "virtio_transport_stream_dequeue" },
	{ 0x25da9dc3, "vsock_core_unregister" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0xbfebc9aa, "vsock_core_register" },
	{ 0x6f0d053d, "vhost_dev_ioctl" },
	{ 0xd16b032f, "vhost_signal" },
	{ 0x2002cbd1, "misc_register" },
	{ 0xb6450e05, "vhost_disable_notify" },
	{ 0x4ba0b002, "virtio_transport_notify_poll_out" },
	{ 0x651f7d06, "virtio_transport_notify_recv_post_dequeue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0xad951f01, "vhost_set_backend_features" },
	{ 0x3e424873, "vhost_enable_notify" },
	{ 0xa53aada5, "virtio_transport_deliver_tap_pkt" },
	{ 0x63f5bde9, "vhost_log_access_ok" },
	{ 0x25c3dbdd, "virtio_transport_read_skb" },
	{ 0xd78cc871, "vhost_dev_cleanup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9a513484, "virtio_transport_stream_is_active" },
	{ 0x61b82a42, "virtio_transport_do_socket_init" },
	{ 0x1039b316, "vhost_chr_poll" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa2bf4031, "virtio_transport_notify_poll_in" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0x92672925, "virtio_transport_unsent_bytes" },
	{ 0xa14674ed, "virtio_transport_stream_has_space" },
	{ 0xd9dfd602, "virtio_transport_notify_send_pre_block" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd55a71f6, "vq_meta_prefetch" },
	{ 0x4b4edc1a, "vhost_dev_check_owner" },
	{ 0x8da45c85, "virtio_transport_notify_buffer_size" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc10e997, "eventfd_signal_mask" },
	{ 0x738a6500, "virtio_transport_destruct" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0xa536d8b6, "virtio_transport_recv_pkt" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "vhost,vmw_vsock_virtio_transport_common,vsock");


MODULE_INFO(srcversion, "A1203CEA59A2A85BB10C56A");
