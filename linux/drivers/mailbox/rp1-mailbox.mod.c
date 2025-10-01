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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xae97ccdd, "mbox_chan_received_data" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x4eea661, "devm_platform_ioremap_resource" },
	{ 0x69f13a25, "devm_mbox_controller_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1-mbox");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1-mboxC*");

MODULE_INFO(srcversion, "0E12E2F8CEB28F80E39CD29");
