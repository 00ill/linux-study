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
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xbfebc9aa, "vsock_core_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x586e9f0f, "virtio_transport_purge_skbs" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x91adacec, "virtio_transport_consume_skb_sent" },
	{ 0xa53aada5, "virtio_transport_deliver_tap_pkt" },
	{ 0xa536d8b6, "virtio_transport_recv_pkt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x25da9dc3, "vsock_core_unregister" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x61b82a42, "virtio_transport_do_socket_init" },
	{ 0x738a6500, "virtio_transport_destruct" },
	{ 0x7c99e197, "virtio_transport_release" },
	{ 0x7341b79b, "virtio_transport_connect" },
	{ 0x65fe0146, "virtio_transport_dgram_bind" },
	{ 0xe1b1431a, "virtio_transport_dgram_dequeue" },
	{ 0x8868a47f, "virtio_transport_dgram_enqueue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0xacc24b3e, "virtio_transport_stream_dequeue" },
	{ 0x36593882, "virtio_transport_stream_enqueue" },
	{ 0x85740d3b, "virtio_transport_stream_has_data" },
	{ 0xa14674ed, "virtio_transport_stream_has_space" },
	{ 0xe8c96296, "virtio_transport_stream_rcvhiwat" },
	{ 0x9a513484, "virtio_transport_stream_is_active" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x47e01b33, "virtio_transport_seqpacket_dequeue" },
	{ 0xec509257, "virtio_transport_seqpacket_enqueue" },
	{ 0x1ccd8a0b, "virtio_transport_seqpacket_has_data" },
	{ 0xa2bf4031, "virtio_transport_notify_poll_in" },
	{ 0x4ba0b002, "virtio_transport_notify_poll_out" },
	{ 0x4c736f29, "virtio_transport_notify_recv_init" },
	{ 0xf276f758, "virtio_transport_notify_recv_pre_block" },
	{ 0x4292519c, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x651f7d06, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x69a99213, "virtio_transport_notify_send_init" },
	{ 0xd9dfd602, "virtio_transport_notify_send_pre_block" },
	{ 0x821c80be, "virtio_transport_notify_send_pre_enqueue" },
	{ 0xf14b8abf, "virtio_transport_notify_send_post_enqueue" },
	{ 0x8da45c85, "virtio_transport_notify_buffer_size" },
	{ 0xce8f179c, "virtio_transport_notify_set_rcvlowat" },
	{ 0x92672925, "virtio_transport_unsent_bytes" },
	{ 0x3479e651, "virtio_transport_shutdown" },
	{ 0x25c3dbdd, "virtio_transport_read_skb" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "vsock,vmw_vsock_virtio_transport_common");


MODULE_INFO(srcversion, "7FB5D282D94D24FB0DE0981");
