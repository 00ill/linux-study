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
	{ 0x37a0cba, "kfree" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb573ca92, "phys_mem_access_prot" },
	{ 0xd62a45d4, "remap_pfn_range" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa41bd271, "of_match_device" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xef7fa408, "platform_get_resource" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x59c02473, "class_create" },
	{ 0x4ae7394, "device_create" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd366a8be, "generic_access_phys" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-gpiomem");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-gpiomemC*");
MODULE_ALIAS("of:N*T*Craspberrypi,gpiomem");
MODULE_ALIAS("of:N*T*Craspberrypi,gpiomemC*");

MODULE_INFO(srcversion, "CD36D8F161DC7085608CDFA");
