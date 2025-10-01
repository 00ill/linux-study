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
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x3c2a02b4, "devm_rc_allocate_device" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0xf37a6340, "devm_rc_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-ir-tx");
MODULE_ALIAS("of:N*T*Cgpio-ir-txC*");

MODULE_INFO(srcversion, "9921FF51B9C396301FE11D1");
