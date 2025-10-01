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
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x1c6e9142, "regcache_drop_region" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7785415d, "gpiochip_line_is_persistent" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x8939688b, "device_set_node" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "280CD75A5BAB230D9A0E67C");
