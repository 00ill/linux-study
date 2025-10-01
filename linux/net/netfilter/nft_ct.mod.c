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
	{ 0x90fe0bd5, "nft_unregister_obj" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5eab8ad3, "nf_ct_netns_put" },
	{ 0x23defc63, "nf_ct_netns_get" },
	{ 0x670bf447, "nf_conntrack_helper_put" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x166bc38a, "nf_conntrack_helper_try_module_get" },
	{ 0x38894c29, "__nft_reg_track_cancel" },
	{ 0x34cab143, "nft_dump_register" },
	{ 0x7633854f, "nft_reg_track_update" },
	{ 0x95bf715c, "nft_expr_reduce_bitwise" },
	{ 0x5656375e, "nft_parse_register_store" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x30b59088, "nf_ct_tmpl_alloc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x52dd77fe, "nf_connlabels_put" },
	{ 0x28e3a26c, "nf_connlabels_get" },
	{ 0x27187ea8, "nft_parse_register_load" },
	{ 0x1a6ab775, "init_net" },
	{ 0x9029198e, "nf_ct_helper_ext_add" },
	{ 0x76e331cf, "nf_ct_expect_alloc" },
	{ 0xfeb7f1cc, "nf_ct_expect_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0x575674e8, "nf_connlabels_replace" },
	{ 0x3a4114ea, "nf_ct_ecache_ext_add" },
	{ 0x4829a47e, "memcpy" },
	{ 0xecf5b4af, "nf_ct_get_id" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdcb764ad, "memset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "F1E5146A94CEDCBFFCF79AE");
