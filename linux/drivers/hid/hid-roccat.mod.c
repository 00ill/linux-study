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

KSYMTAB_FUNC(roccat_report_event, "_gpl", "");
KSYMTAB_FUNC(roccat_connect, "_gpl", "");
KSYMTAB_FUNC(roccat_disconnect, "_gpl", "");

SYMBOL_CRC(roccat_report_event, 0x3e4427c8, "_gpl");
SYMBOL_CRC(roccat_connect, 0xd665fe9a, "_gpl");
SYMBOL_CRC(roccat_disconnect, 0x2f622ea1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x6d77e136, "hid_hw_open" },
	{ 0x4ae7394, "device_create" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CC99173FFB0D8B322BDA06F");
