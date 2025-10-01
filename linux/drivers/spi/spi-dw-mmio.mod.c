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
	{ 0xcf857b7d, "syscon_regmap_lookup_by_phandle" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x669c413b, "_dev_err" },
	{ 0xa07a71af, "dw_spi_dma_setup_generic" },
	{ 0x3c9b3250, "dw_spi_set_cs" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x255b7382, "dw_spi_remove_host" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x53dcc4a9, "devm_platform_get_and_ioremap_resource" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0xb6caf056, "devm_clk_get_enabled" },
	{ 0xe62942b0, "devm_clk_get_optional_enabled" },
	{ 0xd84ead50, "__devm_reset_control_get" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x81a07385, "dw_spi_add_host" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4eea661, "devm_platform_ioremap_resource" },
	{ 0xee6b71c4, "syscon_regmap_lookup_by_compatible" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "spi-dw");

MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssi");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssiC*");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spi");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spiC*");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spi");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spiC*");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssi");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssiC*");
MODULE_ALIAS("of:N*T*Crenesas,rzn1-spi");
MODULE_ALIAS("of:N*T*Crenesas,rzn1-spiC*");
MODULE_ALIAS("of:N*T*Csnps,dwc-ssi-1.01a");
MODULE_ALIAS("of:N*T*Csnps,dwc-ssi-1.01aC*");
MODULE_ALIAS("of:N*T*Cintel,keembay-ssi");
MODULE_ALIAS("of:N*T*Cintel,keembay-ssiC*");
MODULE_ALIAS("of:N*T*Cintel,mountevans-imc-ssi");
MODULE_ALIAS("of:N*T*Cintel,mountevans-imc-ssiC*");
MODULE_ALIAS("of:N*T*Cmicrochip,sparx5-spi");
MODULE_ALIAS("of:N*T*Cmicrochip,sparx5-spiC*");
MODULE_ALIAS("of:N*T*Ccanaan,k210-spi");
MODULE_ALIAS("of:N*T*Ccanaan,k210-spiC*");
MODULE_ALIAS("of:N*T*Camd,pensando-elba-spi");
MODULE_ALIAS("of:N*T*Camd,pensando-elba-spiC*");

MODULE_INFO(srcversion, "CD8A5D0E258BE5EB8070AEA");
