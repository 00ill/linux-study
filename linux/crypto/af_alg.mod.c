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

KSYMTAB_FUNC(af_alg_register_type, "_gpl", "");
KSYMTAB_FUNC(af_alg_unregister_type, "_gpl", "");
KSYMTAB_FUNC(af_alg_release, "_gpl", "");
KSYMTAB_FUNC(af_alg_release_parent, "_gpl", "");
KSYMTAB_FUNC(af_alg_accept, "_gpl", "");
KSYMTAB_FUNC(af_alg_free_sg, "_gpl", "");
KSYMTAB_FUNC(af_alg_count_tsgl, "_gpl", "");
KSYMTAB_FUNC(af_alg_pull_tsgl, "_gpl", "");
KSYMTAB_FUNC(af_alg_wmem_wakeup, "_gpl", "");
KSYMTAB_FUNC(af_alg_wait_for_data, "_gpl", "");
KSYMTAB_FUNC(af_alg_sendmsg, "_gpl", "");
KSYMTAB_FUNC(af_alg_free_resources, "_gpl", "");
KSYMTAB_FUNC(af_alg_async_cb, "_gpl", "");
KSYMTAB_FUNC(af_alg_poll, "_gpl", "");
KSYMTAB_FUNC(af_alg_alloc_areq, "_gpl", "");
KSYMTAB_FUNC(af_alg_get_rsgl, "_gpl", "");

SYMBOL_CRC(af_alg_register_type, 0x0a0df321, "_gpl");
SYMBOL_CRC(af_alg_unregister_type, 0xa8ada964, "_gpl");
SYMBOL_CRC(af_alg_release, 0xea964c92, "_gpl");
SYMBOL_CRC(af_alg_release_parent, 0xd8212f5a, "_gpl");
SYMBOL_CRC(af_alg_accept, 0x0cae2603, "_gpl");
SYMBOL_CRC(af_alg_free_sg, 0x634264a9, "_gpl");
SYMBOL_CRC(af_alg_count_tsgl, 0x4827566a, "_gpl");
SYMBOL_CRC(af_alg_pull_tsgl, 0xbc28dac4, "_gpl");
SYMBOL_CRC(af_alg_wmem_wakeup, 0xe5e83e2d, "_gpl");
SYMBOL_CRC(af_alg_wait_for_data, 0x7cc1588b, "_gpl");
SYMBOL_CRC(af_alg_sendmsg, 0xe9c85e4f, "_gpl");
SYMBOL_CRC(af_alg_free_resources, 0x9f1efb04, "_gpl");
SYMBOL_CRC(af_alg_async_cb, 0x27e92408, "_gpl");
SYMBOL_CRC(af_alg_poll, 0x1eb3ce81, "_gpl");
SYMBOL_CRC(af_alg_alloc_areq, 0xb8681e89, "_gpl");
SYMBOL_CRC(af_alg_get_rsgl, 0x33161426, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x57bc19d2, "down_write" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xce807a25, "up_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0xa813464, "sock_init_data" },
	{ 0xbf30d9ff, "unpin_user_page" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x79177080, "sock_kmalloc" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x4b80802b, "extract_iter_to_sg" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2932c1c6, "sock_kfree_s" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0xa8707ce6, "proto_register" },
	{ 0xb706a33f, "sock_register" },
	{ 0x26fb156, "proto_unregister" },
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x9d9e8944, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1fea2ec6, "security_sock_graft" },
	{ 0xf6fa22b8, "security_sk_clone" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x76df5145, "sock_wake_async" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7b1bcd34, "sock_kzfree_s" },
	{ 0x1dc6c93b, "lookup_user_key" },
	{ 0xce33c7, "key_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xa26dbdbf, "alloc_pages_noprof" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x15fcbdad, "sock_no_connect" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0x85988b5f, "sock_no_getname" },
	{ 0x57090976, "sock_no_ioctl" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x625c6bab, "sock_no_shutdown" },
	{ 0x52faf957, "sock_no_sendmsg" },
	{ 0xfbb08405, "sock_no_recvmsg" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "592355F9F2EC861574E237A");
