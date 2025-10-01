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

KSYMTAB_FUNC(drm_hdmi_infoframe_set_hdr_metadata, "", "");
KSYMTAB_FUNC(drm_hdmi_avi_infoframe_colorimetry, "", "");
KSYMTAB_FUNC(drm_hdmi_avi_infoframe_bars, "", "");
KSYMTAB_FUNC(drm_hdmi_avi_infoframe_content_type, "", "");
KSYMTAB_FUNC(drm_hdmi_compute_mode_clock, "", "");
KSYMTAB_FUNC(drm_scdc_read, "", "");
KSYMTAB_FUNC(drm_scdc_write, "", "");
KSYMTAB_FUNC(drm_scdc_get_scrambling_status, "", "");
KSYMTAB_FUNC(drm_scdc_set_scrambling, "", "");
KSYMTAB_FUNC(drm_scdc_set_high_tmds_clock_ratio, "", "");
KSYMTAB_FUNC(__drm_atomic_helper_connector_hdmi_reset, "", "");
KSYMTAB_FUNC(drm_atomic_helper_connector_hdmi_check, "", "");
KSYMTAB_FUNC(drm_atomic_helper_connector_hdmi_update_infoframes, "", "");
KSYMTAB_FUNC(drm_atomic_helper_connector_hdmi_update_audio_infoframe, "", "");
KSYMTAB_FUNC(drm_atomic_helper_connector_hdmi_clear_audio_infoframe, "", "");

SYMBOL_CRC(drm_hdmi_infoframe_set_hdr_metadata, 0x152e4b41, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_colorimetry, 0xe644c153, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_bars, 0xa3dc221f, "");
SYMBOL_CRC(drm_hdmi_avi_infoframe_content_type, 0xe2d809a2, "");
SYMBOL_CRC(drm_hdmi_compute_mode_clock, 0x7f3fbad7, "");
SYMBOL_CRC(drm_scdc_read, 0x72aac431, "");
SYMBOL_CRC(drm_scdc_write, 0xc6c7afcb, "");
SYMBOL_CRC(drm_scdc_get_scrambling_status, 0x81728235, "");
SYMBOL_CRC(drm_scdc_set_scrambling, 0xe0bccbf4, "");
SYMBOL_CRC(drm_scdc_set_high_tmds_clock_ratio, 0x0a10695f, "");
SYMBOL_CRC(__drm_atomic_helper_connector_hdmi_reset, 0xd7ad1610, "");
SYMBOL_CRC(drm_atomic_helper_connector_hdmi_check, 0x64513cbc, "");
SYMBOL_CRC(drm_atomic_helper_connector_hdmi_update_infoframes, 0xd333146c, "");
SYMBOL_CRC(drm_atomic_helper_connector_hdmi_update_audio_infoframe, 0x0020bec9, "");
SYMBOL_CRC(drm_atomic_helper_connector_hdmi_clear_audio_infoframe, 0x225d8811, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x2d4c773a, "hdmi_spd_infoframe_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x39edec18, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc249304b, "drm_atomic_get_crtc_state" },
	{ 0x273dc9d6, "drm_hdmi_connector_get_output_format_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xea593f6, "hdmi_drm_infoframe_init" },
	{ 0x1d6d457d, "__drm_dev_dbg" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa6457c89, "hdmi_infoframe_pack" },
	{ 0x65702bd6, "drm_default_rgb_quant_range" },
	{ 0xca2a112f, "drm_hdmi_avi_infoframe_quant_range" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x9b285573, "drm_match_cea_mode" },
	{ 0x5141f6b7, "drm_hdmi_vendor_infoframe_from_display_mode" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "DADB5ED9055603BC06260F7");
