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
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0xde3f8b9d, "hid_hw_request" },
	{ 0x669c413b, "_dev_err" },
	{ 0x6d77e136, "hid_hw_open" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x4829a47e, "memcpy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00000458p00000087");
MODULE_ALIAS("hid:b0003g*v00000458p00000138");
MODULE_ALIAS("hid:b0003g*v00000458p00000153");
MODULE_ALIAS("hid:b0003g*v00000458p00004018");
MODULE_ALIAS("hid:b0003g*v00000458p00005005");
MODULE_ALIAS("hid:b0003g*v00000458p0000500F");
MODULE_ALIAS("hid:b0003g*v00000458p00005010");
MODULE_ALIAS("hid:b0003g*v00000458p00005011");
MODULE_ALIAS("hid:b0003g*v00000458p00005012");
MODULE_ALIAS("hid:b0003g*v00000458p00005013");
MODULE_ALIAS("hid:b0003g*v00000458p00005014");
MODULE_ALIAS("hid:b0003g*v00000458p00005015");
MODULE_ALIAS("hid:b0003g*v00000458p00005016");
MODULE_ALIAS("hid:b0003g*v00000458p00005017");
MODULE_ALIAS("hid:b0003g*v00000458p00005019");
MODULE_ALIAS("hid:b0003g*v00000458p0000501A");
MODULE_ALIAS("hid:b0003g*v00000458p0000501B");

MODULE_INFO(srcversion, "2A0A9BAB633BFB1E5BDBE25");
