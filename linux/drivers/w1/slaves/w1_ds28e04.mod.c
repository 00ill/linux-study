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
	{ 0x26130a71, "w1_register_family" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbd143cf9, "w1_reset_select_slave" },
	{ 0xd4eb9522, "w1_write_block" },
	{ 0x652fcef6, "w1_read_block" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbd6841d4, "crc16" },
	{ 0x669c413b, "_dev_err" },
	{ 0xdcb764ad, "memset" },
	{ 0xea7b044f, "w1_write_8" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd22ce88d, "w1_reset_bus" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdd99f09d, "w1_next_pullup" },
	{ 0x4829a47e, "memcpy" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc223af9, "w1_unregister_family" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "68DB5279E59BC5A68D9D130");
