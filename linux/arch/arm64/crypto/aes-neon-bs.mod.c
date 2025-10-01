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
	{ 0x558b281d, "aes_expandkey" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb8c706a6, "neon_aes_ctr_encrypt" },
	{ 0xd5f41819, "neon_aes_ecb_encrypt" },
	{ 0xa04e484b, "skcipher_walk_virt" },
	{ 0xd81a9cc6, "crypto_register_skciphers" },
	{ 0xdcb764ad, "memset" },
	{ 0x52d67a4e, "neon_aes_cbc_encrypt" },
	{ 0x4fa63a2f, "skcipher_walk_done" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xea11590c, "neon_aes_xts_encrypt" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xe2394cd7, "crypto_unregister_skciphers" },
	{ 0xefc32a9b, "neon_aes_xts_decrypt" },
	{ 0x80a095d8, "scatterwalk_ffwd" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libaes,aes-neon-blk");


MODULE_INFO(srcversion, "D7E852C2614B3C5481E640C");
