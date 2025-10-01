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
	{ 0x74434efe, "fuse_abort_conn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x27271c6b, "cdev_del" },
	{ 0x21abb7e3, "fuse_dev_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x61ac4f87, "fuse_dev_operations" },
	{ 0x4829a47e, "memcpy" },
	{ 0x59c02473, "class_create" },
	{ 0x2002cbd1, "misc_register" },
	{ 0x6775d5d3, "class_destroy" },
	{ 0x10d742cb, "fuse_sync_release" },
	{ 0xee3a29ac, "fuse_conn_put" },
	{ 0x2c6139d5, "fuse_conn_get" },
	{ 0x3cb1af56, "fuse_do_open" },
	{ 0xc3e24696, "fuse_do_ioctl" },
	{ 0xdcb764ad, "memset" },
	{ 0xe468f289, "fuse_direct_io" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x94090688, "misc_deregister" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x98cf60b3, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x77bc13a0, "strim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x16965a52, "device_initialize" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x36dc6ece, "put_device" },
	{ 0x7b1a51f0, "device_add" },
	{ 0xc3c94008, "cdev_alloc" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x32700730, "kobject_uevent" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xa7521471, "fuse_dev_fiq_ops" },
	{ 0xd57704db, "fuse_conn_init" },
	{ 0xc3962ec0, "fuse_dev_alloc_install" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0x5c6e7f8e, "fuse_simple_background" },
	{ 0x52f6ee1, "fuse_dev_free" },
	{ 0x295427ca, "noop_llseek" },
	{ 0xde56749f, "fuse_file_poll" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "fuse");


MODULE_INFO(srcversion, "10C4B9479B5FA78712BE9CA");
