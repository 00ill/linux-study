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

KSYMTAB_FUNC(ebt_register_template, "", "");
KSYMTAB_FUNC(ebt_unregister_template, "", "");
KSYMTAB_FUNC(ebt_unregister_table_pre_exit, "", "");
KSYMTAB_FUNC(ebt_register_table, "", "");
KSYMTAB_FUNC(ebt_unregister_table, "", "");
KSYMTAB_FUNC(ebt_do_table, "", "");

SYMBOL_CRC(ebt_register_template, 0x2c30f801, "");
SYMBOL_CRC(ebt_unregister_template, 0xb98048d0, "");
SYMBOL_CRC(ebt_unregister_table_pre_exit, 0xd1f82f87, "");
SYMBOL_CRC(ebt_register_table, 0x795af6db, "");
SYMBOL_CRC(ebt_unregister_table, 0x119f160f, "");
SYMBOL_CRC(ebt_do_table, 0x9f9a173e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4829a47e, "memcpy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0xf32c8a52, "xt_find_match" },
	{ 0x9d9e8944, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x54180bf3, "xt_check_match" },
	{ 0x50076cff, "xt_request_find_target" },
	{ 0x4037d922, "xt_check_target" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa243d05d, "nf_unregister_net_hooks" },
	{ 0x80869f39, "xt_register_target" },
	{ 0x4ecddc94, "nf_register_sockopt" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xa7be890d, "nf_unregister_sockopt" },
	{ 0x4fce08d7, "xt_unregister_target" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0xdcb764ad, "memset" },
	{ 0xda2c3ddf, "xt_compat_target_offset" },
	{ 0xa39721f, "xt_request_find_match" },
	{ 0x41cef651, "xt_compat_match_offset" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x999e8297, "vfree" },
	{ 0x5afc722e, "__audit_log_nfcfg" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x618911fc, "numa_node" },
	{ 0x838eb641, "vmalloc_node_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x25f2b2c8, "kmemdup_array" },
	{ 0x6fb0cf6f, "nf_register_net_hooks" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2c4f2e35, "__vmalloc_noprof" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0xac27974a, "ns_capable" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "837FE815A81F6BE599BCC22");
