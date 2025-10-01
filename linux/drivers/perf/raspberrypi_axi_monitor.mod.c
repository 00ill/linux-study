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
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xdcb764ad, "memset" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x645c2e80, "rpi_firmware_get" },
	{ 0xd7dbf556, "of_property_read_u32_index" },
	{ 0xef7fa408, "platform_get_resource" },
	{ 0xcae3b64b, "devm_ioremap_resource" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x3f302749, "debugfs_create_u32" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x5d809a68, "simple_open" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperf");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperfC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-axiperf");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-axiperfC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2712-axiperf");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2712-axiperfC*");

MODULE_INFO(srcversion, "051B71565CEF135C55E1FF8");
