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
	{ 0x79c88dda, "devm_pwmchip_alloc" },
	{ 0x3e7bb035, "dev_get_regmap" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x669c413b, "_dev_err" },
	{ 0x692bdce9, "of_get_parent" },
	{ 0xdd0c3387, "devm_rpi_firmware_get" },
	{ 0x469438cc, "of_node_put" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x6ba0c125, "__devm_pwmchip_add" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-poe-pwm");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-poe-pwmC*");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-pwm");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-pwmC*");

MODULE_INFO(srcversion, "1D177526977CD3415F3937B");
