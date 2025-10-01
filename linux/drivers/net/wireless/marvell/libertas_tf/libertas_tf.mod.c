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

KSYMTAB_DATA(lbtf_debug, "_gpl", "");
KSYMTAB_FUNC(lbtf_rx, "_gpl", "");
KSYMTAB_FUNC(lbtf_add_card, "_gpl", "");
KSYMTAB_FUNC(lbtf_remove_card, "_gpl", "");
KSYMTAB_FUNC(lbtf_send_tx_feedback, "_gpl", "");
KSYMTAB_FUNC(lbtf_bcn_sent, "_gpl", "");
KSYMTAB_FUNC(lbtf_cmd_copyback, "_gpl", "");
KSYMTAB_FUNC(__lbtf_cmd, "_gpl", "");
KSYMTAB_FUNC(lbtf_cmd_response_rx, "_gpl", "");

SYMBOL_CRC(lbtf_debug, 0xc85e6899, "_gpl");
SYMBOL_CRC(lbtf_rx, 0xafbccbbe, "_gpl");
SYMBOL_CRC(lbtf_add_card, 0x0d246912, "_gpl");
SYMBOL_CRC(lbtf_remove_card, 0xdd0330f9, "_gpl");
SYMBOL_CRC(lbtf_send_tx_feedback, 0x5efb028d, "_gpl");
SYMBOL_CRC(lbtf_bcn_sent, 0xc2451aee, "_gpl");
SYMBOL_CRC(lbtf_cmd_copyback, 0x302ccfa1, "_gpl");
SYMBOL_CRC(__lbtf_cmd, 0xf9d83729, "_gpl");
SYMBOL_CRC(lbtf_cmd_response_rx, 0x651451fb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xecfea7ae, "ieee80211_get_buffered_bc" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x1499afed, "ieee80211_tx_status_irqsafe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x20f09351, "ieee80211_beacon_get_tim" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x25fd7ebc, "ieee80211_rx_irqsafe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211");


MODULE_INFO(srcversion, "7DA56B97EE98003B8CCFFD4");
