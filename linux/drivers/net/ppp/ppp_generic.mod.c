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

KSYMTAB_FUNC(ppp_register_net_channel, "", "");
KSYMTAB_FUNC(ppp_register_channel, "", "");
KSYMTAB_FUNC(ppp_unregister_channel, "", "");
KSYMTAB_FUNC(ppp_channel_index, "", "");
KSYMTAB_FUNC(ppp_unit_number, "", "");
KSYMTAB_FUNC(ppp_dev_name, "", "");
KSYMTAB_FUNC(ppp_input, "", "");
KSYMTAB_FUNC(ppp_input_error, "", "");
KSYMTAB_FUNC(ppp_output_wakeup, "", "");
KSYMTAB_FUNC(ppp_register_compressor, "", "");
KSYMTAB_FUNC(ppp_unregister_compressor, "", "");

SYMBOL_CRC(ppp_register_net_channel, 0x8af44010, "");
SYMBOL_CRC(ppp_register_channel, 0x95f89aaf, "");
SYMBOL_CRC(ppp_unregister_channel, 0xd8086e70, "");
SYMBOL_CRC(ppp_channel_index, 0x3fc14852, "");
SYMBOL_CRC(ppp_unit_number, 0x8c866a5e, "");
SYMBOL_CRC(ppp_dev_name, 0xf6ee5980, "");
SYMBOL_CRC(ppp_input, 0xeca35a76, "");
SYMBOL_CRC(ppp_input_error, 0x467885ff, "");
SYMBOL_CRC(ppp_output_wakeup, 0xcf359a61, "");
SYMBOL_CRC(ppp_register_compressor, 0x2eb04ee3, "");
SYMBOL_CRC(ppp_unregister_compressor, 0xefdad58e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9d9e8944, "module_put" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8502868b, "netdev_err" },
	{ 0x2a928918, "slhc_free" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x976d9872, "bpf_prog_destroy" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x35decc18, "unregister_netdevice_queue" },
	{ 0xac27974a, "ns_capable" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xfc386a5, "bpf_prog_create" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b390004, "register_pernet_device" },
	{ 0x418c10ec, "__register_chrdev" },
	{ 0xa42d469b, "class_register" },
	{ 0x9d12f712, "rtnl_link_register" },
	{ 0x4ae7394, "device_create" },
	{ 0x84fc77f4, "unregister_pernet_device" },
	{ 0x7143a676, "class_unregister" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc26cc301, "iov_iter_init" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x20978fb9, "idr_find" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6c0bf9a5, "netdev_name_in_use" },
	{ 0xcf015fa5, "register_netdevice" },
	{ 0xec712589, "fget" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xacceb7d8, "fput" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x44162dce, "__put_net" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x33b58322, "skb_push" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xdcdc0040, "slhc_compress" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xc3665eed, "netdev_printk" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdaff9136, "skb_scrub_packet" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0x74b8e674, "slhc_toss" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0xf36f42a9, "slhc_uncompress" },
	{ 0x43f9ebc8, "slhc_remember" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x594477ee, "skb_pull_rcsum" },
	{ 0x50d00458, "netif_rx" },
	{ 0x15f90688, "slhc_init" },
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x295427ca, "noop_llseek" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "79D999B2B7DF3B00FCFCBB9");
