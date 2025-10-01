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
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00000766p00000204");
MODULE_ALIAS("hid:b0003g*v0000046Ep00005578");
MODULE_ALIAS("hid:b0003g*v0000046Ep00005577");
MODULE_ALIAS("hid:b0003g*v00001784p00000004");
MODULE_ALIAS("hid:b0003g*v000004F2p00000618");
MODULE_ALIAS("hid:b0005g*v000004F2p00001408");

MODULE_INFO(srcversion, "AB1467EB305D9202BD9DD66");
