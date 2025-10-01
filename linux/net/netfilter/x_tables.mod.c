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

KSYMTAB_FUNC(xt_register_target, "", "");
KSYMTAB_FUNC(xt_unregister_target, "", "");
KSYMTAB_FUNC(xt_register_targets, "", "");
KSYMTAB_FUNC(xt_unregister_targets, "", "");
KSYMTAB_FUNC(xt_register_match, "", "");
KSYMTAB_FUNC(xt_unregister_match, "", "");
KSYMTAB_FUNC(xt_register_matches, "", "");
KSYMTAB_FUNC(xt_unregister_matches, "", "");
KSYMTAB_FUNC(xt_find_match, "", "");
KSYMTAB_FUNC(xt_request_find_match, "_gpl", "");
KSYMTAB_FUNC(xt_request_find_target, "_gpl", "");
KSYMTAB_FUNC(xt_data_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_match_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_target_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_find_revision, "_gpl", "");
KSYMTAB_FUNC(xt_check_proc_name, "", "");
KSYMTAB_FUNC(xt_check_match, "_gpl", "");
KSYMTAB_FUNC(xt_check_table_hooks, "", "");
KSYMTAB_FUNC(xt_compat_add_offset, "_gpl", "");
KSYMTAB_FUNC(xt_compat_flush_offsets, "_gpl", "");
KSYMTAB_FUNC(xt_compat_calc_jump, "_gpl", "");
KSYMTAB_FUNC(xt_compat_init_offsets, "", "");
KSYMTAB_FUNC(xt_compat_match_offset, "_gpl", "");
KSYMTAB_FUNC(xt_compat_match_from_user, "_gpl", "");
KSYMTAB_FUNC(xt_compat_match_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_compat_check_entry_offsets, "", "");
KSYMTAB_FUNC(xt_check_entry_offsets, "", "");
KSYMTAB_FUNC(xt_alloc_entry_offsets, "", "");
KSYMTAB_FUNC(xt_find_jump_offset, "", "");
KSYMTAB_FUNC(xt_check_target, "_gpl", "");
KSYMTAB_FUNC(xt_copy_counters, "_gpl", "");
KSYMTAB_FUNC(xt_compat_target_offset, "_gpl", "");
KSYMTAB_FUNC(xt_compat_target_from_user, "_gpl", "");
KSYMTAB_FUNC(xt_compat_target_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_alloc_table_info, "", "");
KSYMTAB_FUNC(xt_free_table_info, "", "");
KSYMTAB_FUNC(xt_find_table, "", "");
KSYMTAB_FUNC(xt_find_table_lock, "_gpl", "");
KSYMTAB_FUNC(xt_request_find_table_lock, "_gpl", "");
KSYMTAB_FUNC(xt_table_unlock, "_gpl", "");
KSYMTAB_FUNC(xt_compat_lock, "_gpl", "");
KSYMTAB_FUNC(xt_compat_unlock, "_gpl", "");
KSYMTAB_DATA(xt_recseq, "_gpl", "");
KSYMTAB_DATA(xt_tee_enabled, "_gpl", "");
KSYMTAB_FUNC(xt_counters_alloc, "", "");
KSYMTAB_FUNC(xt_replace_table, "_gpl", "");
KSYMTAB_FUNC(xt_register_table, "_gpl", "");
KSYMTAB_FUNC(xt_unregister_table, "_gpl", "");
KSYMTAB_FUNC(xt_hook_ops_alloc, "_gpl", "");
KSYMTAB_FUNC(xt_register_template, "_gpl", "");
KSYMTAB_FUNC(xt_unregister_template, "_gpl", "");
KSYMTAB_FUNC(xt_proto_init, "_gpl", "");
KSYMTAB_FUNC(xt_proto_fini, "_gpl", "");
KSYMTAB_FUNC(xt_percpu_counter_alloc, "_gpl", "");
KSYMTAB_FUNC(xt_percpu_counter_free, "_gpl", "");

