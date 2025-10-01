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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x4cc2fbd2, "unregister_framebuffer" },
	{ 0xc7271929, "fb_deferred_io_cleanup" },
	{ 0xd044c193, "framebuffer_release" },
	{ 0x999e8297, "vfree" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x6dcebf17, "sys_fillrect" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xa2c8ab97, "sys_imageblit" },
	{ 0xa548b29e, "sys_copyarea" },
	{ 0x43650a37, "fb_sys_write" },
	{ 0x7a9d63d0, "framebuffer_alloc" },
	{ 0x3e7bb035, "dev_get_regmap" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xb3058b55, "fb_deferred_io_init" },
	{ 0xb5d42d3e, "register_framebuffer" },
	{ 0x122c3a7e, "_printk" },
	{ 0x669c413b, "_dev_err" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xb832fe45, "fb_sys_read" },
	{ 0xcad93fec, "fb_deferred_io_mmap" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-sense-fb");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-sense-fbC*");

MODULE_INFO(srcversion, "8734C162A696845120DF798");
