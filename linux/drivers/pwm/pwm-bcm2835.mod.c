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
	{ 0x79c88dda, "devm_pwmchip_alloc" },
	{ 0x4eea661, "devm_platform_ioremap_resource" },
	{ 0xb6caf056, "devm_clk_get_enabled" },
	{ 0xe765c32, "devm_clk_rate_exclusive_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6ba0c125, "__devm_pwmchip_add" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-pwm");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-pwmC*");

MODULE_INFO(srcversion, "FF0845163AAB5F99CD6A177");
