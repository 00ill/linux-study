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
	{ 0xe914e41e, "strcpy" },
	{ 0x441636cf, "usb_control_msg_send" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xeca142e5, "line6_read_data" },
	{ 0x8a4953e1, "line6_suspend" },
	{ 0x2b0446da, "line6_init_pcm" },
	{ 0x669c413b, "_dev_err" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0x28d52c9a, "line6_pcm_acquire" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xadaa2f73, "line6_pcm_release" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xfca298f8, "line6_disconnect" },
	{ 0x28ef6519, "line6_write_data" },
	{ 0x61b40458, "line6_probe" },
	{ 0x1f066823, "line6_resume" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8f0536fd, "line6_read_serial_number" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-usb-line6");

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "30809CD4E1E289A84646CD1");
