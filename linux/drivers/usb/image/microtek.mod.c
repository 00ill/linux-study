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
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x4d66beee, "scsi_remove_host" },
	{ 0x8eb11fad, "scsi_host_put" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xd87d7b3, "usb_lock_device_for_reset" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3d2468f0, "scsi_done" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xe96e0f1d, "scsi_host_alloc" },
	{ 0x9adbb8ff, "scsi_add_host_with_dma" },
	{ 0x6d69b679, "scsi_scan_host" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04CEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0094d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00B6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0E217B5673FE8E3353D7C87");
