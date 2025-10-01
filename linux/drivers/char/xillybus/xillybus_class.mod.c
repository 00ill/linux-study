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

KSYMTAB_FUNC(xillybus_init_chrdev, "", "");
KSYMTAB_FUNC(xillybus_cleanup_chrdev, "", "");
KSYMTAB_FUNC(xillybus_find_inode, "", "");

SYMBOL_CRC(xillybus_init_chrdev, 0x2379418e, "");
SYMBOL_CRC(xillybus_cleanup_chrdev, 0xe122e2f0, "");
SYMBOL_CRC(xillybus_find_inode, 0x98693c85, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0xa42d469b, "class_register" },
	{ 0x7143a676, "class_unregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xc3c94008, "cdev_alloc" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0xa916b694, "strnlen" },
	{ 0x4ae7394, "device_create" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x317df83, "kobject_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "85D9AF2B467B44957A7D70B");
