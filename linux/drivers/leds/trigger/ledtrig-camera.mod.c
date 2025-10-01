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

KSYMTAB_FUNC(ledtrig_flash_ctrl, "_gpl", "");
KSYMTAB_FUNC(ledtrig_torch_ctrl, "_gpl", "");

SYMBOL_CRC(ledtrig_flash_ctrl, 0x749e05f2, "_gpl");
SYMBOL_CRC(ledtrig_torch_ctrl, 0x7903e46e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3e7cf756, "led_trigger_event" },
	{ 0x94b134e, "led_trigger_register_simple" },
	{ 0x3f65e843, "led_trigger_unregister_simple" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6E60B514F68428C61AC0A92");
