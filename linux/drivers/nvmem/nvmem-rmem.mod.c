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
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x2005d56d, "devm_nvmem_register" },
	{ 0x4d924f20, "memremap" },
	{ 0x7b7932d8, "of_reserved_mem_lookup" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xdcb764ad, "memset" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnvmem-rmem");
MODULE_ALIAS("of:N*T*Cnvmem-rmemC*");

MODULE_INFO(srcversion, "75EA2BBF67D00B6E60E5BCD");
