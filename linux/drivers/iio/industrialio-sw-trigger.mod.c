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

KSYMTAB_FUNC(iio_register_sw_trigger_type, "", "");
KSYMTAB_FUNC(iio_unregister_sw_trigger_type, "", "");
KSYMTAB_FUNC(iio_sw_trigger_create, "", "");
KSYMTAB_FUNC(iio_sw_trigger_destroy, "", "");

SYMBOL_CRC(iio_register_sw_trigger_type, 0x3732d676, "");
SYMBOL_CRC(iio_unregister_sw_trigger_type, 0x4d5c1754, "");
SYMBOL_CRC(iio_sw_trigger_create, 0xe781ae7b, "");
SYMBOL_CRC(iio_sw_trigger_destroy, 0xc70d3040, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x19310283, "iio_configfs_subsys" },
	{ 0xff5bf7d1, "configfs_register_default_group" },
	{ 0x11ec9ecb, "configfs_unregister_default_group" },
	{ 0x9d9e8944, "module_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x671e0dac, "config_item_put" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb64bca84, "config_item_set_name" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "industrialio-configfs");


MODULE_INFO(srcversion, "0AD3AEC00AFC66173EF661D");
