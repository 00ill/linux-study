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

KSYMTAB_FUNC(mt792xu_rr, "_gpl", "");
KSYMTAB_FUNC(mt792xu_wr, "_gpl", "");
KSYMTAB_FUNC(mt792xu_rmw, "_gpl", "");
KSYMTAB_FUNC(mt792xu_copy, "_gpl", "");
KSYMTAB_FUNC(mt792xu_mcu_power_on, "_gpl", "");
KSYMTAB_FUNC(mt792xu_dma_init, "_gpl", "");
KSYMTAB_FUNC(mt792xu_wfsys_reset, "_gpl", "");
KSYMTAB_FUNC(mt792xu_init_reset, "_gpl", "");
KSYMTAB_FUNC(mt792xu_stop, "_gpl", "");
KSYMTAB_FUNC(mt792xu_disconnect, "_gpl", "");

SYMBOL_CRC(mt792xu_rr, 0x9a805443, "_gpl");
SYMBOL_CRC(mt792xu_wr, 0xcd26d377, "_gpl");
SYMBOL_CRC(mt792xu_rmw, 0xf72efa5d, "_gpl");
SYMBOL_CRC(mt792xu_copy, 0x12204e86, "_gpl");
SYMBOL_CRC(mt792xu_mcu_power_on, 0xdeab5f8a, "_gpl");
SYMBOL_CRC(mt792xu_dma_init, 0x24c8ac6e, "_gpl");
SYMBOL_CRC(mt792xu_wfsys_reset, 0xde9ea8be, "_gpl");
SYMBOL_CRC(mt792xu_init_reset, 0x59635c42, "_gpl");
SYMBOL_CRC(mt792xu_stop, 0x729b976f, "_gpl");
SYMBOL_CRC(mt792xu_disconnect, 0x35eb509a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9b63f646, "mt792x_stop" },
	{ 0x47f879ff, "__mt76u_vendor_request" },
	{ 0x6c89395c, "___mt76u_wr" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd35d8be2, "mt76u_resume_rx" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x84da3ef4, "mt76_free_device" },
	{ 0x658a8157, "mt76u_queues_deinit" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xac0e1ce5, "mt76_unregister_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x52b314bb, "mt76u_stop_tx" },
	{ 0x13526b87, "mt76u_vendor_request" },
	{ 0xa2c08f22, "____mt76_poll_msec" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6e010221, "mt76u_stop_rx" },
	{ 0x4e41baf9, "___mt76u_rr" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x88ec4249, "__mt76_poll" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mt792x-lib,mt76-usb,mt76");


MODULE_INFO(srcversion, "B3AE5F2FE5D11EE12FF5101");
