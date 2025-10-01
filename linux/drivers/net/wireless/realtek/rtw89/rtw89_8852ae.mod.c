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
	{ 0x7d32e974, "rtw89_pm_ops" },
	{ 0x960150cb, "rtw89_pci_fill_txaddr_info" },
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0x71a3a79d, "rtw89_pci_recognize_intrs" },
	{ 0x647d5655, "rtw89_pci_remove" },
	{ 0x47d3e12e, "rtw89_pci_config_intr_mask" },
	{ 0x9c3b42e5, "rtw89_pci_ltr_set" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0xabdfdb6e, "rtw89_pci_gen_ax" },
	{ 0xd3077a97, "rtw89_pci_probe" },
	{ 0xcafe2107, "rtw89_pci_enable_intr" },
	{ 0x9ce0961b, "rtw89_pci_ch_dma_addr_set" },
	{ 0x6efd9f2c, "rtw89_bd_ram_table_dual" },
	{ 0xc2df2f45, "rtw8852a_chip_info" },
	{ 0x9e1961c7, "rtw89_pci_disable_intr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw89_pci,rtw89_8852a");

MODULE_ALIAS("pci:v000010ECd00008852sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000A85Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A3ED5A1366B1F3B6F33E812");
