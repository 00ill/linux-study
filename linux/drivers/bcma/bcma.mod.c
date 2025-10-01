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

KSYMTAB_FUNC(bcma_find_core_unit, "_gpl", "");
KSYMTAB_FUNC(bcma_core_irq, "", "");
KSYMTAB_FUNC(__bcma_driver_register, "_gpl", "");
KSYMTAB_FUNC(bcma_driver_unregister, "_gpl", "");
KSYMTAB_FUNC(bcma_core_is_enabled, "_gpl", "");
KSYMTAB_FUNC(bcma_core_disable, "_gpl", "");
KSYMTAB_FUNC(bcma_core_enable, "_gpl", "");
KSYMTAB_FUNC(bcma_core_set_clockmode, "_gpl", "");
KSYMTAB_FUNC(bcma_core_pll_ctl, "_gpl", "");
KSYMTAB_FUNC(bcma_core_dma_translation, "", "");
KSYMTAB_FUNC(bcma_chipco_get_alp_clock, "_gpl", "");
KSYMTAB_FUNC(bcma_chipco_gpio_out, "_gpl", "");
KSYMTAB_FUNC(bcma_chipco_gpio_outen, "_gpl", "");
KSYMTAB_FUNC(bcma_chipco_gpio_control, "_gpl", "");
KSYMTAB_FUNC(bcma_chipco_pll_read, "_gpl", "");
KSYMTAB_FUNC(bcma_chipco_pll_write, "_gpl", "");
KSYMTAB_FUNC(bcma_chipco_pll_maskset, "_gpl", "");
KSYMTAB_FUNC(bcma_chipco_chipctl_maskset, "_gpl", "");
KSYMTAB_FUNC(bcma_chipco_regctl_maskset, "_gpl", "");
KSYMTAB_FUNC(bcma_pmu_get_bus_clock, "_gpl", "");
KSYMTAB_FUNC(bcma_pmu_spuravoid_pllupdate, "_gpl", "");
KSYMTAB_FUNC(bcma_chipco_b_mii_write, "_gpl", "");
KSYMTAB_FUNC(bcma_core_pci_power_save, "_gpl", "");
KSYMTAB_FUNC(bcma_host_pci_up, "_gpl", "");
KSYMTAB_FUNC(bcma_host_pci_down, "_gpl", "");
KSYMTAB_FUNC(bcma_host_pci_irq_ctl, "_gpl", "");

SYMBOL_CRC(bcma_find_core_unit, 0xa168116f, "_gpl");
SYMBOL_CRC(bcma_core_irq, 0x5ffe7707, "");
SYMBOL_CRC(__bcma_driver_register, 0xcf19bddd, "_gpl");
SYMBOL_CRC(bcma_driver_unregister, 0x0beeeac7, "_gpl");
SYMBOL_CRC(bcma_core_is_enabled, 0x9b470ee9, "_gpl");
SYMBOL_CRC(bcma_core_disable, 0x2f269ff7, "_gpl");
SYMBOL_CRC(bcma_core_enable, 0x8f7f6586, "_gpl");
SYMBOL_CRC(bcma_core_set_clockmode, 0x2bcad275, "_gpl");
SYMBOL_CRC(bcma_core_pll_ctl, 0xf254f57c, "_gpl");
SYMBOL_CRC(bcma_core_dma_translation, 0x1001c0f8, "");
SYMBOL_CRC(bcma_chipco_get_alp_clock, 0xd847c41c, "_gpl");
SYMBOL_CRC(bcma_chipco_gpio_out, 0x6150fd6b, "_gpl");
SYMBOL_CRC(bcma_chipco_gpio_outen, 0x58fe6a64, "_gpl");
SYMBOL_CRC(bcma_chipco_gpio_control, 0xe5ef03c3, "_gpl");
SYMBOL_CRC(bcma_chipco_pll_read, 0x84f79da8, "_gpl");
SYMBOL_CRC(bcma_chipco_pll_write, 0x38db426f, "_gpl");
SYMBOL_CRC(bcma_chipco_pll_maskset, 0xdc4017cb, "_gpl");
SYMBOL_CRC(bcma_chipco_chipctl_maskset, 0x1cacff40, "_gpl");
SYMBOL_CRC(bcma_chipco_regctl_maskset, 0xd2fa3b79, "_gpl");
SYMBOL_CRC(bcma_pmu_get_bus_clock, 0xe183ca6b, "_gpl");
SYMBOL_CRC(bcma_pmu_spuravoid_pllupdate, 0x7bb9fa9a, "_gpl");
SYMBOL_CRC(bcma_chipco_b_mii_write, 0xf93975af, "_gpl");
SYMBOL_CRC(bcma_core_pci_power_save, 0x1a198a5e, "_gpl");
SYMBOL_CRC(bcma_host_pci_up, 0x369168f2, "_gpl");
SYMBOL_CRC(bcma_host_pci_down, 0xc4f50e84, "_gpl");
SYMBOL_CRC(bcma_host_pci_irq_ctl, 0x34f5d5e0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x95b9dbf9, "pci_enable_device" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x3fd7c8cf, "pci_iomap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2c238875, "of_address_to_resource" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0x5758beb0, "of_platform_default_populate" },
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x16965a52, "device_initialize" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x4b6bbff7, "pci_request_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x58679f9d, "of_irq_parse_one" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0xf139d567, "pci_read_config_dword" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd316a0df, "of_irq_parse_raw" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36dc6ece, "put_device" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xbf8790c5, "bus_unregister" },
	{ 0x669c413b, "_dev_err" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92893115, "driver_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x70796a17, "pci_iounmap" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x7cf55e07, "pci_set_master" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe1bb96dd, "pci_release_regions" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc43d6f7b, "pci_disable_device" },
	{ 0xa9ed4df4, "pcie_set_readrq" },
	{ 0x4324a0b2, "irq_create_of_mapping" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x9a7d433b, "of_dma_configure_id" },
	{ 0xf2772c4e, "driver_register" },
	{ 0xe411fce, "pci_write_config_dword" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x1b367b9c, "bus_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00000576sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004331sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004359sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000105Bsd0000E092bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000103Csd0000804Abc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "34FB4135371B3626C4ACC12");
