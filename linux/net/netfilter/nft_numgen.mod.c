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
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5b221cd, "nft_register_expr" },
	{ 0x7a5a9a2e, "nft_reg_track_cancel" },
	{ 0x34cab143, "nft_dump_register" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5656375e, "nft_parse_register_store" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "9C147B7957FE911C29BDAEC");
