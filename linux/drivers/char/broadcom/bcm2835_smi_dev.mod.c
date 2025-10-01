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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0x6775d5d3, "class_destroy" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x6aa8ba5, "bcm2835_smi_get" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x59c02473, "class_create" },
	{ 0x4ae7394, "device_create" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf6720336, "bcm2835_smi_get_settings_from_regs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xab7a4d1d, "bcm2835_smi_set_regs_from_settings" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x72db83c4, "bcm2835_smi_set_address" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x91338427, "bcm2835_smi_user_dma" },
	{ 0x3a444f4b, "bcm2835_smi_read_buf" },
	{ 0x45a0916, "bcm2835_smi_write_buf" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bcm2835_smi");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-dev");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-devC*");

MODULE_INFO(srcversion, "D30F50D57969A1CBBE840BF");
