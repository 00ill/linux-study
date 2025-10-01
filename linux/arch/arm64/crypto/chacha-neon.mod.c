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

KSYMTAB_FUNC(hchacha_block_arch, "", "");
KSYMTAB_FUNC(chacha_init_arch, "", "");
KSYMTAB_FUNC(chacha_crypt_arch, "", "");

SYMBOL_CRC(hchacha_block_arch, 0xdd8ec6bd, "");
SYMBOL_CRC(chacha_init_arch, 0xdc94f829, "");
SYMBOL_CRC(chacha_crypt_arch, 0x220b49ab, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0xa04e484b, "skcipher_walk_virt" },
	{ 0xd81a9cc6, "crypto_register_skciphers" },
	{ 0xdcb764ad, "memset" },
	{ 0x4fa63a2f, "skcipher_walk_done" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe2394cd7, "crypto_unregister_skciphers" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libchacha");


MODULE_INFO(srcversion, "F8ED46A6BE9C3BA9E79C0CE");
