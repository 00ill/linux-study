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
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xca7a567d, "usb_stor_probe1" },
	{ 0x6624226e, "usb_stor_reset_resume" },
	{ 0xc626659b, "usb_stor_pre_reset" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc54f1d3, "usb_stor_host_template_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6c922760, "usb_stor_probe2" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x15f01c27, "usb_autopm_put_interface_async" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xa3a1d05c, "usb_stor_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd4157fc, "usb_enable_autosuspend" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x5e462d7a, "usb_stor_control_msg" },
	{ 0xcb707138, "usb_stor_post_reset" },
	{ 0x35a6d6da, "usb_stor_bulk_transfer_buf" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp0138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0184d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1246B0B00082DEB62C69118");
