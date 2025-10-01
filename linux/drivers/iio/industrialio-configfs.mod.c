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

KSYMTAB_DATA(iio_configfs_subsys, "", "");

SYMBOL_CRC(iio_configfs_subsys, 0x19310283, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3b3bf1a0, "config_group_init" },
	{ 0x2eb49b36, "configfs_register_subsystem" },
	{ 0xaa8d662b, "configfs_unregister_subsystem" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EDA1569DEDB888604787262");
