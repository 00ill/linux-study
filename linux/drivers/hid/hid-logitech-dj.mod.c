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
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x6e527b0a, "hid_parse_report" },
	{ 0x37a0cba, "kfree" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0xde3f8b9d, "hid_hw_request" },
	{ 0x669c413b, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc69639d5, "hid_destroy_device" },
	{ 0x74b5d32f, "hid_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb19d3a3e, "hid_add_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xfd444e73, "hid_input_report" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x630a82d3, "hid_is_usb" },
	{ 0xbd883ab8, "hid_compare_device_paths" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x6d77e136, "hid_hw_open" },
	{ 0xcf2a6966, "up" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C534");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C531");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C537");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C539");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C543");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C513");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C517");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C51B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C713");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C714");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71F");

MODULE_INFO(srcversion, "9ECD388B5D268F708FCD552");
