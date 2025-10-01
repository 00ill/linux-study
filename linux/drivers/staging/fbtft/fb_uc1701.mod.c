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

MODULE_INFO(staging, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3144d34c, "fbtft_remove_common" },
	{ 0x7b8cf75f, "fbtft_probe_common" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x669c413b, "_dev_err" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x92893115, "driver_unregister" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*CUltraChip,uc1701");
MODULE_ALIAS("of:N*T*CUltraChip,uc1701C*");

MODULE_INFO(srcversion, "CAC0E2B16227D6015C530B2");
