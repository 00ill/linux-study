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

KSYMTAB_FUNC(arpt_alloc_initial_table, "_gpl", "");
KSYMTAB_FUNC(arpt_unregister_table_pre_exit, "", "");
KSYMTAB_FUNC(arpt_register_table, "", "");
KSYMTAB_FUNC(arpt_unregister_table, "", "");
KSYMTAB_FUNC(arpt_do_table, "", "");

SYMBOL_CRC(arpt_alloc_initial_table, 0xa76cf33e, "_gpl");
SYMBOL_CRC(arpt_unregister_table_pre_exit, 0x57f633ef, "");
SYMBOL_CRC(arpt_register_table, 0x4db0768f, "");
SYMBOL_CRC(arpt_unregister_table, 0x05bc4a8d, "");
SYMBOL_CRC(arpt_do_table, 0x33578f97, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9d9e8944, "module_put" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4d156e02, "xt_unregister_table" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0x8f0c8ff1, "xt_find_table" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa243d05d, "nf_unregister_net_hooks" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xf4a0aaa, "xt_register_targets" },
	{ 0x4ecddc94, "nf_register_sockopt" },
	{ 0x93e774d2, "xt_unregister_targets" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0xda2c3ddf, "xt_compat_target_offset" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x36c08323, "xt_proto_fini" },
	{ 0x6ad4fe1e, "xt_proto_init" },
	{ 0xa7be890d, "nf_unregister_sockopt" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0x50076cff, "xt_request_find_target" },
	{ 0x4037d922, "xt_check_target" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0xad57c0f2, "xt_register_table" },
	{ 0x25f2b2c8, "kmemdup_array" },
	{ 0x6fb0cf6f, "nf_register_net_hooks" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0x8e2ba39d, "xt_compat_target_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x52f1d118, "xt_request_find_table_lock" },
	{ 0xd2e3cb7c, "xt_table_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xd0e84a36, "xt_replace_table" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x5257d39f, "xt_find_table_lock" },
	{ 0xb116ff7f, "xt_compat_target_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xac27974a, "ns_capable" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdc6e35a9, "xt_target_to_user" },
	{ 0xf6abeb06, "xt_copy_counters" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "C6CDB2217EE96CD73948C63");
