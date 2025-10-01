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
	{ 0x17965ef5, "__sdio_register_driver" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xf13cccf8, "sdio_claim_host" },
	{ 0xb480aac2, "sdio_writeb" },
	{ 0x7aab30c1, "sdio_release_host" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x17018f5e, "sdio_f0_readb" },
	{ 0xe34ae40a, "sdio_readb" },
	{ 0x718b8b7, "bt_info" },
	{ 0x27cb1bec, "sdio_get_host_pm_caps" },
	{ 0x7f98a838, "hci_resume_dev" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5e09d3fc, "hci_suspend_dev" },
	{ 0x48986c25, "btmrvl_enable_hs" },
	{ 0xedc481b5, "sdio_set_host_pm_flags" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xf80034f8, "sdio_unregister_driver" },
	{ 0x76f08028, "sdio_readsb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5f9303e8, "btmrvl_interrupt" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4f76c7a, "sdio_writesb" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x999e8297, "vfree" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x98cf60b3, "strlen" },
	{ 0x96848186, "scnprintf" },
	{ 0xf4da4505, "dev_coredumpv" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x8560dccf, "btmrvl_process_event" },
	{ 0x3ed8250, "btmrvl_check_evtpkt" },
	{ 0xf7389894, "hci_recv_frame" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x8c732084, "sdio_enable_func" },
	{ 0x730682a9, "sdio_claim_irq" },
	{ 0xce7afeb6, "sdio_set_block_size" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa8a523fe, "of_match_node" },
	{ 0x168a52f7, "irq_of_parse_and_map" },
	{ 0x669c413b, "_dev_err" },
	{ 0xa0ec8aad, "btmrvl_add_card" },
	{ 0xe4bfc31f, "btmrvl_register_hdev" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xd0074bcb, "sdio_release_irq" },
	{ 0xc3f157e1, "sdio_disable_func" },
	{ 0x2782b0f9, "btmrvl_remove_card" },
	{ 0xe2818c82, "btmrvl_send_module_cfg_cmd" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,btmrvl");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "63842500B463C2C337EDF0B");
