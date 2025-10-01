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

KSYMTAB_DATA(ssd130x_variants, "_gpl", "DRM_SSD130X");
KSYMTAB_FUNC(ssd130x_probe, "_gpl", "");
KSYMTAB_FUNC(ssd130x_remove, "_gpl", "");
KSYMTAB_FUNC(ssd130x_shutdown, "_gpl", "");

SYMBOL_CRC(ssd130x_variants, 0x760c3ba6, "_gpl");
SYMBOL_CRC(ssd130x_probe, 0xb3aaa57c, "_gpl");
SYMBOL_CRC(ssd130x_remove, 0x189220e2, "_gpl");
SYMBOL_CRC(ssd130x_shutdown, 0x13d6ad52, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcc0983c6, "regmap_write" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2f588f7f, "__devm_drm_dev_alloc" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x606a79da, "device_property_read_u8_array" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0x9716458e, "devm_backlight_device_register" },
	{ 0x4b3f8125, "drmm_mode_config_init" },
	{ 0xafae9b14, "drm_universal_plane_init" },
	{ 0x85b256c9, "drm_plane_enable_fb_damage_clips" },
	{ 0x3bfca48b, "drm_crtc_init_with_planes" },
	{ 0xc85dc5c6, "drm_encoder_init" },
	{ 0x72262e40, "drm_connector_init" },
	{ 0x33b1ad47, "drm_connector_attach_encoder" },
	{ 0xbbec3e41, "drm_mode_config_reset" },
	{ 0x1a5edd0c, "drm_dev_register" },
	{ 0x8ebda65d, "drm_fbdev_shmem_setup" },
	{ 0x669c413b, "_dev_err" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x39439cdf, "drm_mode_duplicate" },
	{ 0x595ea9b6, "drm_mode_probed_add" },
	{ 0xca313957, "drm_set_preferred_mode" },
	{ 0xd877b3e9, "pwm_put" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x18337c70, "pwm_apply_might_sleep" },
	{ 0xb0753572, "drm_crtc_helper_atomic_check" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x55eb38da, "drm_format_info" },
	{ 0x6910e4cd, "drm_format_info_min_pitch" },
	{ 0x37a0cba, "kfree" },
	{ 0x470f4143, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x110bc9e3, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0xd64810fa, "drm_dev_enter" },
	{ 0xdcb764ad, "memset" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xa860e858, "drm_atomic_helper_check_plane_state" },
	{ 0xc2da6467, "__drm_gem_destroy_shadow_plane_state" },
	{ 0xd610c43f, "__drm_gem_duplicate_shadow_plane_state" },
	{ 0x1469dd5f, "drm_dev_unplug" },
	{ 0xb7c5e0a, "drm_atomic_helper_shutdown" },
	{ 0x84247d5d, "drm_format_conv_state_reserve" },
	{ 0x9fee9565, "drm_atomic_helper_damage_iter_init" },
	{ 0x6b5c2b06, "drm_atomic_helper_damage_iter_next" },
	{ 0x871ab41a, "drm_rect_intersect" },
	{ 0x374bbb41, "drm_gem_fb_begin_cpu_access" },
	{ 0x48bbed21, "drm_fb_xrgb8888_to_rgb332" },
	{ 0x3870777f, "drm_gem_fb_end_cpu_access" },
	{ 0x958353c3, "drm_fb_xrgb8888_to_gray8" },
	{ 0x40369cdf, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xf7b9149f, "pwm_get" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x25943e65, "__drm_atomic_helper_crtc_reset" },
	{ 0xba8f2d83, "__drm_gem_reset_shadow_plane" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xfdac4268, "drm_fb_xrgb8888_to_mono" },
	{ 0x82f5f5c3, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x9b98332d, "drm_gem_shmem_dumb_create" },
	{ 0xcf4d4388, "drm_gem_fb_create_with_dirty" },
	{ 0x7b17c290, "drm_atomic_helper_check" },
	{ 0x8ea37240, "drm_atomic_helper_commit" },
	{ 0x759b0caa, "drm_atomic_helper_update_plane" },
	{ 0xab0090ef, "drm_atomic_helper_disable_plane" },
	{ 0x19c3261a, "drm_plane_cleanup" },
	{ 0xcb5da82c, "drm_gem_begin_shadow_fb_access" },
	{ 0xb49d79c2, "drm_gem_end_shadow_fb_access" },
	{ 0x6cc02582, "drm_crtc_cleanup" },
	{ 0xd7951635, "drm_atomic_helper_set_config" },
	{ 0xe2d7d12e, "drm_atomic_helper_page_flip" },
	{ 0xc6acd46e, "drm_encoder_cleanup" },
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

MODULE_INFO(depends, "drm,backlight,drm_shmem_helper,drm_kms_helper");


MODULE_INFO(srcversion, "CFDA9634AF05C730D266647");
