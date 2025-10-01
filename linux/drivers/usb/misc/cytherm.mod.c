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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04B4p0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F4CFD665C60CB1808EA34B2");
