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
	{ 0xd59ba7a8, "dvb_dmxdev_init" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa6257a2f, "complete" },
	{ 0x54057840, "smscore_get_device_mode" },
	{ 0x68a74e82, "smscore_register_client" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bb8aa3, "sms_board_led_feedback" },
	{ 0x3b4f12dd, "sms_board_power" },
	{ 0xbf565938, "dvb_register_adapter" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5b042abf, "smscore_unregister_hotplug" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x63640160, "smscore_putbuffer" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xf4f199bf, "sms_board_lna_control" },
	{ 0xe643b477, "dvb_dmxdev_release" },
	{ 0x99a81ab3, "smsclient_sendrequest" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf72fae1, "dvb_unregister_frontend" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7ab4a2cf, "dvb_register_frontend" },
	{ 0xbe027c7b, "sms_board_event" },
	{ 0x8b4245cf, "dvb_create_media_graph" },
	{ 0x88cf6d3a, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xcbbc2c56, "sms_board_setup" },
	{ 0xc1e44d7a, "smscore_get_board_id" },
	{ 0x56be7773, "smscore_register_hotplug" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,mc,smsmdtv");


MODULE_INFO(srcversion, "F50E415CBAA874D36B48EA3");
