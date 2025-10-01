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
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x469438cc, "of_node_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x1ae01d5f, "drm_simple_display_pipe_attach_bridge" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb7c5e0a, "drm_atomic_helper_shutdown" },
	{ 0xb5560f7d, "rp1_pio_sm_unclaim" },
	{ 0x4829a47e, "memcpy" },
	{ 0x20c78d0, "drm_connector_list_iter_begin" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x4b3f8125, "drmm_mode_config_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x2536a64a, "pinctrl_pm_select_default_state" },
	{ 0xb17ab57c, "drm_crtc_vblank_get" },
	{ 0x8811271b, "drm_crtc_send_vblank_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8ea37240, "drm_atomic_helper_commit" },
	{ 0x7b17c290, "drm_atomic_helper_check" },
	{ 0x80d157b7, "drm_connector_list_iter_end" },
	{ 0x1b856312, "drm_gem_mmap" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xff10c4b3, "drm_ioctl" },
	{ 0x2048a782, "rp1_pio_sm_claim" },
	{ 0x669c413b, "_dev_err" },
	{ 0x147c8e68, "pinctrl_pm_select_sleep_state" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xa426d5b4, "rp1_pio_sm_init" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x86c1af4e, "drm_read" },
	{ 0xef7fa408, "platform_get_resource" },
	{ 0x1e1a7675, "drm_gem_dma_dumb_create" },
	{ 0xa2a3ad6, "drm_crtc_vblank_on" },
	{ 0x3a1aed17, "of_property_read_string" },
	{ 0xe2d7440d, "drm_gem_fb_create" },
	{ 0xd730b065, "drm_gem_fb_get_obj" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x25ddbd6a, "drm_dev_unregister" },
	{ 0x2f588f7f, "__devm_drm_dev_alloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x23f1bf0f, "drm_dev_put" },
	{ 0x104a6fc1, "drm_simple_display_pipe_init" },
	{ 0xcb1a1a, "rp1_pio_sm_set_enabled" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb478565a, "rp1_pio_add_program" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0x29925ff9, "rp1_pio_open" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd2d5b51b, "drm_connector_list_iter_next" },
	{ 0x86824528, "drm_vblank_init" },
	{ 0xb103a745, "rp1_pio_close" },
	{ 0xf566e43f, "devm_drm_panel_bridge_add" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x40601870, "drm_of_find_panel_or_bridge" },
	{ 0xcae3b64b, "devm_ioremap_resource" },
	{ 0x8b938f98, "drm_crtc_vblank_off" },
	{ 0x2459cb00, "drm_fbdev_ttm_setup" },
	{ 0x807491f7, "drm_crtc_handle_vblank" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x78684f51, "rp1_pio_sm_exec" },
	{ 0xbbec3e41, "drm_mode_config_reset" },
	{ 0xd7dbf556, "of_property_read_u32_index" },
	{ 0xf3280aea, "rp1_pio_gpio_set_function" },
	{ 0xd16c58bb, "drm_crtc_arm_vblank_event" },
	{ 0xe73f23fd, "rp1_pio_sm_set_pindirs" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2f64a4f6, "rp1_pio_gpio_init" },
	{ 0xe560574b, "drm_compat_ioctl" },
	{ 0x1a5edd0c, "drm_dev_register" },
	{ 0xf9eeca06, "rp1_pio_sm_put" },
	{ 0xba80b828, "rp1_pio_set_error" },
	{ 0xebe20c1, "of_property_read_string_helper" },
	{ 0xbe0bc941, "drm_release" },
	{ 0x813ec68c, "drm_gem_dma_prime_import_sg_table" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,rp1-pio,drm_dma_helper,drm_ttm_helper");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1dpi");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1dpiC*");

MODULE_INFO(srcversion, "36EA8249AFD89D7F8E3C721");
