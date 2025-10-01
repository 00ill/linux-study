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
	{ 0x121e5173, "mt7921_mcu_set_eeprom" },
	{ 0xf1b0d111, "mt7921_usb_sdio_tx_complete_skb" },
	{ 0xf72efa5d, "mt792xu_rmw" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd35d8be2, "mt76u_resume_rx" },
	{ 0xbbc442b1, "kthread_park" },
	{ 0x7ee8b323, "mt7921_mac_init" },
	{ 0x8ef76798, "mt76_alloc_device" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xdeab5f8a, "mt792xu_mcu_power_on" },
	{ 0xede77d01, "mt7921_register_device" },
	{ 0x4af2b9a9, "__mt7921_start" },
	{ 0x48a57516, "mt7921_run_firmware" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0x50227f19, "mt7921_usb_sdio_tx_status_data" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0xb1f0d7e5, "mt76u_alloc_mcu_queue" },
	{ 0x84da3ef4, "mt76_free_device" },
	{ 0xc56c18c0, "kthread_unpark" },
	{ 0x66585995, "mt7921_ops" },
	{ 0x658a8157, "mt76u_queues_deinit" },
	{ 0x33b58322, "skb_push" },
	{ 0xde9ea8be, "mt792xu_wfsys_reset" },
	{ 0x35eb509a, "mt792xu_disconnect" },
	{ 0xcd26d377, "mt792xu_wr" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xffffc3c2, "mt7921_mac_sta_remove" },
	{ 0xc32ec29d, "mt7921_usb_sdio_tx_prepare_skb" },
	{ 0xdc751d4, "mt76u_read_copy" },
	{ 0xe31d3807, "mt76_connac2_mcu_fill_message" },
	{ 0x1e6ce260, "mt7921_mcu_parse_response" },
	{ 0x58f3924e, "mt76_txq_schedule_all" },
	{ 0x22b5830a, "mt76u_alloc_queues" },
	{ 0x52b314bb, "mt76u_stop_tx" },
	{ 0x59635c42, "mt792xu_init_reset" },
	{ 0x24c8ac6e, "mt792xu_dma_init" },
	{ 0xa259f27d, "mt7921_mac_sta_add" },
	{ 0x54a23221, "mt792x_update_channel" },
	{ 0x3c7c7878, "mt792x_get_mac80211_ops" },
	{ 0x1db0c724, "mt7921_queue_rx_skb" },
	{ 0x6e010221, "mt76u_stop_rx" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x671c209b, "mt76_connac_mcu_set_hif_suspend" },
	{ 0x9ac5e3f, "mt792x_reset" },
	{ 0xab3fae8c, "mt7921_mac_sta_event" },
	{ 0x4ca8bc42, "mt7921_rx_check" },
	{ 0x9a805443, "mt792xu_rr" },
	{ 0xde00512c, "mt7921_set_channel" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt76-usb,mt792x-usb,mt7921-common,mt76,mt76-connac-lib,mt792x-lib");

MODULE_ALIAS("usb:v0E8Dp7961d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v3574p6211d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9060d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v35BCp0107d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "DA5C99B55BC6FDE9A931DCD");
