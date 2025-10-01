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
	{ 0xcbfd1d19, "nft_register_obj" },
	{ 0x5b221cd, "nft_register_expr" },
	{ 0x90fe0bd5, "nft_unregister_obj" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x913d54a5, "nft_obj_notify" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x48e9a84, "nla_put_64bit" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "EFAABFF44A1C1891A0B471B");
