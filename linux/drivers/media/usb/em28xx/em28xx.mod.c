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

KSYMTAB_FUNC(em28xx_read_reg, "_gpl", "");
KSYMTAB_FUNC(em28xx_write_regs, "_gpl", "");
KSYMTAB_FUNC(em28xx_write_reg, "_gpl", "");
KSYMTAB_FUNC(em28xx_write_reg_bits, "_gpl", "");
KSYMTAB_FUNC(em28xx_toggle_reg_bits, "_gpl", "");
KSYMTAB_FUNC(em28xx_read_ac97, "_gpl", "");
KSYMTAB_FUNC(em28xx_write_ac97, "_gpl", "");
KSYMTAB_FUNC(em28xx_audio_analog_set, "_gpl", "");
KSYMTAB_FUNC(em28xx_audio_setup, "_gpl", "");
KSYMTAB_FUNC(em28xx_find_led, "_gpl", "");
KSYMTAB_FUNC(em28xx_gpio_set, "_gpl", "");
KSYMTAB_FUNC(em28xx_set_mode, "_gpl", "");
KSYMTAB_FUNC(em28xx_uninit_usb_xfer, "_gpl", "");
KSYMTAB_FUNC(em28xx_stop_urbs, "_gpl", "");
KSYMTAB_FUNC(em28xx_alloc_urbs, "_gpl", "");
KSYMTAB_FUNC(em28xx_init_usb_xfer, "_gpl", "");
KSYMTAB_FUNC(em28xx_register_extension, "", "");
KSYMTAB_FUNC(em28xx_unregister_extension, "", "");
KSYMTAB_DATA(em28xx_boards, "_gpl", "");
KSYMTAB_FUNC(em28xx_tuner_callback, "_gpl", "");
KSYMTAB_FUNC(em28xx_setup_xc3028, "_gpl", "");
KSYMTAB_FUNC(em28xx_free_device, "_gpl", "");
KSYMTAB_FUNC(em28xx_init_camera, "_gpl", "");

SYMBOL_CRC(em28xx_read_reg, 0xf8c2b5a7, "_gpl");
SYMBOL_CRC(em28xx_write_regs, 0xc3a664eb, "_gpl");
SYMBOL_CRC(em28xx_write_reg, 0x01ff3d80, "_gpl");
SYMBOL_CRC(em28xx_write_reg_bits, 0xeff886a7, "_gpl");
SYMBOL_CRC(em28xx_toggle_reg_bits, 0xbfa8ec75, "_gpl");
SYMBOL_CRC(em28xx_read_ac97, 0xf29cfe4d, "_gpl");
SYMBOL_CRC(em28xx_write_ac97, 0x1c1df557, "_gpl");
SYMBOL_CRC(em28xx_audio_analog_set, 0xc07cc92d, "_gpl");
SYMBOL_CRC(em28xx_audio_setup, 0xfb132a64, "_gpl");
SYMBOL_CRC(em28xx_find_led, 0x591e5fc2, "_gpl");
SYMBOL_CRC(em28xx_gpio_set, 0x3f394783, "_gpl");
SYMBOL_CRC(em28xx_set_mode, 0x2235ac2b, "_gpl");
SYMBOL_CRC(em28xx_uninit_usb_xfer, 0xe24747f9, "_gpl");
SYMBOL_CRC(em28xx_stop_urbs, 0xba14dc88, "_gpl");
SYMBOL_CRC(em28xx_alloc_urbs, 0x34e2467a, "_gpl");
SYMBOL_CRC(em28xx_init_usb_xfer, 0xc4206b7a, "_gpl");
SYMBOL_CRC(em28xx_register_extension, 0x9f63cedb, "");
SYMBOL_CRC(em28xx_unregister_extension, 0xa6107fa3, "");
SYMBOL_CRC(em28xx_boards, 0x921d7c65, "_gpl");
SYMBOL_CRC(em28xx_tuner_callback, 0x7fc8652c, "_gpl");
SYMBOL_CRC(em28xx_setup_xc3028, 0xd40d0641, "_gpl");
SYMBOL_CRC(em28xx_free_device, 0x721f7cc7, "_gpl");
SYMBOL_CRC(em28xx_init_camera, 0x8f1536b6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xc723ad01, "media_device_unregister" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x38dd9530, "v4l2_i2c_new_subdev_board" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xef3c20fa, "__media_device_register" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0x87b55f30, "usb_clear_halt" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb053f582, "media_device_cleanup" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4e323edc, "rt_mutex_unlock" },
	{ 0xa9a9fc43, "rt_mutex_trylock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54f65aa7, "__rt_mutex_init" },
	{ 0x3501dbb8, "__media_device_usb_init" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x5b6a59bc, "v4l2_subdev_call_wrappers" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x374647f3, "_dev_printk" },
	{ 0xefa7f375, "i2c_smbus_read_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mc,videodev,tveeprom");

MODULE_ALIAS("usb:vEB1Ap2750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2751d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2710d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2860d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2862d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2863d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2881d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2883d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2868d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2875d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2885d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApA313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApA316d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE355d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap2801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp004Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp004Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp008Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10ADd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0084d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0096d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10AFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6517d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p651Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p651Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p0265d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8265d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p026Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p826Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p846Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0438pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001pF112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p021Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap50A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pA340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE34Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p024Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p024Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p1605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE755d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap5006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp1ABEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE1CCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p9003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p9004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0258d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p8258d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0461d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p8461d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p0264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3275p0085d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap5051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE349d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6510ED1ADA576E8D84D5880");
