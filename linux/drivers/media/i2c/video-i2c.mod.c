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
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xca83565d, "regmap_get_device" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf64c3bb1, "v4l2_device_unregister" },
	{ 0x893a5557, "regmap_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ba53144, "video_devdata" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x7af7db8b, "__regmap_init_i2c" },
	{ 0x42db93b6, "v4l2_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x91747f5f, "vb2_vmalloc_memops" },
	{ 0x5a40e7cd, "vb2_queue_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0x2005d56d, "devm_nvmem_register" },
	{ 0xb68f376, "__video_register_device" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x72764206, "vb2_buffer_done" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x179f2fe4, "vb2_plane_vaddr" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4958742, "freezing_slow_path" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x9c63214c, "vb2_ops_wait_prepare" },
	{ 0x2be10869, "vb2_ops_wait_finish" },
	{ 0x23e24800, "vb2_fop_read" },
	{ 0x53e0ec70, "vb2_fop_poll" },
	{ 0x77731343, "video_ioctl2" },
	{ 0x8c4d9c9f, "vb2_fop_mmap" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0xc715c568, "vb2_fop_release" },
	{ 0xecf2ff56, "vb2_ioctl_reqbufs" },
	{ 0x23027153, "vb2_ioctl_querybuf" },
	{ 0xc604f82f, "vb2_ioctl_qbuf" },
	{ 0x3e23b10, "vb2_ioctl_dqbuf" },
	{ 0xe22e2643, "vb2_ioctl_create_bufs" },
	{ 0x5b3e220d, "vb2_ioctl_prepare_buf" },
	{ 0x9d6f715c, "vb2_ioctl_streamon" },
	{ 0xa25a1ff2, "vb2_ioctl_streamoff" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,regmap-i2c,videobuf2-vmalloc,videobuf2-v4l2,videobuf2-common");

MODULE_ALIAS("of:N*T*Cpanasonic,amg88xx");
MODULE_ALIAS("of:N*T*Cpanasonic,amg88xxC*");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90640");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90640C*");
MODULE_ALIAS("i2c:amg88xx");
MODULE_ALIAS("i2c:mlx90640");

MODULE_INFO(srcversion, "721F0D9ABAFFFFD73498686");
