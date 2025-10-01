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

KSYMTAB_FUNC(crypto_get_default_null_skcipher, "_gpl", "");
KSYMTAB_FUNC(crypto_put_default_null_skcipher, "_gpl", "");

SYMBOL_CRC(crypto_get_default_null_skcipher, 0x65664ab5, "_gpl");
SYMBOL_CRC(crypto_put_default_null_skcipher, 0x21cd536a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0x59793001, "crypto_alloc_sync_skcipher" },
	{ 0xb5ddf183, "crypto_register_algs" },
	{ 0x1682e4d7, "crypto_register_shash" },
	{ 0x734da454, "crypto_register_skcipher" },
	{ 0xe788db7e, "crypto_unregister_shash" },
	{ 0x52f0e708, "crypto_unregister_algs" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xa04e484b, "skcipher_walk_virt" },
	{ 0x4fa63a2f, "skcipher_walk_done" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x59c9bad4, "crypto_unregister_skcipher" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "064CA23C0E31E41F1160D26");
