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

KSYMTAB_FUNC(poly1305_init_arch, "", "");
KSYMTAB_FUNC(poly1305_update_arch, "", "");
KSYMTAB_FUNC(poly1305_final_arch, "", "");

SYMBOL_CRC(poly1305_init_arch, 0x1c3e6e5b, "");
SYMBOL_CRC(poly1305_update_arch, 0x6ddf27bc, "");
SYMBOL_CRC(poly1305_final_arch, 0xf39f5240, "");

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
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "588AEA993C49FD6886D3E0E");
