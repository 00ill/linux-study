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

KSYMTAB_FUNC(register_atm_ioctl, "", "");
KSYMTAB_FUNC(deregister_atm_ioctl, "", "");
KSYMTAB_DATA(vcc_hash, "", "");
KSYMTAB_DATA(vcc_sklist_lock, "", "");
KSYMTAB_FUNC(vcc_insert_socket, "", "");
KSYMTAB_FUNC(vcc_release_async, "", "");
KSYMTAB_FUNC(vcc_process_recv_queue, "", "");
KSYMTAB_FUNC(atm_dev_signal_change, "", "");
KSYMTAB_FUNC(atm_dev_release_vccs, "", "");
KSYMTAB_FUNC(register_atmdevice_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_atmdevice_notifier, "_gpl", "");
KSYMTAB_FUNC(atm_charge, "", "");
KSYMTAB_FUNC(atm_alloc_charge, "", "");
KSYMTAB_FUNC(atm_pcr_goal, "", "");
KSYMTAB_FUNC(sonet_copy_stats, "", "");
KSYMTAB_FUNC(sonet_subtract_stats, "", "");
KSYMTAB_FUNC(atm_init_aal5, "", "");
KSYMTAB_FUNC(atm_dev_lookup, "", "");
KSYMTAB_FUNC(atm_dev_register, "", "");
KSYMTAB_FUNC(atm_dev_deregister, "", "");
KSYMTAB_DATA(atm_proc_root, "", "");

SYMBOL_CRC(register_atm_ioctl, 0xa7c1d097, "");
SYMBOL_CRC(deregister_atm_ioctl, 0xb0a51902, "");
SYMBOL_CRC(vcc_hash, 0x2cc2d52d, "");
SYMBOL_CRC(vcc_sklist_lock, 0x44c6e633, "");
SYMBOL_CRC(vcc_insert_socket, 0x350bbf2d, "");
SYMBOL_CRC(vcc_release_async, 0xbfdccc75, "");
SYMBOL_CRC(vcc_process_recv_queue, 0x6d82edfd, "");
SYMBOL_CRC(atm_dev_signal_change, 0xb9fe9192, "");
SYMBOL_CRC(atm_dev_release_vccs, 0x4fe14049, "");
SYMBOL_CRC(register_atmdevice_notifier, 0xb09faf79, "_gpl");
SYMBOL_CRC(unregister_atmdevice_notifier, 0xcfb6a3da, "_gpl");
SYMBOL_CRC(atm_charge, 0x9da67049, "");
SYMBOL_CRC(atm_alloc_charge, 0xb02ae09f, "");
SYMBOL_CRC(atm_pcr_goal, 0xf49bc67a, "");
SYMBOL_CRC(sonet_copy_stats, 0xaa024146, "");
SYMBOL_CRC(sonet_subtract_stats, 0x9feaf287, "");
SYMBOL_CRC(atm_init_aal5, 0x2c81c5d3, "");
SYMBOL_CRC(atm_dev_lookup, 0xd2dd1a29, "");
SYMBOL_CRC(atm_dev_register, 0xd1dc9ca3, "");
SYMBOL_CRC(atm_dev_deregister, 0x59f57bed, "");
SYMBOL_CRC(atm_proc_root, 0x4443d399, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x8fa1a568, "skb_free_datagram" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0x906bb227, "proc_create_data" },
	{ 0x1b94c15e, "remove_proc_subtree" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x26fb156, "proto_unregister" },
	{ 0x1000e51, "schedule" },
	{ 0xb706a33f, "sock_register" },
	{ 0xc5300d6f, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xa8707ce6, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x9d9e8944, "module_put" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0xee7a3241, "device_create_file" },
	{ 0x1a6ab775, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x295427ca, "noop_llseek" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x76df5145, "sock_wake_async" },
	{ 0x92724e6a, "sock_no_accept" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x691c6355, "sock_no_listen" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x7143a676, "class_unregister" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x2702827f, "lock_sock_nested" },
	{ 0x6a82a79e, "skb_copy_datagram_iter" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0x28b118b6, "device_register" },
	{ 0x73f49957, "device_del" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x28e2e058, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xebf80697, "sock_no_mmap" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf8cf9916, "skb_recv_datagram" },
	{ 0xb53675e6, "seq_write" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9599b0d7, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x83227012, "sock_gettstamp" },
	{ 0x4e8234fa, "_proc_mkdir" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1bd3a117, "send_sig" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xdec5c540, "__seq_puts" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xf85b4e63, "iov_iter_revert" },
	{ 0x9b06f762, "proc_create_seq_private" },
	{ 0xa42d469b, "class_register" },
	{ 0xa813464, "sock_init_data" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd2d80c01, "release_sock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD7DCD0508BA0F5EF24BDDB");
