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
	{ 0x122c3a7e, "_printk" },
	{ 0xa18fc3d2, "usbatm_usb_probe" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x72b34551, "usb_driver_release_interface" },
	{ 0xc485eb96, "usb_altnum_to_altsetting" },
	{ 0xf6491f8c, "usb_driver_claim_interface" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x6afcefb6, "param_ops_byte" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0x4cb4bf6, "usbatm_usb_disconnect" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbatm");


MODULE_INFO(srcversion, "A2589B615E173E70B0A6571");
