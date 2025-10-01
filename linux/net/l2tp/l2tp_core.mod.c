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

KSYMTAB_FUNC(l2tp_sk_to_tunnel, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_put, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_put, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_get, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_get_next, "_gpl", "");
KSYMTAB_FUNC(l2tp_v3_session_get, "_gpl", "");
KSYMTAB_FUNC(l2tp_v2_session_get, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_get, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_get_next, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_get_by_ifname, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_register, "_gpl", "");
KSYMTAB_FUNC(l2tp_recv_common, "_gpl", "");
KSYMTAB_FUNC(l2tp_udp_encap_recv, "_gpl", "");
KSYMTAB_FUNC(l2tp_xmit_skb, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_create, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_register, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_delete, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_delete, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_set_header_len, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_create, "_gpl", "");

SYMBOL_CRC(l2tp_sk_to_tunnel, 0xc4b0461a, "_gpl");
SYMBOL_CRC(l2tp_tunnel_put, 0x1117aeaf, "_gpl");
SYMBOL_CRC(l2tp_session_put, 0xd3f109ff, "_gpl");
SYMBOL_CRC(l2tp_tunnel_get, 0xb8b52bd2, "_gpl");
SYMBOL_CRC(l2tp_tunnel_get_next, 0x2da4728e, "_gpl");
SYMBOL_CRC(l2tp_v3_session_get, 0x4aff2dd4, "_gpl");
SYMBOL_CRC(l2tp_v2_session_get, 0xca6b2122, "_gpl");
SYMBOL_CRC(l2tp_session_get, 0x844c1665, "_gpl");
SYMBOL_CRC(l2tp_session_get_next, 0xe83e33f8, "_gpl");
SYMBOL_CRC(l2tp_session_get_by_ifname, 0x21885d6c, "_gpl");
SYMBOL_CRC(l2tp_session_register, 0x50e77ca9, "_gpl");
SYMBOL_CRC(l2tp_recv_common, 0xdf30242f, "_gpl");
SYMBOL_CRC(l2tp_udp_encap_recv, 0x094c5440, "_gpl");
SYMBOL_CRC(l2tp_xmit_skb, 0x9fdfb96f, "_gpl");
SYMBOL_CRC(l2tp_tunnel_create, 0xb9398153, "_gpl");
SYMBOL_CRC(l2tp_tunnel_register, 0x971e2b4e, "_gpl");
SYMBOL_CRC(l2tp_tunnel_delete, 0x0c341c37, "_gpl");
SYMBOL_CRC(l2tp_session_delete, 0x1850d759, "_gpl");
SYMBOL_CRC(l2tp_session_set_header_len, 0x2a7346bb, "_gpl");
SYMBOL_CRC(l2tp_session_create, 0xd068eaec, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x564c900c, "bpf_trace_run1" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc1b89cb8, "sk_error_report" },
	{ 0xbf6c2533, "ip_icmp_error" },
	{ 0xa7b9e063, "ipv6_icmp_error" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x98800de0, "udp_sock_create6" },
	{ 0xa3e70c7e, "kernel_sock_shutdown" },
	{ 0xcebd4329, "sock_release" },
	{ 0x93482612, "sock_create_kern" },
	{ 0x2b8298a9, "kernel_bind" },
	{ 0xafaba172, "kernel_connect" },
	{ 0x96263940, "udp_sock_create4" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x20978fb9, "idr_find" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xb920d0f6, "udp_set_csum" },
	{ 0x61bdda08, "ip_queue_xmit" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xcd27abad, "udp6_set_csum" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc1460b60, "inet6_csk_xmit" },
	{ 0xe7d6f8b1, "dst_release" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xf33af8b9, "sk_free" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x33e54082, "sockfd_lookup" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xd2d80c01, "release_sock" },
	{ 0xacceb7d8, "fput" },
	{ 0xdcb764ad, "memset" },
	{ 0x56c9ef33, "setup_udp_tunnel_sock" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ipv6,ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "DED7F0743002865D2427A3C");
