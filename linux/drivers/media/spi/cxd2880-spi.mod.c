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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xe643b477, "dvb_dmxdev_release" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0xaf72fae1, "dvb_unregister_frontend" },
	{ 0xd4a72041, "dvb_frontend_detach" },
	{ 0x88cf6d3a, "dvb_unregister_adapter" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0x92893115, "driver_unregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf565938, "dvb_register_adapter" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x7ab4a2cf, "dvb_register_frontend" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xd59ba7a8, "dvb_dmxdev_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("spi:cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880C*");

MODULE_INFO(srcversion, "241B61A7E2C61504BC92237");
