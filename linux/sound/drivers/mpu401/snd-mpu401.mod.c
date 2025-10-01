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
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x83391db0, "param_ops_long" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x669c413b, "_dev_err" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x2599f823, "snd_devm_card_new" },
	{ 0x4f2af5de, "snd_mpu401_uart_new" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-mpu401-uart");


MODULE_INFO(srcversion, "3D6B51F32317ABEBC7D1FDB");
