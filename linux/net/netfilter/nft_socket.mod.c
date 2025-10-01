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
	{ 0x7633854f, "nft_reg_track_update" },
	{ 0x95bf715c, "nft_expr_reduce_bitwise" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x6ece03a9, "nla_put" },
	{ 0x34cab143, "nft_dump_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf7cfeffe, "nft_unregister_expr" },
	{ 0x9f5888a0, "cgroup_get_from_path" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5656375e, "nft_parse_register_store" },
	{ 0x4a2deada, "nf_sk_lookup_slow_v4" },
	{ 0x525928de, "sock_gen_put" },
	{ 0xcd4a4bb3, "nf_sk_lookup_slow_v6" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_socket_ipv4,nf_socket_ipv6");


MODULE_INFO(srcversion, "F52BB69E825763E1A6D4399");
