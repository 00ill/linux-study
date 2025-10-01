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
	{ 0x122c3a7e, "_printk" },
	{ 0xc1e6e422, "snd_soc_unregister_component" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x666f5d9, "snd_soc_register_component" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Chifiberry,dacplusdsp");
MODULE_ALIAS("of:N*T*Chifiberry,dacplusdspC*");

MODULE_INFO(srcversion, "271E62BC1F81F24C5896A5C");
