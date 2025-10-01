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

KSYMTAB_DATA(v4l2_dv_timings_presets, "_gpl", "");
KSYMTAB_FUNC(v4l2_valid_dv_timings, "_gpl", "");
KSYMTAB_FUNC(v4l2_enum_dv_timings_cap, "_gpl", "");
KSYMTAB_FUNC(v4l2_find_dv_timings_cap, "_gpl", "");
KSYMTAB_FUNC(v4l2_find_dv_timings_cea861_vic, "_gpl", "");
KSYMTAB_FUNC(v4l2_match_dv_timings, "_gpl", "");
KSYMTAB_FUNC(v4l2_print_dv_timings, "_gpl", "");
KSYMTAB_FUNC(v4l2_dv_timings_aspect_ratio, "_gpl", "");
KSYMTAB_FUNC(v4l2_calc_timeperframe, "_gpl", "");
KSYMTAB_FUNC(v4l2_detect_cvt, "_gpl", "");
KSYMTAB_FUNC(v4l2_detect_gtf, "_gpl", "");
KSYMTAB_FUNC(v4l2_calc_aspect_ratio, "_gpl", "");
KSYMTAB_FUNC(v4l2_hdmi_rx_colorimetry, "_gpl", "");
KSYMTAB_FUNC(v4l2_get_edid_phys_addr, "_gpl", "");
KSYMTAB_FUNC(v4l2_set_edid_phys_addr, "_gpl", "");
KSYMTAB_FUNC(v4l2_phys_addr_for_input, "_gpl", "");
KSYMTAB_FUNC(v4l2_phys_addr_validate, "_gpl", "");

SYMBOL_CRC(v4l2_dv_timings_presets, 0x370cfe6e, "_gpl");
SYMBOL_CRC(v4l2_valid_dv_timings, 0x0af3d134, "_gpl");
SYMBOL_CRC(v4l2_enum_dv_timings_cap, 0x922ecd29, "_gpl");
SYMBOL_CRC(v4l2_find_dv_timings_cap, 0x3aa68d7a, "_gpl");
SYMBOL_CRC(v4l2_find_dv_timings_cea861_vic, 0xf56238f4, "_gpl");
SYMBOL_CRC(v4l2_match_dv_timings, 0xd034392d, "_gpl");
SYMBOL_CRC(v4l2_print_dv_timings, 0x08402862, "_gpl");
SYMBOL_CRC(v4l2_dv_timings_aspect_ratio, 0xff585440, "_gpl");
SYMBOL_CRC(v4l2_calc_timeperframe, 0x4839762f, "_gpl");
SYMBOL_CRC(v4l2_detect_cvt, 0xd3ec68f3, "_gpl");
SYMBOL_CRC(v4l2_detect_gtf, 0xaca8a3ea, "_gpl");
SYMBOL_CRC(v4l2_calc_aspect_ratio, 0x2bf67def, "_gpl");
SYMBOL_CRC(v4l2_hdmi_rx_colorimetry, 0xa22fbfeb, "_gpl");
SYMBOL_CRC(v4l2_get_edid_phys_addr, 0x8f8d4341, "_gpl");
SYMBOL_CRC(v4l2_set_edid_phys_addr, 0x0958448b, "_gpl");
SYMBOL_CRC(v4l2_phys_addr_for_input, 0xae575c8f, "_gpl");
SYMBOL_CRC(v4l2_phys_addr_validate, 0x7b6ac78f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0x122c3a7e, "_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "931A2B9A4C6C7025BB9C6C9");
