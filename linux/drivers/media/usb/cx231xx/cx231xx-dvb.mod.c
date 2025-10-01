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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x53d403f7, "cx231xx_register_extension" },
	{ 0xf4ad8611, "cx231xx_set_mode" },
	{ 0xe8568c88, "cx231xx_unregister_extension" },
	{ 0x2559398, "dvb_net_release" },
	{ 0xe643b477, "dvb_dmxdev_release" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0xaf72fae1, "dvb_unregister_frontend" },
	{ 0xd4a72041, "dvb_frontend_detach" },
	{ 0x88cf6d3a, "dvb_unregister_adapter" },
	{ 0x8e47effd, "dvb_module_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc6fda36b, "cx231xx_get_i2c_adap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x554e4f61, "cx231xx_demod_reset" },
	{ 0x669c413b, "_dev_err" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf565938, "dvb_register_adapter" },
	{ 0x7ab4a2cf, "dvb_register_frontend" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xd59ba7a8, "dvb_dmxdev_init" },
	{ 0xa23a2eab, "dvb_net_init" },
	{ 0x8b4245cf, "dvb_create_media_graph" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x5db77c2e, "dvb_module_probe" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x122c3a7e, "_printk" },
	{ 0x342fa864, "cx231xx_uninit_bulk" },
	{ 0x5cf09208, "cx231xx_uninit_isoc" },
	{ 0x3a67ab17, "cx231xx_set_alt_setting" },
	{ 0x59ee65a5, "cx231xx_init_bulk" },
	{ 0xabd4f828, "cx231xx_init_isoc" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cx231xx,dvb-core");


MODULE_INFO(srcversion, "78D42CBC2F0D6F825185936");
