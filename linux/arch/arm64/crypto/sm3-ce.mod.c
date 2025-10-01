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
	{ 0xa98edad1, "sm3_update" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf04338f9, "sm3_final" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x1682e4d7, "crypto_register_shash" },
	{ 0xe788db7e, "crypto_unregister_shash" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "sm3");

MODULE_ALIAS("cpu:type:*:feature:*0012*");

MODULE_INFO(srcversion, "F89041F5D309028DF3ADA37");
