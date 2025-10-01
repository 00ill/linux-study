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
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0403pC631d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C40p0534d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "509F1157E209BBBD68081CE");
