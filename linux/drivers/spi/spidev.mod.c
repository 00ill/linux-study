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
	{ 0x9b151109, "_dev_warn" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x37a0cba, "kfree" },
	{ 0x53d65c0f, "spi_target_abort" },
	{ 0xe0ff878f, "stream_open" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x418c10ec, "__register_chrdev" },
	{ 0xa42d469b, "class_register" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x7143a676, "class_unregister" },
	{ 0x92893115, "driver_unregister" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4ae7394, "device_create" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x99ed6ef6, "get_device" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x36dc6ece, "put_device" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SPT0001:*");
MODULE_ALIAS("acpi*:SPT0002:*");
MODULE_ALIAS("acpi*:SPT0003:*");
MODULE_ALIAS("of:N*T*Ccisco,spi-petra");
MODULE_ALIAS("of:N*T*Ccisco,spi-petraC*");
MODULE_ALIAS("of:N*T*Cdh,dhcom-board");
MODULE_ALIAS("of:N*T*Cdh,dhcom-boardC*");
MODULE_ALIAS("of:N*T*Celgin,jg10309-01");
MODULE_ALIAS("of:N*T*Celgin,jg10309-01C*");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488C*");
MODULE_ALIAS("of:N*T*Clwn,bk4");
MODULE_ALIAS("of:N*T*Clwn,bk4C*");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpld");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpldC*");
MODULE_ALIAS("of:N*T*Cmicron,spi-authenta");
MODULE_ALIAS("of:N*T*Cmicron,spi-authentaC*");
MODULE_ALIAS("of:N*T*Crohm,bh2228fv");
MODULE_ALIAS("of:N*T*Crohm,bh2228fvC*");
MODULE_ALIAS("of:N*T*Crohm,dh2228fv");
MODULE_ALIAS("of:N*T*Crohm,dh2228fvC*");
MODULE_ALIAS("of:N*T*Csemtech,sx1301");
MODULE_ALIAS("of:N*T*Csemtech,sx1301C*");
MODULE_ALIAS("of:N*T*Csilabs,em3581");
MODULE_ALIAS("of:N*T*Csilabs,em3581C*");
MODULE_ALIAS("of:N*T*Csilabs,si3210");
MODULE_ALIAS("of:N*T*Csilabs,si3210C*");
MODULE_ALIAS("spi:bh2228fv");
MODULE_ALIAS("spi:dh2228fv");
MODULE_ALIAS("spi:jg10309-01");
MODULE_ALIAS("spi:ltc2488");
MODULE_ALIAS("spi:sx1301");
MODULE_ALIAS("spi:bk4");
MODULE_ALIAS("spi:dhcom-board");
MODULE_ALIAS("spi:m53cpld");
MODULE_ALIAS("spi:spi-petra");
MODULE_ALIAS("spi:spi-authenta");
MODULE_ALIAS("spi:em3581");
MODULE_ALIAS("spi:si3210");
MODULE_ALIAS("spi:spidev");

MODULE_INFO(srcversion, "2E65CF03E4DADBE93695A5D");
