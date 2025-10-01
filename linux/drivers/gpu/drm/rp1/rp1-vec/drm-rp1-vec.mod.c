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
	{ 0xf3695ed3, "drm_open" },
	{ 0x4fbf9f6f, "drm_poll" },
	{ 0x4d7a29f6, "drm_atomic_helper_connector_tv_reset" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0xa6257a2f, "complete" },
	{ 0x595ea9b6, "drm_mode_probed_add" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb7c5e0a, "drm_atomic_helper_shutdown" },
	{ 0xc022b350, "drm_connector_unregister" },
	{ 0x4b3f8125, "drmm_mode_config_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0xb17ab57c, "drm_crtc_vblank_get" },
	{ 0x8811271b, "drm_crtc_send_vblank_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8ea37240, "drm_atomic_helper_commit" },
	{ 0x7b17c290, "drm_atomic_helper_check" },
	{ 0xf5ed3c2b, "drm_atomic_helper_connector_destroy_state" },
	{ 0x1b856312, "drm_gem_mmap" },
	{ 0x33c0a193, "drm_mode_create" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xff10c4b3, "drm_ioctl" },
	{ 0x72262e40, "drm_connector_init" },
	{ 0x669c413b, "_dev_err" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x86c1af4e, "drm_read" },
	{ 0xef7fa408, "platform_get_resource" },
	{ 0x1e1a7675, "drm_gem_dma_dumb_create" },
	{ 0xa2a3ad6, "drm_crtc_vblank_on" },
	{ 0xe2d7440d, "drm_gem_fb_create" },
	{ 0xd730b065, "drm_gem_fb_get_obj" },
	{ 0x50405fae, "drm_mode_create_tv_properties" },
	{ 0x39439cdf, "drm_mode_duplicate" },
	{ 0x9ee3e45a, "drm_object_attach_property" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x25ddbd6a, "drm_dev_unregister" },
	{ 0x2f588f7f, "__devm_drm_dev_alloc" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x23f1bf0f, "drm_dev_put" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0x3b0a7432, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x104a6fc1, "drm_simple_display_pipe_init" },
	{ 0x1c1ef61e, "drm_connector_cleanup" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0x86824528, "drm_vblank_init" },
	{ 0x22ac1a6, "drm_object_property_get_default_value" },
	{ 0xcae3b64b, "devm_ioremap_resource" },
	{ 0x8b938f98, "drm_crtc_vblank_off" },
	{ 0xeaa8bb30, "drm_helper_probe_single_connector_modes" },
	{ 0x2459cb00, "drm_fbdev_ttm_setup" },
	{ 0x807491f7, "drm_crtc_handle_vblank" },
	{ 0xfc58f7a6, "drm_mode_destroy" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x8f0dae1c, "drm_atomic_helper_connector_reset" },
	{ 0xbbec3e41, "drm_mode_config_reset" },
	{ 0x349cba85, "strchr" },
	{ 0xd16c58bb, "drm_crtc_arm_vblank_event" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe560574b, "drm_compat_ioctl" },
	{ 0x1a5edd0c, "drm_dev_register" },
	{ 0xbe0bc941, "drm_release" },
	{ 0x813ec68c, "drm_gem_dma_prime_import_sg_table" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_dma_helper,drm_ttm_helper");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1vec");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1vecC*");

MODULE_INFO(srcversion, "8ED9E1D252CDC4D90FB08DB");
