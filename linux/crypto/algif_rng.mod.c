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
	{ 0x79177080, "sock_kmalloc" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x2932c1c6, "sock_kfree_s" },
	{ 0xd8212f5a, "af_alg_release_parent" },
	{ 0x4a34c44d, "crypto_rng_reset" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xa8ada964, "af_alg_unregister_type" },
	{ 0xdcb764ad, "memset" },
	{ 0x66276d18, "_copy_to_iter" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x53428a1b, "crypto_alloc_rng" },
	{ 0x37a0cba, "kfree" },
	{ 0xea964c92, "af_alg_release" },
	{ 0x9252cbd2, "sock_no_bind" },
	{ 0x15fcbdad, "sock_no_connect" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x85988b5f, "sock_no_getname" },
	{ 0x57090976, "sock_no_ioctl" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0x52faf957, "sock_no_sendmsg" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "60F33DDB1E018955FE41B21");
