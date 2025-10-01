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

KSYMTAB_FUNC(uio_event_notify, "_gpl", "");
KSYMTAB_FUNC(__uio_register_device, "_gpl", "");
KSYMTAB_FUNC(__devm_uio_register_device, "_gpl", "");
KSYMTAB_FUNC(uio_unregister_device, "_gpl", "");

SYMBOL_CRC(uio_event_notify, 0x7b8cdfb8, "_gpl");
SYMBOL_CRC(__uio_register_device, 0x318654c4, "_gpl");
SYMBOL_CRC(__devm_uio_register_device, 0x3efd0f68, "_gpl");
SYMBOL_CRC(uio_unregister_device, 0x84db7e88, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8d9bb4d2, "kill_fasync" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x669c413b, "_dev_err" },
	{ 0x317df83, "kobject_put" },
	{ 0xb06eee1f, "fasync_helper" },
	{ 0x9d9e8944, "module_put" },
	{ 0x36dc6ece, "put_device" },
	{ 0x20978fb9, "idr_find" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xac258851, "vmalloc_to_page" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x389e0320, "dma_mmap_attrs" },
	{ 0xd62a45d4, "remap_pfn_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xc3c94008, "cdev_alloc" },
	{ 0x6080511e, "kobject_set_name" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0xa42d469b, "class_register" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x122c3a7e, "_printk" },
	{ 0x27271c6b, "cdev_del" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x16965a52, "device_initialize" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x7b1a51f0, "device_add" },
	{ 0xad811a0a, "kobject_create_and_add" },
	{ 0xa0974558, "kobject_init" },
	{ 0x47b2bf16, "kobject_add" },
	{ 0x32700730, "kobject_uevent" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x73f49957, "device_del" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0xde5315ca, "devres_add" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7143a676, "class_unregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd366a8be, "generic_access_phys" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C87018C099B39DA7B97639A");
