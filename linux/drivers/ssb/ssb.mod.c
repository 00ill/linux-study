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

KSYMTAB_FUNC(ssb_bus_resume, "", "");
KSYMTAB_FUNC(ssb_bus_suspend, "", "");
KSYMTAB_FUNC(ssb_bus_unregister, "", "");
KSYMTAB_FUNC(__ssb_driver_register, "", "");
KSYMTAB_FUNC(ssb_driver_unregister, "", "");
KSYMTAB_FUNC(ssb_set_devtypedata, "", "");
KSYMTAB_FUNC(ssb_clockspeed, "", "");
KSYMTAB_FUNC(ssb_device_is_enabled, "", "");
KSYMTAB_FUNC(ssb_device_enable, "", "");
KSYMTAB_FUNC(ssb_device_disable, "", "");
KSYMTAB_FUNC(ssb_dma_translation, "", "");
KSYMTAB_FUNC(ssb_bus_may_powerdown, "", "");
KSYMTAB_FUNC(ssb_bus_powerup, "", "");
KSYMTAB_FUNC(ssb_commit_settings, "", "");
KSYMTAB_FUNC(ssb_admatch_base, "", "");
KSYMTAB_FUNC(ssb_admatch_size, "", "");
KSYMTAB_FUNC(ssb_pcihost_register, "", "");
KSYMTAB_FUNC(ssb_chipco_gpio_control, "", "");
KSYMTAB_FUNC(ssb_pmu_set_ldo_voltage, "", "");
KSYMTAB_FUNC(ssb_pmu_set_ldo_paref, "", "");
KSYMTAB_FUNC(ssb_pmu_spuravoid_pllupdate, "_gpl", "");
KSYMTAB_FUNC(ssb_pcicore_dev_irqvecs_enable, "", "");

SYMBOL_CRC(ssb_bus_resume, 0x386d2eef, "");
SYMBOL_CRC(ssb_bus_suspend, 0x954730a6, "");
SYMBOL_CRC(ssb_bus_unregister, 0x7d846cd1, "");
SYMBOL_CRC(__ssb_driver_register, 0xe6950cdd, "");
SYMBOL_CRC(ssb_driver_unregister, 0xb8d55943, "");
SYMBOL_CRC(ssb_set_devtypedata, 0xd2534826, "");
SYMBOL_CRC(ssb_clockspeed, 0x8ac5a3c1, "");
SYMBOL_CRC(ssb_device_is_enabled, 0xe84d86d8, "");
SYMBOL_CRC(ssb_device_enable, 0xa649edf9, "");
SYMBOL_CRC(ssb_device_disable, 0xb6916fcd, "");
SYMBOL_CRC(ssb_dma_translation, 0x2829fa6c, "");
SYMBOL_CRC(ssb_bus_may_powerdown, 0xa3c03e61, "");
SYMBOL_CRC(ssb_bus_powerup, 0x98b019d7, "");
SYMBOL_CRC(ssb_commit_settings, 0x7d330417, "");
SYMBOL_CRC(ssb_admatch_base, 0xcb17f1cb, "");
SYMBOL_CRC(ssb_admatch_size, 0xdfc7c6ef, "");
SYMBOL_CRC(ssb_pcihost_register, 0x019efa3f, "");
SYMBOL_CRC(ssb_chipco_gpio_control, 0x6bffb8d7, "");
SYMBOL_CRC(ssb_pmu_set_ldo_voltage, 0xc9e1a995, "");
SYMBOL_CRC(ssb_pmu_set_ldo_paref, 0x5623d3f6, "");
SYMBOL_CRC(ssb_pmu_spuravoid_pllupdate, 0xc6a00c83, "_gpl");
SYMBOL_CRC(ssb_pcicore_dev_irqvecs_enable, 0x7f7dbbee, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x95b9dbf9, "pci_enable_device" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x3fd7c8cf, "pci_iomap" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0x96848186, "scnprintf" },
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x4b6bbff7, "pci_request_regions" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0xf139d567, "pci_read_config_dword" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36dc6ece, "put_device" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xee7a3241, "device_create_file" },
	{ 0xbf8790c5, "bus_unregister" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2e4ddee0, "pci_read_config_word" },
	{ 0x92893115, "driver_unregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x70796a17, "pci_iounmap" },
	{ 0x11089ac7, "_ctype" },
	{ 0x28b118b6, "device_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7cf55e07, "pci_set_master" },
	{ 0xa4ac0b4c, "_dev_emerg" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe1bb96dd, "pci_release_regions" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc43d6f7b, "pci_disable_device" },
	{ 0xb71a512f, "pci_write_config_word" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xf2772c4e, "driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe411fce, "pci_write_config_dword" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0x1b367b9c, "bus_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1C1ACB0726B93876EE915ED");
