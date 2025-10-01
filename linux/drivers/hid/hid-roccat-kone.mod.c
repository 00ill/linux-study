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
	{ 0xa42d469b, "class_register" },
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x7143a676, "class_unregister" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x669c413b, "_dev_err" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x630a82d3, "hid_is_usb" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd665fe9a, "roccat_connect" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "hid-roccat");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002CED");

MODULE_INFO(srcversion, "38F75F620CDFAC1FC479DD9");
