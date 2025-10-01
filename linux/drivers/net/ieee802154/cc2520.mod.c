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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe488f1c0, "ieee802154_unregister_hw" },
	{ 0xfa5ff2fa, "ieee802154_free_hw" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa6257a2f, "complete" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x92893115, "driver_unregister" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3c24ae1d, "gpiod_get_value" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x9ac95d3b, "ieee802154_rx_irqsafe" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x1c1e5d83, "ieee802154_alloc_hw" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x130237d0, "ieee802154_register_hw" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac802154,crc-ccitt");

MODULE_ALIAS("of:N*T*Cti,cc2520");
MODULE_ALIAS("of:N*T*Cti,cc2520C*");
MODULE_ALIAS("spi:cc2520");

MODULE_INFO(srcversion, "D0A9121AD50439D2B91C3E3");
