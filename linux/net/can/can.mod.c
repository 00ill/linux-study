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

KSYMTAB_FUNC(can_sock_destruct, "", "");
KSYMTAB_FUNC(can_send, "", "");
KSYMTAB_FUNC(can_rx_register, "", "");
KSYMTAB_FUNC(can_rx_unregister, "", "");
KSYMTAB_FUNC(can_proto_register, "", "");
KSYMTAB_FUNC(can_proto_unregister, "", "");

SYMBOL_CRC(can_sock_destruct, 0x0fdc26e5, "");
SYMBOL_CRC(can_send, 0x58196490, "");
SYMBOL_CRC(can_rx_register, 0xc1be4b75, "");
SYMBOL_CRC(can_rx_unregister, 0xe9c11251, "");
SYMBOL_CRC(can_proto_register, 0xe67bc204, "");
SYMBOL_CRC(can_proto_unregister, 0x7024d82a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3aaa0000, "try_module_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x1db41cf8, "dev_add_pack" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x122c3a7e, "_printk" },
	{ 0x26fb156, "proto_unregister" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xb706a33f, "sock_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa8707ce6, "proto_register" },
	{ 0x9d9e8944, "module_put" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8bff47bb, "dev_remove_pack" },
	{ 0xf33af8b9, "sk_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a3c8253, "kmem_cache_free" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0x172d06fa, "sk_alloc" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a5c410e, "sock_efree" },
	{ 0x6f61551b, "kmem_cache_alloc_noprof" },
	{ 0x50d00458, "netif_rx" },
	{ 0x8450a53a, "__kmem_cache_create_args" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb53675e6, "seq_write" },
	{ 0xa0e24b52, "remove_proc_entry" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xeb670f5, "proc_create_net_single" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x4e8234fa, "_proc_mkdir" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xa813464, "sock_init_data" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x656f612b, "kmem_cache_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CE68142172AA602B476E940");
