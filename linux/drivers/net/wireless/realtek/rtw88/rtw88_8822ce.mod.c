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
	{ 0xd964d385, "rtw_pm_ops" },
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0xf5bb690b, "rtw_pci_remove" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0x23ec629f, "rtw8822c_hw_spec" },
	{ 0xc2ba5716, "rtw_pci_shutdown" },
	{ 0xf2597ddb, "rtw_pci_probe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw88_pci,rtw88_8822c");

MODULE_ALIAS("pci:v000010ECd0000C822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000C82Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B760873D48781EC02E3B1A4");
