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

KSYMTAB_FUNC(w1_ds2780_io, "", "");
KSYMTAB_FUNC(w1_ds2780_eeprom_cmd, "", "");

SYMBOL_CRC(w1_ds2780_io, 0xdf01254a, "");
SYMBOL_CRC(w1_ds2780_eeprom_cmd, 0x97d328cb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbd143cf9, "w1_reset_select_slave" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xea7b044f, "w1_write_8" },
	{ 0xd4eb9522, "w1_write_block" },
	{ 0x652fcef6, "w1_read_block" },
	{ 0x26130a71, "w1_register_family" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0x25dfac11, "platform_device_alloc" },
	{ 0xcc3bfc6c, "platform_device_add" },
	{ 0x56e83a64, "platform_device_put" },
	{ 0xcc223af9, "w1_unregister_family" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "A247E696C8E9E9764642E86");
