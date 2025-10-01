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
	{ 0xe00a776c, "lbs_notify_command_response" },
	{ 0x7aab30c1, "sdio_release_host" },
	{ 0xc3f157e1, "sdio_disable_func" },
	{ 0xce7afeb6, "sdio_set_block_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf13cccf8, "sdio_claim_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x49afcf91, "mmc_remove_host" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8502868b, "netdev_err" },
	{ 0x6cc6632f, "mmc_add_host" },
	{ 0x17018f5e, "sdio_f0_readb" },
	{ 0x57177e62, "lbs_add_card" },
	{ 0x6bf4cf3c, "sdio_align_size" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0966828, "lbs_host_to_card_done" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd0074bcb, "sdio_release_irq" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xb8825ddc, "lbs_process_rxed_packet" },
	{ 0xedc481b5, "sdio_set_host_pm_flags" },
	{ 0x2b81ec31, "sdio_f0_writeb" },
	{ 0xfdc7cc13, "lbs_remove_card" },
	{ 0xf80034f8, "sdio_unregister_driver" },
	{ 0x76f08028, "sdio_readsb" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0x900967f0, "lbs_suspend" },
	{ 0xcf877b1b, "lbs_cmd_copyback" },
	{ 0x59eb97f9, "lbs_get_firmware_async" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf97f0d2f, "lbs_queue_event" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x17965ef5, "__sdio_register_driver" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x6d5cae35, "lbs_start_card" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x27cb1bec, "sdio_get_host_pm_caps" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa145cf, "__lbs_cmd" },
	{ 0xa65f95f6, "netdev_alert" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x80a97487, "lbs_stop_card" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x730682a9, "sdio_claim_irq" },
	{ 0x8c732084, "sdio_enable_func" },
	{ 0x4f76c7a, "sdio_writesb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe7cdc413, "lbs_resume" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe34ae40a, "sdio_readb" },
	{ 0xb480aac2, "sdio_writeb" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "C889CCF6EF8950D118DD2FF");
