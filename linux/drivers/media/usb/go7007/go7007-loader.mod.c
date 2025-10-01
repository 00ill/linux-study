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
	{ 0x84a10e08, "_dev_info" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x656eb285, "cypress_load_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cypress_firmware");

MODULE_ALIAS("usb:v1943pA250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p6666d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p6668d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ADA02ECD50AB16F7BB06503");