SYMBOL_CRC(xt_register_target, 0x80869f39, "");
SYMBOL_CRC(xt_unregister_target, 0x4fce08d7, "");
SYMBOL_CRC(xt_register_targets, 0x0f4a0aaa, "");
SYMBOL_CRC(xt_unregister_targets, 0x93e774d2, "");
SYMBOL_CRC(xt_register_match, 0xd1d1c7ef, "");
SYMBOL_CRC(xt_unregister_match, 0xb1a6bfbc, "");
SYMBOL_CRC(xt_register_matches, 0xfd7f342e, "");
SYMBOL_CRC(xt_unregister_matches, 0x5907e5ea, "");
SYMBOL_CRC(xt_find_match, 0xf32c8a52, "");
SYMBOL_CRC(xt_request_find_match, 0x0a39721f, "_gpl");
SYMBOL_CRC(xt_request_find_target, 0x50076cff, "_gpl");
SYMBOL_CRC(xt_data_to_user, 0x7bce4603, "_gpl");
SYMBOL_CRC(xt_match_to_user, 0x5d10b65f, "_gpl");
SYMBOL_CRC(xt_target_to_user, 0xdc6e35a9, "_gpl");
SYMBOL_CRC(xt_find_revision, 0xddf68fc6, "_gpl");
SYMBOL_CRC(xt_check_proc_name, 0x48012e28, "");
SYMBOL_CRC(xt_check_match, 0x54180bf3, "_gpl");
SYMBOL_CRC(xt_check_table_hooks, 0x3bf9d084, "");
SYMBOL_CRC(xt_compat_add_offset, 0x823edea5, "_gpl");
SYMBOL_CRC(xt_compat_flush_offsets, 0x04e27719, "_gpl");
SYMBOL_CRC(xt_compat_calc_jump, 0xc7fae024, "_gpl");
SYMBOL_CRC(xt_compat_init_offsets, 0x50873741, "");
SYMBOL_CRC(xt_compat_match_offset, 0x41cef651, "_gpl");
SYMBOL_CRC(xt_compat_match_from_user, 0x58f9762a, "_gpl");
SYMBOL_CRC(xt_compat_match_to_user, 0x4ca32068, "_gpl");
SYMBOL_CRC(xt_compat_check_entry_offsets, 0xa25fc115, "");
SYMBOL_CRC(xt_check_entry_offsets, 0xd87ae60d, "");
SYMBOL_CRC(xt_alloc_entry_offsets, 0x0d7f5fcd, "");
SYMBOL_CRC(xt_find_jump_offset, 0xfef779fa, "");
SYMBOL_CRC(xt_check_target, 0x4037d922, "_gpl");
SYMBOL_CRC(xt_copy_counters, 0xf6abeb06, "_gpl");
SYMBOL_CRC(xt_compat_target_offset, 0xda2c3ddf, "_gpl");
SYMBOL_CRC(xt_compat_target_from_user, 0x8e2ba39d, "_gpl");
SYMBOL_CRC(xt_compat_target_to_user, 0xb116ff7f, "_gpl");
SYMBOL_CRC(xt_alloc_table_info, 0x977fd4bf, "");
SYMBOL_CRC(xt_free_table_info, 0xe204e042, "");
SYMBOL_CRC(xt_find_table, 0x8f0c8ff1, "");
SYMBOL_CRC(xt_find_table_lock, 0x5257d39f, "_gpl");
SYMBOL_CRC(xt_request_find_table_lock, 0x52f1d118, "_gpl");
SYMBOL_CRC(xt_table_unlock, 0xd2e3cb7c, "_gpl");
SYMBOL_CRC(xt_compat_lock, 0xa7c94f1d, "_gpl");
SYMBOL_CRC(xt_compat_unlock, 0xd1e246a2, "_gpl");
SYMBOL_CRC(xt_recseq, 0x807d2b2c, "_gpl");
SYMBOL_CRC(xt_tee_enabled, 0xd3fcc511, "_gpl");
SYMBOL_CRC(xt_counters_alloc, 0xcb3e91cc, "");
SYMBOL_CRC(xt_replace_table, 0xd0e84a36, "_gpl");
SYMBOL_CRC(xt_register_table, 0xad57c0f2, "_gpl");
SYMBOL_CRC(xt_unregister_table, 0x4d156e02, "_gpl");
SYMBOL_CRC(xt_hook_ops_alloc, 0x5d6dbfb7, "_gpl");
SYMBOL_CRC(xt_register_template, 0xb7d6f7c4, "_gpl");
SYMBOL_CRC(xt_unregister_template, 0x9e616d02, "_gpl");
SYMBOL_CRC(xt_proto_init, 0x6ad4fe1e, "_gpl");
SYMBOL_CRC(xt_proto_fini, 0x36c08323, "_gpl");
SYMBOL_CRC(xt_percpu_counter_alloc, 0x9c995c69, "_gpl");
SYMBOL_CRC(xt_percpu_counter_free, 0xbfacb837, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x349cba85, "strchr" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x999e8297, "vfree" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x9d9e8944, "module_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc68504d7, "__kvmalloc_node_noprof" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x5afc722e, "__audit_log_nfcfg" },
	{ 0x8d732959, "make_kuid" },
	{ 0x796c3d7, "make_kgid" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9ed72da3, "proc_create_net_data" },
	{ 0x9b06f762, "proc_create_seq_private" },
	{ 0x8ec23266, "proc_set_user" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x618911fc, "numa_node" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5F4C901C66705F38097806E");
