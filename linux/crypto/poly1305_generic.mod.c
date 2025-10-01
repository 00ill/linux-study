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
	{ 0x4a833012, "poly1305_final_generic" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe788db7e, "crypto_unregister_shash" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libpoly1305");


MODULE_INFO(srcversion, "E7C842A9B88C4BF8B517594");
