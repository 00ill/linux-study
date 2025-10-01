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
	{ 0x49afcf91, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d01bc83, "mmc_spi_put_pdata" },
	{ 0x3f07d24, "mmc_free_host" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9c3aff08, "mmc_detect_change" },
	{ 0x92893115, "driver_unregister" },
	{ 0xbde79ba4, "spi_setup" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0xd34cb7e3, "mmc_alloc_host" },
	{ 0xfad7fd01, "mmc_spi_get_pdata" },
	{ 0x6cc6632f, "mmc_add_host" },
	{ 0xeae8201b, "mmc_gpiod_request_cd" },
	{ 0xea78683, "mmc_gpiod_request_ro" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd3add06b, "mmc_gpiod_request_cd_irq" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xba55d23e, "crc7_be" },
	{ 0xb0701561, "spi_sync_locked" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9deccbf9, "spi_bus_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x23966dbc, "spi_bus_unlock" },
	{ 0x4976c7e7, "mmc_request_done" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x39819c60, "flush_dcache_page" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xadb7895d, "mmc_gpio_get_ro" },
	{ 0x3fa84597, "mmc_gpio_get_cd" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "of_mmc_spi,crc7");

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");
MODULE_ALIAS("spi:mmc-spi-slot");

MODULE_INFO(srcversion, "F59668F4B6576848FF2EC97");
