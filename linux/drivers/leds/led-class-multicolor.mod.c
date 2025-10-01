#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(led_mc_calc_color_components, "_gpl", "");
KSYMTAB_FUNC(led_classdev_multicolor_register_ext, "_gpl", "");
KSYMTAB_FUNC(led_classdev_multicolor_unregister, "_gpl", "");
KSYMTAB_FUNC(devm_led_classdev_multicolor_register_ext, "_gpl", "");
KSYMTAB_FUNC(devm_led_classdev_multicolor_unregister, "_gpl", "");

SYMBOL_CRC(led_mc_calc_color_components, 0xdbd0ef77, "_gpl");
SYMBOL_CRC(led_classdev_multicolor_register_ext, 0x01299418, "_gpl");
SYMBOL_CRC(led_classdev_multicolor_unregister, 0x653e0b0a, "_gpl");
SYMBOL_CRC(devm_led_classdev_multicolor_register_ext, 0xf82f1e94, "_gpl");
SYMBOL_CRC(devm_led_classdev_multicolor_unregister, 0x5d23aab0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0x891e3f8c, "led_get_color_name" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7ec8fd19, "led_set_brightness" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0xc86c73db, "devres_release" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0xde5315ca, "devres_add" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "647D23E1F6E4038D4E68EA6");
