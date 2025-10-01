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
	{ 0xbf2a6b2b, "dm_register_target" },
	{ 0x79913357, "zero_fill_bio_iter" },
	{ 0x1bba52b3, "bio_endio" },
	{ 0x184aa1ca, "dm_unregister_target" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "E73B3E6E7B4760222FDEA65");
