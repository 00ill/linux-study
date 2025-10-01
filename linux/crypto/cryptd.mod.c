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

KSYMTAB_FUNC(cryptd_alloc_skcipher, "_gpl", "");
KSYMTAB_FUNC(cryptd_skcipher_child, "_gpl", "");
KSYMTAB_FUNC(cryptd_skcipher_queued, "_gpl", "");
KSYMTAB_FUNC(cryptd_free_skcipher, "_gpl", "");
KSYMTAB_FUNC(cryptd_alloc_ahash, "_gpl", "");
KSYMTAB_FUNC(cryptd_ahash_child, "_gpl", "");
KSYMTAB_FUNC(cryptd_shash_desc, "_gpl", "");
KSYMTAB_FUNC(cryptd_ahash_queued, "_gpl", "");
KSYMTAB_FUNC(cryptd_free_ahash, "_gpl", "");
KSYMTAB_FUNC(cryptd_alloc_aead, "_gpl", "");
KSYMTAB_FUNC(cryptd_aead_child, "_gpl", "");
KSYMTAB_FUNC(cryptd_aead_queued, "_gpl", "");
KSYMTAB_FUNC(cryptd_free_aead, "_gpl", "");

SYMBOL_CRC(cryptd_alloc_skcipher, 0x5cd1e83f, "_gpl");
SYMBOL_CRC(cryptd_skcipher_child, 0x96878200, "_gpl");
SYMBOL_CRC(cryptd_skcipher_queued, 0x349527b8, "_gpl");
SYMBOL_CRC(cryptd_free_skcipher, 0xecc0abd0, "_gpl");
SYMBOL_CRC(cryptd_alloc_ahash, 0x4da8bb2e, "_gpl");
SYMBOL_CRC(cryptd_ahash_child, 0xe7e20c94, "_gpl");
SYMBOL_CRC(cryptd_shash_desc, 0xddf5a40e, "_gpl");
SYMBOL_CRC(cryptd_ahash_queued, 0x6f76383b, "_gpl");
SYMBOL_CRC(cryptd_free_ahash, 0x0cc26a90, "_gpl");
SYMBOL_CRC(cryptd_alloc_aead, 0x73772f0c, "_gpl");
SYMBOL_CRC(cryptd_aead_child, 0x1d29f093, "_gpl");
SYMBOL_CRC(cryptd_aead_queued, 0x27490b24, "_gpl");
SYMBOL_CRC(cryptd_free_aead, 0xcce23480, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcdb613cf, "crypto_alloc_skcipher" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf021ef55, "crypto_alloc_ahash" },
	{ 0xfb1e5d5c, "crypto_alloc_aead" },
	{ 0xeadbccbc, "crypto_skcipher_setkey" },
	{ 0xced1d723, "crypto_spawn_tfm2" },
	{ 0xd56f6291, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x54805a08, "crypto_shash_setkey" },
	{ 0xabfb730c, "crypto_shash_import" },
	{ 0x411a4273, "crypto_shash_export" },
	{ 0x4905e968, "crypto_clone_shash" },
	{ 0xefe669ed, "crypto_aead_setauthsize" },
	{ 0x44c4c527, "crypto_aead_setkey" },
	{ 0x46bcbf69, "crypto_dequeue_request" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x72f87ec, "crypto_unregister_template" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x685cfb74, "crypto_register_template" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc202c4a6, "crypto_enqueue_request" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x1435a63c, "crypto_grab_skcipher" },
	{ 0x9de6ef5e, "crypto_grab_aead" },
	{ 0x334c9ade, "crypto_grab_shash" },
	{ 0xece4db2, "shash_no_setkey" },
	{ 0xacecac09, "ahash_register_instance" },
	{ 0xe276643a, "skcipher_register_instance" },
	{ 0xd298d82d, "aead_register_instance" },
	{ 0x256958c5, "crypto_skcipher_decrypt" },
	{ 0x82beb0e5, "crypto_skcipher_encrypt" },
	{ 0x3d577ca3, "shash_ahash_digest" },
	{ 0x3b6b3e29, "shash_ahash_finup" },
	{ 0xb19aaf1e, "crypto_shash_final" },
	{ 0x822cb098, "shash_ahash_update" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "599213A1F76BD65EF8E49D5");
