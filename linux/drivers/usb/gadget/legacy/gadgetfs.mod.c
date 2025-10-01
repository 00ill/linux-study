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
	{ 0x66276d18, "_copy_to_iter" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x4b0c100, "simple_dir_inode_operations" },
	{ 0xb2211837, "usb_ep_fifo_flush" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc232a2b6, "new_inode" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x3d426ee8, "unregister_filesystem" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9bd42653, "d_alloc_name" },
	{ 0x3fea8e91, "simple_statfs" },
	{ 0x8d9bb4d2, "kill_fasync" },
	{ 0x2e237b28, "d_make_root" },
	{ 0x37a0cba, "kfree" },
	{ 0xb880a06, "usb_ep_fifo_status" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x969edd2c, "register_filesystem" },
	{ 0xd3679b28, "kiocb_set_cancel_fn" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0x862ce0df, "kthread_use_mm" },
	{ 0x1e4b2fa6, "simple_inode_init_ts" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8d732959, "make_kuid" },
	{ 0x99fab7dc, "simple_dir_operations" },
	{ 0x49d0c742, "usb_gadget_vbus_draw" },
	{ 0x8c8eed8e, "usb_ep_dequeue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x861cbccd, "usb_ep_clear_halt" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xb06eee1f, "fasync_helper" },
	{ 0x9166fada, "strncpy" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4d036e93, "kill_litter_super" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x796c3d7, "make_kgid" },
	{ 0xc7a7b94f, "d_delete" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x2dc15614, "usb_gadget_set_state" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0x8ca7011c, "usb_ep_alloc_request" },
	{ 0xeea0d354, "usb_gadget_unregister_driver" },
	{ 0x2d75696f, "usb_ep_set_halt" },
	{ 0x546f367f, "d_add" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x771f0565, "init_user_ns" },
	{ 0xfa7233a, "dup_iter" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdbd3c921, "dput" },
	{ 0x1b52d189, "generic_delete_inode" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0x4bf700b8, "usb_gadget_register_driver_owner" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa8276ea0, "kthread_unuse_mm" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0xf933d9d0, "get_tree_single" },
	{ 0xbcf61715, "usb_ep_enable" },
	{ 0xd152cd3f, "usb_ep_disable" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A2BEEE9CCEAFAED261C92B9");
