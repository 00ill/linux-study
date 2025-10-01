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
	{ 0xa728742c, "usb_register_driver" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1964p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "06B0942A8AE7372EE5396F0");
