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
	{ 0xc1e630cf, "rtw89_pci_config_intr_mask_v2" },
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0xd29f0267, "rtw8922a_chip_info" },
	{ 0x647d5655, "rtw89_pci_remove" },
	{ 0x1d751d45, "rtw89_pci_ltr_set_v2" },
	{ 0x6f9bb342, "rtw89_pci_fill_txaddr_info_v1" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0x3e054f53, "rtw89_pci_enable_intr_v2" },
	{ 0x957e3105, "rtw89_pci_recognize_intrs_v2" },
	{ 0xb0391068, "rtw89_pm_ops_be" },
	{ 0xd3077a97, "rtw89_pci_probe" },
	{ 0x56f5092b, "rtw89_pci_gen_be" },
	{ 0x33c84a55, "rtw89_pci_ch_dma_addr_set_be" },
	{ 0x61bde199, "rtw89_pci_disable_intr_v2" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw89_pci,rtw89_8922a");

MODULE_ALIAS("pci:v000010ECd00008922sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DCCA5CB5E1EA8CF05FFE835");
