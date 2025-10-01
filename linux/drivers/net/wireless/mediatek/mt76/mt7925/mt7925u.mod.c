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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8a736088, "__mt76u_init" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x12204e86, "mt792xu_copy" },
	{ 0x729b976f, "mt792xu_stop" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x363b10ba, "mt7925_usb_sdio_tx_complete_skb" },
	{ 0x495c6393, "mt7925_mac_init" },
	{ 0xf72efa5d, "mt792xu_rmw" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd35d8be2, "mt76u_resume_rx" },
	{ 0xbbc442b1, "kthread_park" },
	{ 0x8ef76798, "mt76_alloc_device" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xdeab5f8a, "mt792xu_mcu_power_on" },
	{ 0x58cedb64, "mt7925_mac_sta_remove" },
	{ 0xfdc91b83, "mt7925_ops" },
	{ 0x52dfb9fe, "__mt7925_start" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0xb1f0d7e5, "mt76u_alloc_mcu_queue" },
	{ 0x84da3ef4, "mt76_free_device" },
	{ 0xc56c18c0, "kthread_unpark" },
	{ 0x658a8157, "mt76u_queues_deinit" },
	{ 0x33b58322, "skb_push" },
	{ 0xde9ea8be, "mt792xu_wfsys_reset" },
	{ 0x7543f735, "mt7925_mac_sta_event" },
	{ 0x3c1aca93, "mt7925_run_firmware" },
	{ 0x35eb509a, "mt792xu_disconnect" },
	{ 0xa9933262, "mt7925_mac_sta_add" },
	{ 0xcd26d377, "mt792xu_wr" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x38b4719, "mt7925_mcu_set_eeprom" },
	{ 0xdc751d4, "mt76u_read_copy" },
	{ 0xae2aa2d6, "mt7925_usb_sdio_tx_prepare_skb" },
	{ 0x57174042, "mt7925_register_device" },
	{ 0x58f3924e, "mt76_txq_schedule_all" },
	{ 0x22b5830a, "mt76u_alloc_queues" },
	{ 0x931adbc2, "mt7925_usb_sdio_tx_status_data" },
	{ 0x52b314bb, "mt76u_stop_tx" },
	{ 0x59635c42, "mt792xu_init_reset" },
	{ 0x24c8ac6e, "mt792xu_dma_init" },
	{ 0x54a23221, "mt792x_update_channel" },
	{ 0x3c7c7878, "mt792x_get_mac80211_ops" },
	{ 0x4af39573, "mt7925_mcu_parse_response" },
	{ 0xa8181690, "mt7925_mcu_fill_message" },
	{ 0x6e010221, "mt76u_stop_rx" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x671c209b, "mt76_connac_mcu_set_hif_suspend" },
	{ 0x9ac5e3f, "mt792x_reset" },
	{ 0x9a805443, "mt792xu_rr" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf6381803, "mt7925_rx_check" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x14a6569d, "mt7925_queue_rx_skb" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76-usb,mt792x-usb,mt7925-common,mt76,mt792x-lib,mt76-connac-lib");

MODULE_ALIAS("usb:v0E8Dp7925d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "549034A4DEF2A6CBC83E490");
