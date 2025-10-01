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

KSYMTAB_FUNC(drm_get_panel_orientation_quirk, "", "");

SYMBOL_CRC(drm_get_panel_orientation_quirk, 0x2e439142, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x50877b9, "dmi_first_match" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x81188c30, "match_string" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A03BA58C36229ACF6C57C42");
