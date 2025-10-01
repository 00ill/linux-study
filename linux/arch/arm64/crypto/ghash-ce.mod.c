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
	{ 0xfc21309b, "crypto_register_aeads" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x65b83d02, "crypto_unregister_aeads" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9e13f6f6, "gf128mul_lle" },
	{ 0x1682e4d7, "crypto_register_shash" },
	{ 0xe788db7e, "crypto_unregister_shash" },
	{ 0xaa70b26, "skcipher_walk_aead_encrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0x4fa63a2f, "skcipher_walk_done" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x22ab5a82, "skcipher_walk_aead_decrypt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libaes,gf128mul");

MODULE_ALIAS("cpu:type:*:feature:*0004*");

MODULE_INFO(srcversion, "FAB7B3E829A353B0A62321E");
