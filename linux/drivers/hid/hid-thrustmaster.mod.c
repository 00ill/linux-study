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
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x630a82d3, "hid_is_usb" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x55c62378, "usb_check_int_endpoints" },
	{ 0x4829a47e, "memcpy" },
	{ 0x70f7da02, "usb_interrupt_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000044Fp0000B65D");

MODULE_INFO(srcversion, "AA0A499E5388CFDAD520FD8");
