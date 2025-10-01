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
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0xd2d80c01, "release_sock" },
	{ 0xcae2603, "af_alg_accept" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x734e1de6, "crypto_ahash_export" },
	{ 0x995d3454, "crypto_ahash_import" },
	{ 0x79177080, "sock_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0x375aa078, "crypto_ahash_setkey" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xf021ef55, "crypto_alloc_ahash" },
	{ 0xa8ada964, "af_alg_unregister_type" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7b1bcd34, "sock_kzfree_s" },
	{ 0x2932c1c6, "sock_kfree_s" },
	{ 0xd8212f5a, "af_alg_release_parent" },
	{ 0xaf1d87f3, "iov_iter_npages" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x4b80802b, "extract_iter_to_sg" },
	{ 0x838aef8, "crypto_ahash_update" },
	{ 0x634264a9, "af_alg_free_sg" },
	{ 0xe798fba6, "crypto_ahash_init" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0xafdf5160, "crypto_ahash_finup" },
	{ 0xb73b5874, "crypto_ahash_digest" },
	{ 0x95988557, "crypto_ahash_final" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0xea964c92, "af_alg_release" },
	{ 0x9252cbd2, "sock_no_bind" },
	{ 0x15fcbdad, "sock_no_connect" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0x85988b5f, "sock_no_getname" },
	{ 0x57090976, "sock_no_ioctl" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "C0D92FD026BD8DAB5C01683");
