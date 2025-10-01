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
	{ 0x441636cf, "usb_control_msg_send" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0FC5p1227d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C39FCD55672F8CA385B917A");
