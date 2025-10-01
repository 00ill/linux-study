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

KSYMTAB_FUNC(ce_aes_mac_update, "", "CRYPTO_INTERNAL");

SYMBOL_CRC(ce_aes_mac_update, 0x4ce3925d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc278d979, "crypto_unregister_shashes" },
	{ 0x9386790b, "crypto_shash_tfm_digest" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x68f275ad, "ce_aes_expandkey" },
	{ 0xa04e484b, "skcipher_walk_virt" },
	{ 0xfd9eaaee, "crypto_register_shashes" },
	{ 0xd81a9cc6, "crypto_register_skciphers" },
	{ 0xdcb764ad, "memset" },
	{ 0x4fa63a2f, "skcipher_walk_done" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe2394cd7, "crypto_unregister_skciphers" },
	{ 0xf39a6dab, "crypto_alloc_shash" },
	{ 0x80a095d8, "scatterwalk_ffwd" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "aes-ce-cipher,libaes");

MODULE_ALIAS("cpu:type:*:feature:*0003*");

MODULE_INFO(srcversion, "557DCC0BC0B35BE3163605D");
