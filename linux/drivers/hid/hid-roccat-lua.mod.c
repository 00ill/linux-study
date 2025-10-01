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
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x13c88f85, "sysfs_remove_bin_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc0a8e726, "roccat_common2_send" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x93e829ee, "roccat_common2_receive" },
	{ 0x630a82d3, "hid_is_usb" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5ab2418a, "sysfs_create_bin_file" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "hid-roccat-common");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002C2E");

MODULE_INFO(srcversion, "72A7A0F37F0CEAA8B610C02");
