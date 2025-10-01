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

KSYMTAB_FUNC(vhost_work_init, "_gpl", "");
KSYMTAB_FUNC(vhost_poll_init, "_gpl", "");
KSYMTAB_FUNC(vhost_poll_start, "_gpl", "");
KSYMTAB_FUNC(vhost_poll_stop, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_work_queue, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_flush, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_has_work, "_gpl", "");
KSYMTAB_FUNC(vhost_poll_queue, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_is_setup, "_gpl", "");
KSYMTAB_FUNC(vhost_exceeds_weight, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_init, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_check_owner, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_has_owner, "_gpl", "");
KSYMTAB_FUNC(vhost_worker_ioctl, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_set_owner, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_reset_owner_prepare, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_reset_owner, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_stop, "_gpl", "");
KSYMTAB_FUNC(vhost_clear_msg, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_cleanup, "_gpl", "");
KSYMTAB_FUNC(vhost_chr_write_iter, "", "");
KSYMTAB_FUNC(vhost_chr_poll, "", "");
KSYMTAB_FUNC(vhost_chr_read_iter, "_gpl", "");
KSYMTAB_FUNC(vq_meta_prefetch, "_gpl", "");
KSYMTAB_FUNC(vhost_log_access_ok, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_access_ok, "_gpl", "");
KSYMTAB_FUNC(vhost_vring_ioctl, "_gpl", "");
KSYMTAB_FUNC(vhost_init_device_iotlb, "_gpl", "");
KSYMTAB_FUNC(vhost_dev_ioctl, "_gpl", "");
KSYMTAB_FUNC(vhost_log_write, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_init_access, "_gpl", "");
KSYMTAB_FUNC(vhost_get_vq_desc, "_gpl", "");
KSYMTAB_FUNC(vhost_discard_vq_desc, "_gpl", "");
KSYMTAB_FUNC(vhost_add_used, "_gpl", "");
KSYMTAB_FUNC(vhost_add_used_n, "_gpl", "");
KSYMTAB_FUNC(vhost_signal, "_gpl", "");
KSYMTAB_FUNC(vhost_add_used_and_signal, "_gpl", "");
KSYMTAB_FUNC(vhost_add_used_and_signal_n, "_gpl", "");
KSYMTAB_FUNC(vhost_vq_avail_empty, "_gpl", "");
KSYMTAB_FUNC(vhost_enable_notify, "_gpl", "");
KSYMTAB_FUNC(vhost_disable_notify, "_gpl", "");
KSYMTAB_FUNC(vhost_new_msg, "_gpl", "");
KSYMTAB_FUNC(vhost_enqueue_msg, "_gpl", "");
KSYMTAB_FUNC(vhost_dequeue_msg, "_gpl", "");
KSYMTAB_FUNC(vhost_set_backend_features, "_gpl", "");

