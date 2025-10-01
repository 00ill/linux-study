#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(usb_cypress_load_firmware, "", "");
KSYMTAB_FUNC(dvb_usb_get_hexline, "", "");
KSYMTAB_FUNC(dvb_usb_device_init, "", "");
KSYMTAB_FUNC(dvb_usb_device_exit, "", "");
KSYMTAB_FUNC(dvb_usb_generic_rw, "", "");
KSYMTAB_FUNC(dvb_usb_generic_write, "", "");
KSYMTAB_FUNC(dvb_usb_nec_rc_key_to_event, "", "");

SYMBOL_CRC(usb_cypress_load_firmware, 0x25bfa164, "");
SYMBOL_CRC(dvb_usb_get_hexline, 0x8b6f5395, "");
SYMBOL_CRC(dvb_usb_device_init, 0x6dd942e0, "");
SYMBOL_CRC(dvb_usb_device_exit, 0x579e5ff4, "");
SYMBOL_CRC(dvb_usb_generic_rw, 0x46b92066, "");
SYMBOL_CRC(dvb_usb_generic_write, 0x89f3455f, "");
SYMBOL_CRC(dvb_usb_nec_rc_key_to_event, 0x026aca8c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x99c44b73, "input_allocate_device" },
	{ 0xd59ba7a8, "dvb_dmxdev_init" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0xbf565938, "dvb_register_adapter" },
	{ 0xb727b479, "input_free_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x6a9f708a, "dvb_dmx_swfilter_204" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x661f928c, "rc_register_device" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xa23a2eab, "dvb_net_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xe643b477, "dvb_dmxdev_release" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0xdcb764ad, "memset" },
	{ 0xa4235824, "dvb_dmx_swfilter_raw" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x41cc93f6, "input_event" },
	{ 0xd4a72041, "dvb_frontend_detach" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x2559398, "dvb_net_release" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf72fae1, "dvb_unregister_frontend" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3501dbb8, "__media_device_usb_init" },
	{ 0x7ab4a2cf, "dvb_register_frontend" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8b4245cf, "dvb_create_media_graph" },
	{ 0x88cf6d3a, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,mc");


MODULE_INFO(srcversion, "083703896CC43B04798B56C");
