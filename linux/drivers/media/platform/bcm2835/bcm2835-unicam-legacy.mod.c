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
	{ 0xcb6beb61, "v4l2_s_parm_cap" },
	{ 0x4eea661, "devm_platform_ioremap_resource" },
	{ 0x77731343, "video_ioctl2" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x469438cc, "of_node_put" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x53679031, "vb2_ioctl_expbuf" },
	{ 0x699fa38d, "media_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ee112f3, "v4l2_async_nf_register" },
	{ 0xfc8645a5, "v4l2_ctrl_add_handler" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x37a0cba, "kfree" },
	{ 0xa86fec6, "vb2_dma_contig_memops" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0x3cd4b93b, "of_graph_get_remote_port_parent" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0xbd37f2da, "media_entity_remote_pad_unique" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x3370bd5b, "__v4l2_subdev_state_alloc" },
	{ 0x37a84f24, "media_create_pad_link" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4bd9f606, "v4l2_g_parm_cap" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x4719faec, "v4l2_async_nf_init" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc4cdc578, "vb2_plane_cookie" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0x5b3e220d, "vb2_ioctl_prepare_buf" },
	{ 0x45359f52, "v4l2_fh_is_singular" },
	{ 0x669eb6bd, "v4l2_fh_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x576d600d, "dma_alloc_attrs" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x38b95834, "of_graph_get_next_endpoint" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x79926f0a, "v4l2_event_subscribe" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3eb29864, "media_pipeline_start" },
	{ 0xcad072de, "media_pipeline_stop" },
	{ 0xdcb764ad, "memset" },
	{ 0x93948a3c, "__v4l2_async_nf_add_fwnode" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x681fdc29, "dma_free_attrs" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0x21c64f30, "v4l2_async_nf_unregister" },
	{ 0x40d25356, "__v4l2_subdev_state_free" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0x4f9f9bb5, "__v4l2_device_register_subdev_nodes" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5b6a59bc, "v4l2_subdev_call_wrappers" },
	{ 0xd2434a7e, "v4l2_event_queue" },
	{ 0xa6d71c96, "v4l2_fwnode_endpoint_parse" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe3dc0d51, "_vb2_fop_release" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,v4l2-async,videobuf2-dma-contig,videobuf2-common,v4l2-dv-timings,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicam");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicamC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicam-legacy");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicam-legacyC*");

MODULE_INFO(srcversion, "085F2F21D4017978767EF6B");
