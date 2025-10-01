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
	{ 0xd81a9cc6, "crypto_register_skciphers" },
	{ 0xdcb764ad, "memset" },
	{ 0xa04e484b, "skcipher_walk_virt" },
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0x4fa63a2f, "skcipher_walk_done" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe2394cd7, "crypto_unregister_skciphers" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libchacha");


MODULE_INFO(srcversion, "A3B53A815DDE219EA5F5C56");
