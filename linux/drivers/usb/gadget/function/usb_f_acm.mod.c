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
	{ 0xdce89ef6, "gs_free_req" },
	{ 0x8bf701a4, "usb_interface_id" },
	{ 0x72516513, "usb_assign_descriptors" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x35e071f4, "config_ep_by_speed" },
	{ 0xf9673004, "usb_function_register" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0x669c413b, "_dev_err" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xef80467f, "gs_alloc_req" },
	{ 0xed2829c9, "gserial_suspend" },
	{ 0x87524a39, "gserial_disconnect" },
	{ 0x6f3f2011, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3a7652c8, "usb_put_function_instance" },
	{ 0xf0105eee, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d75696f, "usb_ep_set_halt" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0xbcf61715, "usb_ep_enable" },
	{ 0xd152cd3f, "usb_ep_disable" },
	{ 0xfae6f0ff, "gserial_connect" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd962ac6, "usb_free_all_descriptors" },
	{ 0x3a7eeb5, "usb_gstrings_attach" },
	{ 0x868e9ba8, "gserial_resume" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "u_serial,libcomposite");


MODULE_INFO(srcversion, "F0791812A2AF9E1A6847DA5");
