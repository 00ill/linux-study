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
	{ 0x42f7540f, "pci_read_config_byte" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe411fce, "pci_write_config_dword" },
	{ 0x3e5ce625, "pci_write_config_byte" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0x2e4ddee0, "pci_read_config_word" },
	{ 0xf139d567, "pci_read_config_dword" },
	{ 0x4cbc60b9, "pci_dev_get" },
	{ 0x6c37e5, "firmware_request_nowarn" },
	{ 0x148b3a5a, "pci_dev_put" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x531034eb, "xhci_pci_common_probe" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3d1187c7, "xhci_pci_remove" },
	{ 0x8eb49234, "usb_hcd_pci_shutdown" },
	{ 0x4c2bc261, "usb_hcd_pci_pm_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001912d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000015sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DB5FA1AF47440FDAE3FC984");