SYMBOL_CRC(vhost_work_init, 0xa909cfc5, "_gpl");
SYMBOL_CRC(vhost_poll_init, 0xffb53dfc, "_gpl");
SYMBOL_CRC(vhost_poll_start, 0xa2faa395, "_gpl");
SYMBOL_CRC(vhost_poll_stop, 0xaae1ae90, "_gpl");
SYMBOL_CRC(vhost_vq_work_queue, 0xcbf9d9c8, "_gpl");
SYMBOL_CRC(vhost_dev_flush, 0x22408967, "_gpl");
SYMBOL_CRC(vhost_vq_has_work, 0xca449136, "_gpl");
SYMBOL_CRC(vhost_poll_queue, 0x9c94d738, "_gpl");
SYMBOL_CRC(vhost_vq_is_setup, 0x97016927, "_gpl");
SYMBOL_CRC(vhost_exceeds_weight, 0x0745b58f, "_gpl");
SYMBOL_CRC(vhost_dev_init, 0xeb04ba4c, "_gpl");
SYMBOL_CRC(vhost_dev_check_owner, 0x4b4edc1a, "_gpl");
SYMBOL_CRC(vhost_dev_has_owner, 0x1fe26c4a, "_gpl");
SYMBOL_CRC(vhost_worker_ioctl, 0xd66df6f1, "_gpl");
SYMBOL_CRC(vhost_dev_set_owner, 0x5febf453, "_gpl");
SYMBOL_CRC(vhost_dev_reset_owner_prepare, 0xfd2b3e45, "_gpl");
SYMBOL_CRC(vhost_dev_reset_owner, 0x46c5cb78, "_gpl");
SYMBOL_CRC(vhost_dev_stop, 0xd584f2da, "_gpl");
SYMBOL_CRC(vhost_clear_msg, 0x4f878af7, "_gpl");
SYMBOL_CRC(vhost_dev_cleanup, 0xd78cc871, "_gpl");
SYMBOL_CRC(vhost_chr_write_iter, 0xe3add77d, "");
SYMBOL_CRC(vhost_chr_poll, 0x1039b316, "");
SYMBOL_CRC(vhost_chr_read_iter, 0x214d1149, "_gpl");
SYMBOL_CRC(vq_meta_prefetch, 0xd55a71f6, "_gpl");
SYMBOL_CRC(vhost_log_access_ok, 0x63f5bde9, "_gpl");
SYMBOL_CRC(vhost_vq_access_ok, 0x65035566, "_gpl");
SYMBOL_CRC(vhost_vring_ioctl, 0x87d1a985, "_gpl");
SYMBOL_CRC(vhost_init_device_iotlb, 0xdd14daed, "_gpl");
SYMBOL_CRC(vhost_dev_ioctl, 0x6f0d053d, "_gpl");
SYMBOL_CRC(vhost_log_write, 0x969f232e, "_gpl");
SYMBOL_CRC(vhost_vq_init_access, 0x05b8fadd, "_gpl");
SYMBOL_CRC(vhost_get_vq_desc, 0xb0748d09, "_gpl");
SYMBOL_CRC(vhost_discard_vq_desc, 0xe99dc7a5, "_gpl");
SYMBOL_CRC(vhost_add_used, 0x79a1f63a, "_gpl");
SYMBOL_CRC(vhost_add_used_n, 0xd55c9e5c, "_gpl");
SYMBOL_CRC(vhost_signal, 0xd16b032f, "_gpl");
SYMBOL_CRC(vhost_add_used_and_signal, 0x33e577a1, "_gpl");
SYMBOL_CRC(vhost_add_used_and_signal_n, 0x76a5700b, "_gpl");
SYMBOL_CRC(vhost_vq_avail_empty, 0xeabdf598, "_gpl");
SYMBOL_CRC(vhost_enable_notify, 0x3e424873, "_gpl");
SYMBOL_CRC(vhost_disable_notify, 0xb6450e05, "_gpl");
SYMBOL_CRC(vhost_new_msg, 0xa0f93f66, "_gpl");
SYMBOL_CRC(vhost_enqueue_msg, 0x44555cb6, "_gpl");
SYMBOL_CRC(vhost_dequeue_msg, 0x35abc6dc, "_gpl");
SYMBOL_CRC(vhost_set_backend_features, 0xad951f01, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa6257a2f, "complete" },
	{ 0xdcb764ad, "memset" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x37a0cba, "kfree" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xd874c6ae, "cgroup_attach_task_all" },
	{ 0x5b30e25c, "vhost_task_wake" },
	{ 0x4471a51d, "vhost_task_stop" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x745a981, "xa_erase" },
	{ 0xcdc8c6e2, "mmput" },
	{ 0x724c1a48, "__mmdrop" },
	{ 0xc577832d, "vhost_iotlb_alloc" },
	{ 0xa24517eb, "vhost_iotlb_free" },
	{ 0xe2964344, "__wake_up" },
	{ 0xb465e40a, "pin_user_pages_fast" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbc4005a8, "unpin_user_pages_dirty_lock" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0xc58007de, "vhost_task_create" },
	{ 0x8f00f6d1, "vhost_task_start" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xacceb7d8, "fput" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x862ce0df, "kthread_use_mm" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa8276ea0, "kthread_unuse_mm" },
	{ 0x1000e51, "schedule" },
	{ 0xc10e997, "eventfd_signal_mask" },
	{ 0x69e872f9, "vhost_iotlb_itree_first" },
	{ 0xc26cc301, "iov_iter_init" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x44d6c687, "get_task_mm" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x38ff875f, "vhost_iotlb_add_range" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x5b3a7c03, "iov_iter_advance" },
	{ 0x6bec0e66, "vhost_iotlb_del_range" },
	{ 0xb11baeb, "eventfd_fget" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "vhost_iotlb");


MODULE_INFO(srcversion, "CC315FBA41B12C005A7E62E");
