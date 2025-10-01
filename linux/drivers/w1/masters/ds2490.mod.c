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
	{ 0xa728742c, "usb_register_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa661db9f, "w1_remove_master_device" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x70f7da02, "usb_interrupt_msg" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x6595b544, "usb_reset_configuration" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xdcb764ad, "memset" },
	{ 0x139e8b1f, "w1_add_master_device" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("usb:v04FAp2490d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7B96AE5FEF44AEB6D6B0CA4");
