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
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5b221cd, "nft_register_expr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x5eab8ad3, "nf_ct_netns_put" },
	{ 0xb667ae47, "nf_tables_deactivate_flowtable" },
	{ 0xbd1414b3, "nft_flowtable_lookup" },
	{ 0x23defc63, "nf_ct_netns_get" },
	{ 0x5f3d6fe7, "nf_flow_table_cleanup" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6ece03a9, "nla_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x886df65, "dev_fill_forward_path" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc9ddfdb8, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c0e137d, "nf_route" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x3ccf381, "flow_offload_alloc" },
	{ 0xc96e2ac6, "flow_offload_route_init" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xca09832c, "flow_offload_add" },
	{ 0xeadbaf98, "flow_offload_free" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack,nf_flow_table");


MODULE_INFO(srcversion, "346364B84A9A84DF09E1734");
