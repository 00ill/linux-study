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
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0x4eea661, "devm_platform_ioremap_resource" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x892dedb8, "vb2_queue_release" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x53679031, "vb2_ioctl_expbuf" },
	{ 0x699fa38d, "media_device_init" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa86fec6, "vb2_dma_contig_memops" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0xd852811d, "v4l2_subdev_init" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x37a84f24, "media_create_pad_link" },
	{ 0x49355b79, "v4l2_subdev_link_validate_default" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc4cdc578, "vb2_plane_cookie" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0x5b3e220d, "vb2_ioctl_prepare_buf" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x25e1210d, "__v4l2_device_register_subdev" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0xe0d6e4b1, "vb2_wait_for_all_buffers" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,videobuf2-dma-contig,videobuf2-common");

MODULE_ALIAS("of:N*T*Craspberrypi,pispbe");
MODULE_ALIAS("of:N*T*Craspberrypi,pispbeC*");

MODULE_INFO(srcversion, "A7F762B2D6E1D3B6000DD43");
