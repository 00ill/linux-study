#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(garp_request_join, "_gpl", "");
KSYMTAB_FUNC(garp_request_leave, "_gpl", "");
KSYMTAB_FUNC(garp_init_applicant, "_gpl", "");
KSYMTAB_FUNC(garp_uninit_applicant, "_gpl", "");
KSYMTAB_FUNC(garp_register_application, "_gpl", "");
KSYMTAB_FUNC(garp_unregister_application, "_gpl", "");

SYMBOL_CRC(garp_request_join, 0x90329539, "_gpl");
SYMBOL_CRC(garp_request_leave, 0xfe3fb084, "_gpl");
SYMBOL_CRC(garp_init_applicant, 0x72235661, "_gpl");
SYMBOL_CRC(garp_uninit_applicant, 0xbe915c90, "_gpl");
SYMBOL_CRC(garp_register_application, 0xe9a2a11e, "_gpl");
SYMBOL_CRC(garp_unregister_application, 0x0d823ebb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa40c4c58, "stp_proto_register" },
	{ 0x14a0cd53, "stp_proto_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x914eac52, "dev_mc_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x37a0cba, "kfree" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x56470118, "__warn_printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x33b58322, "skb_push" },
	{ 0xc155e9db, "llc_mac_hdr_init" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xb19dafd8, "dev_mc_del" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xb3ee0f7e, "__pskb_pull_tail" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "stp,llc");


MODULE_INFO(srcversion, "012879953D9DCD25D77CDED");
