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
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x70f7da02, "usb_interrupt_msg" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x55c62378, "usb_check_int_endpoints" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x23522c33, "v4l2_device_set_name" },
	{ 0x4829a47e, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x83980396, "snd_tea575x_init" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb8e99dd2, "snd_tea575x_set_freq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe0d8f4f7, "v4l2_device_disconnect" },
	{ 0x2748aa8d, "snd_tea575x_exit" },
	{ 0xade31a66, "v4l2_device_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,tea575x");

MODULE_ALIAS("usb:v077Dp627Ad0001dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "9A76EB431A0C63ADC12C521");
