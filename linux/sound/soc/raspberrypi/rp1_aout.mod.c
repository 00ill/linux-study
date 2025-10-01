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
	{ 0x84a10e08, "_dev_info" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x53dcc4a9, "devm_platform_get_and_ioremap_resource" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2cd0b308, "devm_snd_dmaengine_pcm_register" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1-audio-out");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1-audio-outC*");

MODULE_INFO(srcversion, "58E178193AA9A094894DBB8");
