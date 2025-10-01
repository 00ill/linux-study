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
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x775294d7, "of_device_is_available" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x3e7bb035, "dev_get_regmap" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x85dc3ccb, "devm_power_supply_register" },
	{ 0x645c2e80, "rpi_firmware_get" },
	{ 0x669c413b, "_dev_err" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-power-supply");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-power-supplyC*");

MODULE_INFO(srcversion, "133BC102285E19477B75ADB");
