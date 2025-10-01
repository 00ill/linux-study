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
	{ 0xa0df321, "af_alg_register_type" },
	{ 0xdcb764ad, "memset" },
	{ 0x82beb0e5, "crypto_skcipher_encrypt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe9c85e4f, "af_alg_sendmsg" },
	{ 0xefe669ed, "crypto_aead_setauthsize" },
	{ 0xbc28dac4, "af_alg_pull_tsgl" },
	{ 0x7b1bcd34, "sock_kzfree_s" },
	{ 0x2932c1c6, "sock_kfree_s" },
	{ 0xd8212f5a, "af_alg_release_parent" },
	{ 0x79177080, "sock_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x44c4c527, "crypto_aead_setkey" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8ada964, "af_alg_unregister_type" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xfb1e5d5c, "crypto_alloc_aead" },
	{ 0x65664ab5, "crypto_get_default_null_skcipher" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x7cc1588b, "af_alg_wait_for_data" },
	{ 0xb8681e89, "af_alg_alloc_areq" },
	{ 0x33161426, "af_alg_get_rsgl" },
	{ 0x9f1efb04, "af_alg_free_resources" },
	{ 0xe5e83e2d, "af_alg_wmem_wakeup" },
	{ 0xd2d80c01, "release_sock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x27e92408, "af_alg_async_cb" },
	{ 0x30cd443b, "crypto_aead_encrypt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0xbddb0e1d, "crypto_aead_decrypt" },
	{ 0x4827566a, "af_alg_count_tsgl" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf33af8b9, "sk_free" },
	{ 0xea964c92, "af_alg_release" },
	{ 0x9252cbd2, "sock_no_bind" },
	{ 0x15fcbdad, "sock_no_connect" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x85988b5f, "sock_no_getname" },
	{ 0x1eb3ce81, "af_alg_poll" },
	{ 0x57090976, "sock_no_ioctl" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "af_alg,crypto_null");


MODULE_INFO(srcversion, "E20F877B9222CEFEBFE57C2");
