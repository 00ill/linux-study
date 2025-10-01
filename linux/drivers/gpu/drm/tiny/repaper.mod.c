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
	{ 0xdcb764ad, "memset" },
	{ 0xce12c86b, "spi_sync" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x7027c89, "drm_crtc_helper_mode_valid_fixed" },
	{ 0x1177079f, "drm_connector_helper_get_modes_fixed" },
	{ 0x92893115, "driver_unregister" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x2f588f7f, "__devm_drm_dev_alloc" },
	{ 0x4b3f8125, "drmm_mode_config_init" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0xa0fffb26, "device_property_read_string" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x72262e40, "drm_connector_init" },
	{ 0x104a6fc1, "drm_simple_display_pipe_init" },
	{ 0xbbec3e41, "drm_mode_config_reset" },
	{ 0x1a5edd0c, "drm_dev_register" },
	{ 0x1d6d457d, "__drm_dev_dbg" },
	{ 0x9ffb2529, "drm_fbdev_dma_setup" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0xadecea6d, "thermal_zone_get_zone_by_name" },
	{ 0xa422f13e, "drm_dev_printk" },
	{ 0x8e7ae2d3, "spi_get_device_id" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe94986d6, "sched_clock" },
	{ 0xe86dfe44, "drm_atomic_helper_damage_merged" },
	{ 0x24e99aa5, "drm_format_conv_state_release" },
	{ 0x28f4b425, "drm_fb_dma_get_gem_obj" },
	{ 0xd64810fa, "drm_dev_enter" },
	{ 0xa7dd0a23, "thermal_zone_get_temp" },
	{ 0x374bbb41, "drm_gem_fb_begin_cpu_access" },
	{ 0xfdac4268, "drm_fb_xrgb8888_to_mono" },
	{ 0x3870777f, "drm_gem_fb_end_cpu_access" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf2cffaef, "gpiod_get_value_cansleep" },
	{ 0x669c413b, "_dev_err" },
	{ 0x6b113d57, "drm_gem_dma_prime_import_sg_table_vmap" },
	{ 0x1e1a7675, "drm_gem_dma_dumb_create" },
	{ 0xcf4d4388, "drm_gem_fb_create_with_dirty" },
	{ 0x7b17c290, "drm_atomic_helper_check" },
	{ 0x8ea37240, "drm_atomic_helper_commit" },
	{ 0x8f0dae1c, "drm_atomic_helper_connector_reset" },
	{ 0xeaa8bb30, "drm_helper_probe_single_connector_modes" },
	{ 0x1c1ef61e, "drm_connector_cleanup" },
	{ 0x3b0a7432, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xf5ed3c2b, "drm_atomic_helper_connector_destroy_state" },
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

MODULE_INFO(depends, "drm_kms_helper,drm,drm_dma_helper");

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "5E7BC670BF196237558320A");
