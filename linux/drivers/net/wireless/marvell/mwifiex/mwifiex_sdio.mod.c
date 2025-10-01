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
	{ 0xe914e41e, "strcpy" },
	{ 0x7aab30c1, "sdio_release_host" },
	{ 0xc3f157e1, "sdio_disable_func" },
	{ 0xce7afeb6, "sdio_set_block_size" },
	{ 0x84776043, "mwifiex_init_shutdown_fw" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xce8c1d4c, "mwifiex_drv_info_dump" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf13cccf8, "sdio_claim_host" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf4f3ff5c, "mwifiex_upload_device_dump" },
	{ 0xe82ac121, "mwifiex_enable_hs" },
	{ 0xd20f87c8, "mwifiex_remove_card" },
	{ 0xf8192e35, "mwifiex_deauthenticate_all" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1018114d, "mwifiex_handle_rx_packet" },
	{ 0x73508ab3, "mwifiex_reinit_sw" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x17018f5e, "sdio_f0_readb" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd0074bcb, "sdio_release_irq" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0xd83dd1ba, "mwifiex_dnld_fw" },
	{ 0xedc481b5, "sdio_set_host_pm_flags" },
	{ 0xf80034f8, "sdio_unregister_driver" },
	{ 0x76f08028, "sdio_readsb" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x3850ad8f, "mwifiex_shutdown_sw" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xa8a523fe, "of_match_node" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9f41a940, "mwifiex_add_card" },
	{ 0xdcb764ad, "memset" },
	{ 0x17965ef5, "__sdio_register_driver" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x6a823a9e, "_mwifiex_dbg" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0x27cb1bec, "sdio_get_host_pm_caps" },
	{ 0xc6d9d06, "mwifiex_prepare_fw_dump_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x76659f4b, "mwifiex_main_process" },
	{ 0x999e8297, "vfree" },
	{ 0xa33179d7, "mwifiex_process_sleep_confirm_resp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x52832018, "mwifiex_disable_auto_ds" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x49be81a9, "mmc_hw_reset" },
	{ 0x730682a9, "sdio_claim_irq" },
	{ 0x8c732084, "sdio_enable_func" },
	{ 0x4f76c7a, "sdio_writesb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x52ed350a, "mwifiex_cancel_hs" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe34ae40a, "sdio_readb" },
	{ 0xb480aac2, "sdio_writeb" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9159*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "7AE65C8A3EAE2BFA0E4FDA0");
