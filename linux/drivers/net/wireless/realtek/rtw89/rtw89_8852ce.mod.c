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
	{ 0x2ee4b1da, "rtw8852c_chip_info" },
	{ 0x7d32e974, "rtw89_pm_ops" },
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0x647d5655, "rtw89_pci_remove" },
	{ 0x6f9bb342, "rtw89_pci_fill_txaddr_info_v1" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0xf0968dd8, "rtw89_pci_ltr_set_v1" },
	{ 0xabdfdb6e, "rtw89_pci_gen_ax" },
	{ 0x4547338f, "rtw89_pci_config_intr_mask_v1" },
	{ 0xd3077a97, "rtw89_pci_probe" },
	{ 0xf441fe39, "rtw89_pci_disable_intr_v1" },
	{ 0xabf950f3, "rtw89_pci_enable_intr_v1" },
	{ 0x3238d2d0, "rtw89_pci_recognize_intrs_v1" },
	{ 0xf630d9a9, "rtw89_pci_ch_dma_addr_set_v1" },
	{ 0x6efd9f2c, "rtw89_bd_ram_table_dual" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw89_8852c,rtw89_pci");

MODULE_ALIAS("pci:v000010ECd0000C852sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2E12D23D1A84E6CFE84A93A");
