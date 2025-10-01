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

KSYMTAB_FUNC(mipi_dbi_command_read, "", "");
KSYMTAB_FUNC(mipi_dbi_command_buf, "", "");
KSYMTAB_FUNC(mipi_dbi_command_stackbuf, "", "");
KSYMTAB_FUNC(mipi_dbi_buf_copy, "", "");
KSYMTAB_FUNC(mipi_dbi_pipe_mode_valid, "", "");
KSYMTAB_FUNC(mipi_dbi_pipe_update, "", "");
KSYMTAB_FUNC(mipi_dbi_enable_flush, "", "");
KSYMTAB_FUNC(mipi_dbi_pipe_disable, "", "");
KSYMTAB_FUNC(mipi_dbi_pipe_begin_fb_access, "", "");
KSYMTAB_FUNC(mipi_dbi_pipe_end_fb_access, "", "");
KSYMTAB_FUNC(mipi_dbi_pipe_reset_plane, "", "");
KSYMTAB_FUNC(mipi_dbi_pipe_duplicate_plane_state, "", "");
KSYMTAB_FUNC(mipi_dbi_pipe_destroy_plane_state, "", "");
KSYMTAB_FUNC(mipi_dbi_dev_init_with_formats, "", "");
KSYMTAB_FUNC(mipi_dbi_dev_init, "", "");
KSYMTAB_FUNC(mipi_dbi_hw_reset, "", "");
KSYMTAB_FUNC(mipi_dbi_display_is_on, "", "");
KSYMTAB_FUNC(mipi_dbi_poweron_reset, "", "");
KSYMTAB_FUNC(mipi_dbi_poweron_conditional_reset, "", "");
KSYMTAB_FUNC(mipi_dbi_spi_cmd_max_speed, "", "");
KSYMTAB_FUNC(mipi_dbi_spi_init, "", "");
KSYMTAB_FUNC(mipi_dbi_spi_transfer, "", "");
KSYMTAB_FUNC(mipi_dbi_debugfs_init, "", "");

SYMBOL_CRC(mipi_dbi_command_read, 0x8991c3a4, "");
SYMBOL_CRC(mipi_dbi_command_buf, 0x18bbc3d7, "");
SYMBOL_CRC(mipi_dbi_command_stackbuf, 0x39ac332b, "");
SYMBOL_CRC(mipi_dbi_buf_copy, 0xb40b8c6a, "");
SYMBOL_CRC(mipi_dbi_pipe_mode_valid, 0x46578f40, "");
SYMBOL_CRC(mipi_dbi_pipe_update, 0x2a617e70, "");
SYMBOL_CRC(mipi_dbi_enable_flush, 0x6aef94f1, "");
SYMBOL_CRC(mipi_dbi_pipe_disable, 0xa93f0e01, "");
SYMBOL_CRC(mipi_dbi_pipe_begin_fb_access, 0x5ce326be, "");
SYMBOL_CRC(mipi_dbi_pipe_end_fb_access, 0xbcd1288f, "");
SYMBOL_CRC(mipi_dbi_pipe_reset_plane, 0xff4eff87, "");
SYMBOL_CRC(mipi_dbi_pipe_duplicate_plane_state, 0x528298cb, "");
SYMBOL_CRC(mipi_dbi_pipe_destroy_plane_state, 0x47a5e48b, "");
SYMBOL_CRC(mipi_dbi_dev_init_with_formats, 0x34260a5a, "");
SYMBOL_CRC(mipi_dbi_dev_init, 0x2dc59690, "");
SYMBOL_CRC(mipi_dbi_hw_reset, 0x9632a47f, "");
SYMBOL_CRC(mipi_dbi_display_is_on, 0xe811700a, "");
SYMBOL_CRC(mipi_dbi_poweron_reset, 0x54f25b72, "");
SYMBOL_CRC(mipi_dbi_poweron_conditional_reset, 0x2f336ba2, "");
SYMBOL_CRC(mipi_dbi_spi_cmd_max_speed, 0x60eaf999, "");
SYMBOL_CRC(mipi_dbi_spi_init, 0x952a302c, "");
SYMBOL_CRC(mipi_dbi_spi_transfer, 0xc2a52c36, "");
SYMBOL_CRC(mipi_dbi_debugfs_init, 0x685bf0c1, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xd730b065, "drm_gem_fb_get_obj" },
	{ 0x374bbb41, "drm_gem_fb_begin_cpu_access" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb34fe603, "drm_fb_memcpy" },
	{ 0x3870777f, "drm_gem_fb_end_cpu_access" },
	{ 0xf4b177de, "drm_fb_swab" },
	{ 0xbef1a85d, "drm_fb_xrgb8888_to_rgb565" },
	{ 0xec2d9d5b, "drm_fb_xrgb8888_to_rgb888" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7027c89, "drm_crtc_helper_mode_valid_fixed" },
	{ 0xcb5da82c, "drm_gem_begin_shadow_fb_access" },
	{ 0xb49d79c2, "drm_gem_end_shadow_fb_access" },
	{ 0xab405b7b, "drm_gem_reset_shadow_plane" },
	{ 0x3b3409c7, "drm_gem_duplicate_shadow_plane_state" },
	{ 0x1303331f, "drm_gem_destroy_shadow_plane_state" },
	{ 0x4b3f8125, "drmm_mode_config_init" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0x72262e40, "drm_connector_init" },
	{ 0x104a6fc1, "drm_simple_display_pipe_init" },
	{ 0x85b256c9, "drm_plane_enable_fb_damage_clips" },
	{ 0x1d6d457d, "__drm_dev_dbg" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x1177079f, "drm_connector_helper_get_modes_fixed" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x71c90ddc, "single_open" },
	{ 0xdcb764ad, "memset" },
	{ 0xd64810fa, "drm_dev_enter" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x11089ac7, "_ctype" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xb53675e6, "seq_write" },
	{ 0xb0701561, "spi_sync_locked" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9deccbf9, "spi_bus_lock" },
	{ 0x23966dbc, "spi_bus_unlock" },
	{ 0x4829a47e, "memcpy" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x6910e4cd, "drm_format_info_min_pitch" },
	{ 0x55eb38da, "drm_format_info" },
	{ 0xe86dfe44, "drm_atomic_helper_damage_merged" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xa422f13e, "drm_dev_printk" },
	{ 0x8f0dae1c, "drm_atomic_helper_connector_reset" },
	{ 0xeaa8bb30, "drm_helper_probe_single_connector_modes" },
	{ 0x1c1ef61e, "drm_connector_cleanup" },
	{ 0x3b0a7432, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xf5ed3c2b, "drm_atomic_helper_connector_destroy_state" },
	{ 0xcf4d4388, "drm_gem_fb_create_with_dirty" },
	{ 0x7b17c290, "drm_atomic_helper_check" },
	{ 0x8ea37240, "drm_atomic_helper_commit" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x661256ad, "seq_read" },
	{ 0x10139ad8, "single_release" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");


MODULE_INFO(srcversion, "96C9CC9C28541C9977C358E");
