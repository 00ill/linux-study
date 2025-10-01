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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc35aaa13, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x46debcc6, "crypto_unregister_rngs" },
	{ 0xdcb764ad, "memset" },
	{ 0x3a4f9d28, "rng_is_initialized" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x828b8f68, "crypto_shash_update" },
	{ 0xb19aaf1e, "crypto_shash_final" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4829a47e, "memcpy" },
	{ 0x363d7d9, "crypto_register_rngs" },
	{ 0x54805a08, "crypto_shash_setkey" },
	{ 0xf39a6dab, "crypto_alloc_shash" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x53428a1b, "crypto_alloc_rng" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F04451D63D069666ED45F4B");
