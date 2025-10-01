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
	{ 0x5b221cd, "nft_register_expr" },
	{ 0xcbfd1d19, "nft_register_obj" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0xb47fd343, "metadata_dst_free" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x7633854f, "nft_reg_track_update" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x34cab143, "nft_dump_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5656375e, "nft_parse_register_store" },
	{ 0x90fe0bd5, "nft_unregister_obj" },
	{ 0xdcb764ad, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0x4829a47e, "memcpy" },
	{ 0xba75ce42, "metadata_dst_alloc" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "943967436F3F5DDA0CA35CC");
