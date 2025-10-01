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
	{ 0x1c33b55d, "device_property_present" },
	{ 0x4eea661, "devm_platform_ioremap_resource" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x87172c49, "i2c_dw_dev_pm_ops" },
	{ 0xdebc33ca, "i2c_dw_prepare_clk" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x3e7bb035, "dev_get_regmap" },
	{ 0x58370a06, "syscon_node_to_regmap" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xd84ead50, "__devm_reset_control_get" },
	{ 0xef54673c, "devm_clk_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd390d9d5, "i2c_dw_fw_parse_and_configure" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x747ea351, "i2c_dw_disable" },
	{ 0x15737351, "i2c_dw_configure_master" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0xbeeea03, "i2c_dw_probe" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-designware-core");

MODULE_ALIAS("acpi*:80860F41:*");
MODULE_ALIAS("acpi*:808622C1:*");
MODULE_ALIAS("acpi*:AMD0010:*");
MODULE_ALIAS("acpi*:AMDI0010:*");
MODULE_ALIAS("acpi*:AMDI0019:*");
MODULE_ALIAS("acpi*:AMDI0510:*");
MODULE_ALIAS("acpi*:APMC0D0F:*");
MODULE_ALIAS("acpi*:HISI02A1:*");
MODULE_ALIAS("acpi*:HISI02A2:*");
MODULE_ALIAS("acpi*:HISI02A3:*");
MODULE_ALIAS("acpi*:HYGO0010:*");
MODULE_ALIAS("acpi*:INT33C2:*");
MODULE_ALIAS("acpi*:INT33C3:*");
MODULE_ALIAS("acpi*:INT3432:*");
MODULE_ALIAS("acpi*:INT3433:*");
MODULE_ALIAS("acpi*:INTC10EF:*");
MODULE_ALIAS("of:N*T*Csnps,designware-i2c");
MODULE_ALIAS("of:N*T*Csnps,designware-i2cC*");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-i2c");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-i2cC*");
MODULE_ALIAS("of:N*T*Cbaikal,bt1-sys-i2c");
MODULE_ALIAS("of:N*T*Cbaikal,bt1-sys-i2cC*");
MODULE_ALIAS("platform:i2c_designware");

MODULE_INFO(srcversion, "F158BFF32264725D62FDAEF");
