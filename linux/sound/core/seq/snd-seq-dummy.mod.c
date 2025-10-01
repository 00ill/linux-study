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
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x85cd59a8, "snd_seq_kernel_client_dispatch" },
	{ 0x37a0cba, "kfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4d936ffc, "snd_seq_create_kernel_client" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-seq");


MODULE_INFO(srcversion, "7A40E0FD47A0746D1C9CD85");
