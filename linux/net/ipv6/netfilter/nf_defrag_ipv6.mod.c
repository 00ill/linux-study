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

KSYMTAB_FUNC(nf_defrag_ipv6_enable, "_gpl", "");
KSYMTAB_FUNC(nf_defrag_ipv6_disable, "_gpl", "");
KSYMTAB_FUNC(nf_ct_frag6_gather, "_gpl", "");

SYMBOL_CRC(nf_defrag_ipv6_enable, 0x29df7741, "_gpl");
SYMBOL_CRC(nf_defrag_ipv6_disable, 0x6f25365e, "_gpl");
SYMBOL_CRC(nf_ct_frag6_gather, 0xe593cc70, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xac4038d6, "proc_dointvec_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xcc32c0b8, "inet_frag_queue_insert" },
	{ 0x667e27ab, "inet_frags_init" },
	{ 0x31e3accf, "inet_frag_pull_head" },
	{ 0x37a0cba, "kfree" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x7861b279, "register_net_sysctl_sz" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd020f7ae, "inet_frag_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x69bb6790, "ipv6_skip_exthdr" },
	{ 0xc874271f, "inet_frag_reasm_finish" },
	{ 0x6fb0cf6f, "nf_register_net_hooks" },
	{ 0x6dc6116f, "fqdir_init" },
	{ 0x1a6ab775, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xbde17400, "dev_get_by_index_rcu" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd90a0a6b, "inet_frags_fini" },
	{ 0x896c49d8, "proc_doulongvec_minmax" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xa243d05d, "nf_unregister_net_hooks" },
	{ 0x1647b365, "nf_defrag_v6_hook" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xc9124148, "__icmpv6_send" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xab8fb3f2, "inet_frag_reasm_prepare" },
	{ 0xa6b83a12, "inet_frag_find" },
	{ 0xaf1140ed, "fqdir_exit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4795ed98, "pskb_trim_rcsum_slow" },
	{ 0x35361669, "inet_frag_kill" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5907936C0646F037D3A25E1");
