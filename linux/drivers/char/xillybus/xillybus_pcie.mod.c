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
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0x521fa706, "xillybus_endpoint_remove" },
	{ 0x689dc0cf, "xillybus_init_endpoint" },
	{ 0xb36396f8, "pcim_enable_device" },
	{ 0xc9fddddf, "pci_disable_link_state" },
	{ 0x55dc16b9, "pcim_iomap_regions" },
	{ 0xd9835348, "pcim_iomap_table" },
	{ 0x7cf55e07, "pci_set_master" },
	{ 0xd0bf3c29, "pci_enable_msi" },
	{ 0x25978d50, "xillybus_isr" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0xff32b088, "xillybus_endpoint_discovery" },
	{ 0x669c413b, "_dev_err" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "xillybus_core");

MODULE_ALIAS("pci:v000010EEd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001172d0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011AAd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001204d0000EBEBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F84B667035EDD54796AB65C");
