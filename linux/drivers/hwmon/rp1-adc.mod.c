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
	{ 0xb3932093, "__platform_driver_probe" },
	{ 0x319120f8, "hwmon_device_unregister" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4eea661, "devm_platform_ioremap_resource" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x100f41a4, "regulator_get_voltage" },
	{ 0xef160adf, "devm_hwmon_device_register_with_groups" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x669c413b, "_dev_err" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1-adc");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1-adcC*");

MODULE_INFO(srcversion, "D52A30218D1D297A6CB30CD");
