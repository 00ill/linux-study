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
	{ 0x630a82d3, "hid_is_usb" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0xaa48c5b9, "hid_validate_values" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xee7a3241, "device_create_file" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0xde3f8b9d, "hid_hw_request" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x41cc93f6, "input_event" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x6a35ed2, "input_ff_create_memless" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C50C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C101");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C704");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C30A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C512");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C215");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C216");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C294");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C20A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C211");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C219");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C24F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C283");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C286");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C295");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000CA03");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000CA04");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C299");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C298");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C20E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C293");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C218");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C287");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C626");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C623");

MODULE_INFO(srcversion, "2FF882B86F8EECAF6D67478");
