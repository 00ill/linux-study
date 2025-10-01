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
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x630a82d3, "hid_is_usb" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004D9p0000A067");
MODULE_ALIAS("hid:b0003g*v000004D9p0000A070");
MODULE_ALIAS("hid:b0003g*v000004D9p0000A04A");
MODULE_ALIAS("hid:b0003g*v000004D9p0000A072");
MODULE_ALIAS("hid:b0003g*v000004D9p0000A081");
MODULE_ALIAS("hid:b0003g*v000004D9p0000A0C2");

MODULE_INFO(srcversion, "A1AB3779F051FC23BB222D8");
