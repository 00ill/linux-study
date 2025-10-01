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
	{ 0xe488f1c0, "ieee802154_unregister_hw" },
	{ 0xfa5ff2fa, "ieee802154_free_hw" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xe8536fa7, "spi_async" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbe28820f, "spi_write_then_read" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x122c3a7e, "_printk" },
	{ 0x92893115, "driver_unregister" },
	{ 0x669c413b, "_dev_err" },
	{ 0x76fb22db, "ieee802154_xmit_complete" },
	{ 0x59242416, "regmap_write_async" },
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x9ac95d3b, "ieee802154_rx_irqsafe" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x1c1e5d83, "ieee802154_alloc_hw" },
	{ 0x3fed91ff, "__devm_regmap_init_spi" },
	{ 0xa6fb68b9, "__devm_regmap_init" },
	{ 0x8e7ae2d3, "spi_get_device_id" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x130237d0, "ieee802154_register_hw" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");

MODULE_INFO(srcversion, "13E0C1A80A75D4BD29607CF");
