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
	{ 0x685cfb74, "crypto_register_template" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0x4ca0956, "crypto_clone_cipher" },
	{ 0xfc56a50d, "crypto_spawn_tfm" },
	{ 0xdcb764ad, "memset" },
	{ 0x72f87ec, "crypto_unregister_template" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xabe628d9, "crypto_grab_spawn" },
	{ 0xe5412adf, "shash_free_singlespawn_instance" },
	{ 0x4ab04e3f, "crypto_inst_setname" },
	{ 0xaf2a2530, "shash_register_instance" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x49623227, "crypto_cipher_encrypt_one" },
	{ 0x8ba9df05, "crypto_cipher_setkey" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F1A233F19362BD3B30863A0");
