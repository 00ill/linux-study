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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x28a823ab, "usb_find_interface" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d38f36, "usb_deregister_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x2cb2056d, "usb_register_dev" },
	{ 0x669c413b, "_dev_err" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0681p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0F7C65400BF80953256576B");
