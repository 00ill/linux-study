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

KSYMTAB_FUNC(dvb_usbv2_probe, "", "");
KSYMTAB_FUNC(dvb_usbv2_disconnect, "", "");
KSYMTAB_FUNC(dvb_usbv2_suspend, "", "");
KSYMTAB_FUNC(dvb_usbv2_resume, "", "");
KSYMTAB_FUNC(dvb_usbv2_reset_resume, "", "");
KSYMTAB_FUNC(dvb_usbv2_generic_rw, "", "");
KSYMTAB_FUNC(dvb_usbv2_generic_write, "", "");
KSYMTAB_FUNC(dvb_usbv2_generic_rw_locked, "", "");
KSYMTAB_FUNC(dvb_usbv2_generic_write_locked, "", "");

SYMBOL_CRC(dvb_usbv2_probe, 0x98974e10, "");
SYMBOL_CRC(dvb_usbv2_disconnect, 0x46da67b7, "");
SYMBOL_CRC(dvb_usbv2_suspend, 0x905e97ab, "");
SYMBOL_CRC(dvb_usbv2_resume, 0xc05659d8, "");
SYMBOL_CRC(dvb_usbv2_reset_resume, 0xc1e2e098, "");
SYMBOL_CRC(dvb_usbv2_generic_rw, 0x38bae6ec, "");
SYMBOL_CRC(dvb_usbv2_generic_write, 0x1313734c, "");
SYMBOL_CRC(dvb_usbv2_generic_rw_locked, 0x85122cb0, "");
SYMBOL_CRC(dvb_usbv2_generic_write_locked, 0x6cd306ca, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd59ba7a8, "dvb_dmxdev_init" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xbf565938, "dvb_register_adapter" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x6a9f708a, "dvb_dmx_swfilter_204" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x661f928c, "rc_register_device" },
	{ 0xa23a2eab, "dvb_net_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe643b477, "dvb_dmxdev_release" },
	{ 0x5dc3d1bc, "rc_free_device" },
	{ 0xa4235824, "dvb_dmx_swfilter_raw" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd4a72041, "dvb_frontend_detach" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x2559398, "dvb_net_release" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x419a348c, "rc_allocate_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf72fae1, "dvb_unregister_frontend" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3501dbb8, "__media_device_usb_init" },
	{ 0x5c5a0a63, "dvb_frontend_resume" },
	{ 0x7ab4a2cf, "dvb_register_frontend" },
	{ 0x52258516, "dvb_frontend_suspend" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8b4245cf, "dvb_create_media_graph" },
	{ 0x88cf6d3a, "dvb_unregister_adapter" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xf399eccc, "rc_unregister_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,mc");


MODULE_INFO(srcversion, "9926F3EE0FC2A72E4FE49C0");
