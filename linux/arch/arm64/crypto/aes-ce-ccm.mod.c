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
	{ 0xec5c5069, "crypto_register_aead" },
	{ 0x61a9b031, "crypto_unregister_aead" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x68f275ad, "ce_aes_expandkey" },
	{ 0x4ce3925d, "ce_aes_mac_update" },
	{ 0xaa70b26, "skcipher_walk_aead_encrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0x4fa63a2f, "skcipher_walk_done" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x22ab5a82, "skcipher_walk_aead_decrypt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "aes-ce-cipher,aes-ce-blk");


MODULE_INFO(srcversion, "F72DE8E6EEC515A9175B5F9");
