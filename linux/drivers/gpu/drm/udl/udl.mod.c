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
	{ 0x78ac5d56, "drm_kms_helper_poll_fini" },
	{ 0xf3695ed3, "drm_open" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x4fbf9f6f, "drm_poll" },
	{ 0x3870777f, "drm_gem_fb_end_cpu_access" },
	{ 0xd64810fa, "drm_dev_enter" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xe358c2e0, "drm_kms_helper_poll_init" },
	{ 0x85b256c9, "drm_plane_enable_fb_damage_clips" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x9b98332d, "drm_gem_shmem_dumb_create" },
	{ 0xab0090ef, "drm_atomic_helper_disable_plane" },
	{ 0x6b5c2b06, "drm_atomic_helper_damage_iter_next" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x397c3d27, "drm_edid_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xef46c7da, "drm_atomic_helper_crtc_destroy_state" },
	{ 0x6cc02582, "drm_crtc_cleanup" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc6acd46e, "drm_encoder_cleanup" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4b3f8125, "drmm_mode_config_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x33b1ad47, "drm_connector_attach_encoder" },
	{ 0x56ced639, "drm_edid_connector_update" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9fee9565, "drm_atomic_helper_damage_iter_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8ea37240, "drm_atomic_helper_commit" },
	{ 0x36dc6ece, "put_device" },
	{ 0x7b17c290, "drm_atomic_helper_check" },
	{ 0xf5ed3c2b, "drm_atomic_helper_connector_destroy_state" },
	{ 0x1b856312, "drm_gem_mmap" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x3b3409c7, "drm_gem_duplicate_shadow_plane_state" },
	{ 0xff10c4b3, "drm_ioctl" },
	{ 0x19c3261a, "drm_plane_cleanup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1469dd5f, "drm_dev_unplug" },
	{ 0x72262e40, "drm_connector_init" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0x1f9f5256, "drm_mode_config_helper_suspend" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x3c9ca460, "usb_intf_get_dma_device" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x86c1af4e, "drm_read" },
	{ 0xc6ae8403, "drm_edid_connector_add_modes" },
	{ 0xcf4d4388, "drm_gem_fb_create_with_dirty" },
	{ 0xcb5da82c, "drm_gem_begin_shadow_fb_access" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xa860e858, "drm_atomic_helper_check_plane_state" },
	{ 0x3bfca48b, "drm_crtc_init_with_planes" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xeb049fee, "drm_edid_read_custom" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x1d6d457d, "__drm_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2f588f7f, "__devm_drm_dev_alloc" },
	{ 0x82f5f5c3, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd7951635, "drm_atomic_helper_set_config" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd06c797e, "usb_get_descriptor" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3b0a7432, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x1c1ef61e, "drm_connector_cleanup" },
	{ 0xafae9b14, "drm_universal_plane_init" },
	{ 0x1303331f, "drm_gem_destroy_shadow_plane_state" },
	{ 0x1057a590, "drm_atomic_helper_crtc_reset" },
	{ 0xc85dc5c6, "drm_encoder_init" },
	{ 0x374bbb41, "drm_gem_fb_begin_cpu_access" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xeaa8bb30, "drm_helper_probe_single_connector_modes" },
	{ 0xe68c3161, "drm_gem_prime_import_dev" },
	{ 0xab405b7b, "drm_gem_reset_shadow_plane" },
	{ 0xb49d79c2, "drm_gem_end_shadow_fb_access" },
	{ 0xb0753572, "drm_crtc_helper_atomic_check" },
	{ 0xe2d7d12e, "drm_atomic_helper_page_flip" },
	{ 0x8f0dae1c, "drm_atomic_helper_connector_reset" },
	{ 0xbbec3e41, "drm_mode_config_reset" },
	{ 0xf3feca45, "drm_mode_config_helper_resume" },
	{ 0x8c8a90aa, "drm_atomic_helper_crtc_duplicate_state" },
	{ 0x8ebda65d, "drm_fbdev_shmem_setup" },
	{ 0x759b0caa, "drm_atomic_helper_update_plane" },
	{ 0xe560574b, "drm_compat_ioctl" },
	{ 0x1a5edd0c, "drm_dev_register" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xbe0bc941, "drm_release" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,drm_shmem_helper");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "543F1329B44A2D250512264");
