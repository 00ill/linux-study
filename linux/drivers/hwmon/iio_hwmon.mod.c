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
	{ 0x88069bac, "iio_read_channel_label" },
	{ 0xcd13d6d7, "iio_get_channel_type" },
	{ 0xacaf03bf, "iio_read_channel_processed" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd1c43848, "iio_read_channel_processed_scale" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbc17f49c, "devm_iio_channel_get_all" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcafc5741, "devm_get_free_pages" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x874b1c51, "devm_free_pages" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x7410aba2, "strreplace" },
	{ 0xef160adf, "devm_hwmon_device_register_with_groups" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Ciio-hwmon");
MODULE_ALIAS("of:N*T*Ciio-hwmonC*");

MODULE_INFO(srcversion, "265745FD93FDA2676D0E1A4");
