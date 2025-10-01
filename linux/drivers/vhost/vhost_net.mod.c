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
	{ 0xdd14daed, "vhost_init_device_iotlb" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0x94090688, "misc_deregister" },
	{ 0x87d1a985, "vhost_vring_ioctl" },
	{ 0x585c838, "tap_get_ptr_ring" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x22408967, "vhost_dev_flush" },
	{ 0x4099f919, "tun_ptr_free" },
	{ 0x65035566, "vhost_vq_access_ok" },
	{ 0xd584f2da, "vhost_dev_stop" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe6d6e466, "tap_get_socket" },
	{ 0x5b3a7c03, "iov_iter_advance" },
	{ 0xec712589, "fget" },
	{ 0xeb04ba4c, "vhost_dev_init" },
	{ 0x46c5cb78, "vhost_dev_reset_owner" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc26cc301, "iov_iter_init" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xffb53dfc, "vhost_poll_init" },
	{ 0x5b8fadd, "vhost_vq_init_access" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xaae1ae90, "vhost_poll_stop" },
	{ 0x1c9d9807, "tun_get_tx_ring" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x1000e51, "schedule" },
	{ 0x745b58f, "vhost_exceeds_weight" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9c94d738, "vhost_poll_queue" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x5eb1ee46, "tun_get_socket" },
	{ 0xe99dc7a5, "vhost_discard_vq_desc" },
	{ 0x33e577a1, "vhost_add_used_and_signal" },
	{ 0xf8ce1c00, "compat_ptr_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xacceb7d8, "fput" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xfd2b3e45, "vhost_dev_reset_owner_prepare" },
	{ 0x76a5700b, "vhost_add_used_and_signal_n" },
	{ 0x5febf453, "vhost_dev_set_owner" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe3add77d, "vhost_chr_write_iter" },
	{ 0x295427ca, "noop_llseek" },
	{ 0xb0748d09, "vhost_get_vq_desc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x214d1149, "vhost_chr_read_iter" },
	{ 0x969f232e, "vhost_log_write" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xca449136, "vhost_vq_has_work" },
	{ 0xdcb764ad, "memset" },
	{ 0x6f0d053d, "vhost_dev_ioctl" },
	{ 0x2002cbd1, "misc_register" },
	{ 0xb6450e05, "vhost_disable_notify" },
	{ 0x1fe26c4a, "vhost_dev_has_owner" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4f878af7, "vhost_clear_msg" },
	{ 0xad951f01, "vhost_set_backend_features" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x3e424873, "vhost_enable_notify" },
	{ 0x63f5bde9, "vhost_log_access_ok" },
	{ 0xd78cc871, "vhost_dev_cleanup" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1039b316, "vhost_chr_poll" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa2faa395, "vhost_poll_start" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd55a71f6, "vq_meta_prefetch" },
	{ 0x4b4edc1a, "vhost_dev_check_owner" },
	{ 0xef7307ba, "page_frag_cache_drain" },
	{ 0x4ce0f44d, "__page_frag_alloc_align" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x33e54082, "sockfd_lookup" },
	{ 0xc10e997, "eventfd_signal_mask" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xeabdf598, "vhost_vq_avail_empty" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "vhost,tap,tun");


MODULE_INFO(srcversion, "DF0CF71B010B6FCD00C6EF5");
