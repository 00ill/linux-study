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
	{ 0xcd47056b, "__spi_register_driver" },
	{ 0xb7c5e0a, "drm_atomic_helper_shutdown" },
	{ 0x1469dd5f, "drm_dev_unplug" },
	{ 0xd64810fa, "drm_dev_enter" },
	{ 0x1d6d457d, "__drm_dev_dbg" },
	{ 0x2f336ba2, "mipi_dbi_poweron_conditional_reset" },
	{ 0x6aef94f1, "mipi_dbi_enable_flush" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x39ac332b, "mipi_dbi_command_stackbuf" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x92893115, "driver_unregister" },
	{ 0xebe20c1, "of_property_read_string_helper" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0xdcb764ad, "memset" },
	{ 0x2f588f7f, "__devm_drm_dev_alloc" },
	{ 0x9237c7ed, "of_get_drm_panel_display_mode" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0xa0f34315, "devm_of_find_backlight" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x952a302c, "mipi_dbi_spi_init" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0xa0fffb26, "device_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34260a5a, "mipi_dbi_dev_init_with_formats" },
	{ 0xbbec3e41, "drm_mode_config_reset" },
	{ 0x1a5edd0c, "drm_dev_register" },
	{ 0x682ae15e, "drm_client_setup_with_fourcc" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x685bf0c1, "mipi_dbi_debugfs_init" },
	{ 0x6b113d57, "drm_gem_dma_prime_import_sg_table_vmap" },
	{ 0x1e1a7675, "drm_gem_dma_dumb_create" },
	{ 0xbeab5b61, "drm_fbdev_dma_driver_fbdev_probe" },
	{ 0x46578f40, "mipi_dbi_pipe_mode_valid" },
	{ 0xa93f0e01, "mipi_dbi_pipe_disable" },
	{ 0x2a617e70, "mipi_dbi_pipe_update" },
	{ 0x5ce326be, "mipi_dbi_pipe_begin_fb_access" },
	{ 0xbcd1288f, "mipi_dbi_pipe_end_fb_access" },
	{ 0xff4eff87, "mipi_dbi_pipe_reset_plane" },
	{ 0x528298cb, "mipi_dbi_pipe_duplicate_plane_state" },
	{ 0x47a5e48b, "mipi_dbi_pipe_destroy_plane_state" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x86c1af4e, "drm_read" },
	{ 0x4fbf9f6f, "drm_poll" },
	{ 0xff10c4b3, "drm_ioctl" },
	{ 0xe560574b, "drm_compat_ioctl" },
	{ 0x1b856312, "drm_gem_mmap" },
	{ 0xf3695ed3, "drm_open" },
	{ 0xbe0bc941, "drm_release" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,drm_mipi_dbi,backlight,drm_dma_helper");

MODULE_ALIAS("spi:panel-mipi-dbi-spi");
MODULE_ALIAS("of:N*T*Cpanel-mipi-dbi-spi");
MODULE_ALIAS("of:N*T*Cpanel-mipi-dbi-spiC*");

MODULE_INFO(srcversion, "07417F599039BFF4BEC8460");
