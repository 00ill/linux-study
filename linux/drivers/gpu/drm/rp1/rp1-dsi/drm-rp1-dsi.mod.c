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
	{ 0x1a943c61, "mipi_dsi_host_register" },
	{ 0xb96f2e38, "drm_bridge_add" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x1ae01d5f, "drm_simple_display_pipe_attach_bridge" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb7c5e0a, "drm_atomic_helper_shutdown" },
	{ 0x23daa989, "mipi_dsi_create_packet" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x4b3f8125, "drmm_mode_config_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x88276b49, "drm_atomic_helper_bridge_reset" },
	{ 0x8b5f7abc, "of_graph_get_endpoint_by_regs" },
	{ 0xb17ab57c, "drm_crtc_vblank_get" },
	{ 0x8811271b, "drm_crtc_send_vblank_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8ea37240, "drm_atomic_helper_commit" },
	{ 0x7b17c290, "drm_atomic_helper_check" },
	{ 0x1b856312, "drm_gem_mmap" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xff10c4b3, "drm_ioctl" },
	{ 0x669c413b, "_dev_err" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x86c1af4e, "drm_read" },
	{ 0xef7fa408, "platform_get_resource" },
	{ 0x1e1a7675, "drm_gem_dma_dumb_create" },
	{ 0x5a86c6d4, "of_property_count_elems_of_size" },
	{ 0xa2a3ad6, "drm_crtc_vblank_on" },
	{ 0xe2d7440d, "drm_gem_fb_create" },
	{ 0xd730b065, "drm_gem_fb_get_obj" },
	{ 0x1d6d457d, "__drm_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x25ddbd6a, "drm_dev_unregister" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa73b5450, "drmm_kmalloc" },
	{ 0x23f1bf0f, "drm_dev_put" },
	{ 0x104a6fc1, "drm_simple_display_pipe_init" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x86824528, "drm_vblank_init" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x4bd2941a, "drm_atomic_helper_bridge_destroy_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcae3b64b, "devm_ioremap_resource" },
	{ 0x8b938f98, "drm_crtc_vblank_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc0bb5bb3, "mipi_dsi_host_unregister" },
	{ 0x2459cb00, "drm_fbdev_ttm_setup" },
	{ 0x807491f7, "drm_crtc_handle_vblank" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x67b3f5eb, "drm_bridge_attach" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0xbbec3e41, "drm_mode_config_reset" },
	{ 0x95212ca6, "drmm_of_get_bridge" },
	{ 0x8738a8cb, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0x6489e8e1, "drm_dev_alloc" },
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

MODULE_ALIAS("of:N*T*Craspberrypi,rp1dsi");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1dsiC*");

MODULE_INFO(srcversion, "40A1465FFDEE7CC34A82BC3");
