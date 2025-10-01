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
	{ 0x9f63cedb, "em28xx_register_extension" },
	{ 0x2235ac2b, "em28xx_set_mode" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x669c413b, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0xdcb764ad, "memset" },
	{ 0x5db77c2e, "dvb_module_probe" },
	{ 0x8e47effd, "dvb_module_release" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcf2a6966, "up" },
	{ 0x6626afca, "down" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeff886a7, "em28xx_write_reg_bits" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba14dc88, "em28xx_stop_urbs" },
	{ 0xa6107fa3, "em28xx_unregister_extension" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x5c5a0a63, "dvb_frontend_resume" },
	{ 0x52258516, "dvb_frontend_suspend" },
	{ 0xd40d0641, "em28xx_setup_xc3028" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd4a72041, "dvb_frontend_detach" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x34e2467a, "em28xx_alloc_urbs" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf565938, "dvb_register_adapter" },
	{ 0x7ab4a2cf, "dvb_register_frontend" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xd59ba7a8, "dvb_dmxdev_init" },
	{ 0xa23a2eab, "dvb_net_init" },
	{ 0x8b4245cf, "dvb_create_media_graph" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xe643b477, "dvb_dmxdev_release" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0xaf72fae1, "dvb_unregister_frontend" },
	{ 0x88cf6d3a, "dvb_unregister_adapter" },
	{ 0xe24747f9, "em28xx_uninit_usb_xfer" },
	{ 0x3f394783, "em28xx_gpio_set" },
	{ 0x1ff3d80, "em28xx_write_reg" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xf9a482f9, "msleep" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2559398, "dvb_net_release" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xc4206b7a, "em28xx_init_usb_xfer" },
	{ 0x374647f3, "_dev_printk" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "em28xx,dvb-core");


MODULE_INFO(srcversion, "B06204DE4437161FBA89C44");
