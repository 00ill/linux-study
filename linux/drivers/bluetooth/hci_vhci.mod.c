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
	{ 0x2002cbd1, "misc_register" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x9a3a6576, "debugfs_lookup_and_remove" },
	{ 0xadc1603a, "hci_unregister_dev" },
	{ 0xec2f6bf4, "hci_free_dev" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x37a0cba, "kfree" },
	{ 0x33b58322, "skb_push" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xe2964344, "__wake_up" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x94090688, "misc_deregister" },
	{ 0x5e09d3fc, "hci_suspend_dev" },
	{ 0x7f98a838, "hci_resume_dev" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x84351f9d, "hci_alloc_dev_priv" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9b80e029, "hci_register_dev" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe3799008, "nonseekable_open" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xf7389894, "hci_recv_frame" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e8b81a, "hci_devcd_register" },
	{ 0xb20da7cc, "hci_devcd_init" },
	{ 0x837bda45, "hci_devcd_append" },
	{ 0x81688f31, "hci_devcd_abort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x25eac995, "hci_devcd_complete" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0x5d809a68, "simple_open" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "9065112D9D6F795DDC9F666");
