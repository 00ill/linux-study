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

KSYMTAB_FUNC(snd_tea575x_set_freq, "", "");
KSYMTAB_FUNC(snd_tea575x_enum_freq_bands, "", "");
KSYMTAB_FUNC(snd_tea575x_g_tuner, "", "");
KSYMTAB_FUNC(snd_tea575x_s_hw_freq_seek, "", "");
KSYMTAB_FUNC(snd_tea575x_hw_init, "", "");
KSYMTAB_FUNC(snd_tea575x_init, "", "");
KSYMTAB_FUNC(snd_tea575x_exit, "", "");

SYMBOL_CRC(snd_tea575x_set_freq, 0xb8e99dd2, "");
SYMBOL_CRC(snd_tea575x_enum_freq_bands, 0x634c494d, "");
SYMBOL_CRC(snd_tea575x_g_tuner, 0xc9399a46, "");
SYMBOL_CRC(snd_tea575x_s_hw_freq_seek, 0x738b88a8, "");
SYMBOL_CRC(snd_tea575x_hw_init, 0x17f1d28b, "");
SYMBOL_CRC(snd_tea575x_init, 0x83980396, "");
SYMBOL_CRC(snd_tea575x_exit, 0x2748aa8d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdcb764ad, "memset" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9ba53144, "video_devdata" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5555588e, "video_unregister_device" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3dda0032, "video_device_release_empty" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7f71a789, "v4l2_ctrl_poll" },
	{ 0x77731343, "video_ioctl2" },
	{ 0x1708872e, "v4l2_fh_open" },
	{ 0x669eb6bd, "v4l2_fh_release" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0xb68f376, "__video_register_device" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x122c3a7e, "_printk" },
	{ 0x41f63b90, "v4l2_ctrl_log_status" },
	{ 0xaafe5e32, "v4l2_ctrl_subscribe_event" },
	{ 0xfdcd2ee2, "v4l2_event_unsubscribe" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "1137E254B0CB801DF4730CB");
