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
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x1682e4d7, "crypto_register_shash" },
	{ 0xe788db7e, "crypto_unregister_shash" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x25eda531, "crypto_sha1_update" },
	{ 0xf2c492e0, "crypto_sha1_finup" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "sha1_generic");

MODULE_ALIAS("cpu:type:*:feature:*0005*");

MODULE_INFO(srcversion, "E1188431249274A0E3E1EAD");
