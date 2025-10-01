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
	{ 0x23966dbc, "spi_bus_unlock" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8e7ae2d3, "spi_get_device_id" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9deccbf9, "spi_bus_lock" },
	{ 0xdd830e0c, "tpm_chip_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf073a598, "tpm_tis_remove" },
	{ 0x92893115, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x4305df44, "tpm_tis_core_init" },
	{ 0xb0701561, "spi_sync_locked" },
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "tpm,tpm_tis_core");

MODULE_ALIAS("acpi*:SMO0768:*");
MODULE_ALIAS("spi:attpm20p");
MODULE_ALIAS("spi:st33htpm-spi");
MODULE_ALIAS("spi:slb9670");
MODULE_ALIAS("spi:tpm_tis_spi");
MODULE_ALIAS("spi:tpm_tis-spi");
MODULE_ALIAS("spi:cr50");
MODULE_ALIAS("of:N*T*Catmel,attpm20p");
MODULE_ALIAS("of:N*T*Catmel,attpm20pC*");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spi");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spiC*");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670C*");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spi");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spiC*");
MODULE_ALIAS("of:N*T*Cgoogle,cr50");
MODULE_ALIAS("of:N*T*Cgoogle,cr50C*");

MODULE_INFO(srcversion, "CA3DEA361E79D6678085025");
