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
	{ 0xcc0983c6, "regmap_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x53dcc4a9, "devm_platform_get_and_ioremap_resource" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xc00e0644, "snd_pcm_hw_constraint_minmax" },
	{ 0xee9124b3, "snd_soc_params_to_frame_size" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf78bf837, "__devm_regmap_init_mmio_clk" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2cd0b308, "devm_snd_dmaengine_pcm_register" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xa932d852, "snd_soc_dai_active" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2acda8a0, "snd_soc_params_to_bclk" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2s");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2sC*");

MODULE_INFO(srcversion, "59F87B3D18E79537815C75B");
