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
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x76fb22db, "ieee802154_xmit_complete" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc235c02, "ieee802154_xmit_error" },
	{ 0xb8243e5e, "ieee802154_xmit_hw_error" },
	{ 0xa6257a2f, "complete" },
	{ 0xdcb764ad, "memset" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x92893115, "driver_unregister" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9ac95d3b, "ieee802154_rx_irqsafe" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0xe488f1c0, "ieee802154_unregister_hw" },
	{ 0xfa5ff2fa, "ieee802154_free_hw" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xe8536fa7, "spi_async" },
	{ 0x669c413b, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x606a79da, "device_property_read_u8_array" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xb3b39a03, "gpiod_set_consumer_name" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x1c1e5d83, "ieee802154_alloc_hw" },
	{ 0x3fed91ff, "__devm_regmap_init_spi" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x130237d0, "ieee802154_register_hw" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "D99D1359A332AE50BA019F3");
