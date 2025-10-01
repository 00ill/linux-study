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
	{ 0x1682e4d7, "crypto_register_shash" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x83581089, "gf128mul_init_4k_lle" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5a4d313e, "gf128mul_4k_lle" },
	{ 0xe788db7e, "crypto_unregister_shash" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "gf128mul");


MODULE_INFO(srcversion, "4046A83247E368B3BBE9417");
