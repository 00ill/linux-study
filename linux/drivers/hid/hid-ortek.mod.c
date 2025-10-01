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
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000005A4p00001700");
MODULE_ALIAS("hid:b0003g*v000005A4p00002000");
MODULE_ALIAS("hid:b0003g*v000005A4p00008003");
MODULE_ALIAS("hid:b0003g*v00001223p00003F07");

MODULE_INFO(srcversion, "B89F718764D36DF86234680");
