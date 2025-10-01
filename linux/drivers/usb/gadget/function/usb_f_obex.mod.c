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
	{ 0x8bf701a4, "usb_interface_id" },
	{ 0x72516513, "usb_assign_descriptors" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0x37a0cba, "kfree" },
	{ 0x35e071f4, "config_ep_by_speed" },
	{ 0xe89dc424, "gserial_alloc_line_no_console" },
	{ 0xf9673004, "usb_function_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0x87524a39, "gserial_disconnect" },
	{ 0x6f3f2011, "usb_ep_autoconfig" },
	{ 0x3a7652c8, "usb_put_function_instance" },
	{ 0x367d4b8, "usb_function_activate" },
	{ 0xf0105eee, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xfae6f0ff, "gserial_connect" },
	{ 0xd962ac6, "usb_free_all_descriptors" },
	{ 0x3a7eeb5, "usb_gstrings_attach" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xd91bea25, "usb_function_deactivate" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libcomposite,u_serial");


MODULE_INFO(srcversion, "98F92C8175F8CCFF3B3C2AE");
