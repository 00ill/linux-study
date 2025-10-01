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

KSYMTAB_FUNC(mt76x02u_mcu_fw_reset, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_mcu_fw_send_data, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_init_mcu, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_mac_start, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_tx_prepare_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_init_beacon_config, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_exit_beacon_config, "_gpl", "");

SYMBOL_CRC(mt76x02u_mcu_fw_reset, 0xebc67570, "_gpl");
SYMBOL_CRC(mt76x02u_mcu_fw_send_data, 0xf3f4325c, "_gpl");
SYMBOL_CRC(mt76x02u_init_mcu, 0x6b627712, "_gpl");
SYMBOL_CRC(mt76x02u_tx_complete_skb, 0x3c6e27e8, "_gpl");
SYMBOL_CRC(mt76x02u_mac_start, 0xc64ea10d, "_gpl");
SYMBOL_CRC(mt76x02u_tx_prepare_skb, 0x8ef9cdc3, "_gpl");
SYMBOL_CRC(mt76x02u_init_beacon_config, 0xafcc52b9, "_gpl");
SYMBOL_CRC(mt76x02u_exit_beacon_config, 0x5940aff9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x291a65c2, "mt76x02_update_beacon_iter" },
	{ 0x4c6d848a, "mt76x02_enqueue_buffered_bc" },
	{ 0x655e1736, "mt76x02_remove_hdr_pad" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x5a1162bd, "mt76x02_resync_beacon_timer" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xde72dc78, "mt76x02_mcu_parse_response" },
	{ 0x80728658, "mt76_csa_check" },
	{ 0x5495c001, "mt76_tx_status_skb_add" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x93cbd35c, "mt76u_single_wr" },
	{ 0xe093d9fc, "__mt76_tx_complete_skb" },
	{ 0xf8df0248, "mt76x02_mac_reset_counters" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x533f34d3, "mt76_csa_finish" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0xaff0aace, "mt76x02_init_beacon_config" },
	{ 0xa7817566, "__mt76_mcu_msg_alloc" },
	{ 0x18540475, "mt76x02_mac_write_txwi" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x2bf50a51, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x13526b87, "mt76u_vendor_request" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc74b49a3, "mt76_skb_adjust_pad" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x5e3da7fe, "mt76x02_mac_set_beacon" },
	{ 0xcb2e80c6, "hrtimer_active" },
	{ 0x88ec4249, "__mt76_poll" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,cfg80211,mac80211");


MODULE_INFO(srcversion, "9A76F0D52CE56EE67519A1B");
