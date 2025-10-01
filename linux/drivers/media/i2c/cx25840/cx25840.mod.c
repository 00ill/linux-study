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
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xe2964344, "__wake_up" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0x94838529, "v4l2_ctrl_handler_log_status" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x5b6a59bc, "v4l2_subdev_call_wrappers" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xf27b4bb9, "v4l2_ctrl_cluster" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:cx25840");

MODULE_INFO(srcversion, "AC0A6A8F82FD5F32FB97854");
