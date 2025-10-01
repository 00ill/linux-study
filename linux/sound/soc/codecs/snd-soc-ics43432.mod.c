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
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x84f321a, "devm_snd_soc_register_component" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cinvensense,ics43432");
MODULE_ALIAS("of:N*T*Cinvensense,ics43432C*");
MODULE_ALIAS("of:N*T*Ccui,cmm-4030d-261");
MODULE_ALIAS("of:N*T*Ccui,cmm-4030d-261C*");

MODULE_INFO(srcversion, "23E9C5F89CDFAD86426264C");
