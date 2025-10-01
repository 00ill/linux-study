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
	{ 0x3aaa0000, "try_module_get" },
	{ 0xc1e2e098, "dvb_usbv2_reset_resume" },
	{ 0xfe313fa9, "dvb_ca_en50221_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x905e97ab, "dvb_usbv2_suspend" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x46da67b7, "dvb_usbv2_disconnect" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5c362e8, "i2c_unregister_device" },
	{ 0x64d03d, "dvb_ca_en50221_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9128f4c2, "rc_keydown" },
	{ 0x98974e10, "dvb_usbv2_probe" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0x5390eff6, "i2c_new_client_device" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x85122cb0, "dvb_usbv2_generic_rw_locked" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xdcb764ad, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc05659d8, "dvb_usbv2_resume" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb_usb_v2,dvb-core");

MODULE_ALIAS("usb:v04B4p861Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C73p861Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E805CAFC5E6BF40FE51C2DB");
