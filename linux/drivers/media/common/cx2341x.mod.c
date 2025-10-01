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

KSYMTAB_DATA(cx2341x_mpeg_ctrls, "", "");
KSYMTAB_FUNC(cx2341x_ctrl_query, "", "");
KSYMTAB_FUNC(cx2341x_ctrl_get_menu, "", "");
KSYMTAB_FUNC(cx2341x_ext_ctrls, "", "");
KSYMTAB_FUNC(cx2341x_fill_defaults, "", "");
KSYMTAB_FUNC(cx2341x_update, "", "");
KSYMTAB_FUNC(cx2341x_log_status, "", "");
KSYMTAB_FUNC(cx2341x_handler_init, "", "");
KSYMTAB_FUNC(cx2341x_handler_set_50hz, "", "");
KSYMTAB_FUNC(cx2341x_handler_setup, "", "");
KSYMTAB_FUNC(cx2341x_handler_set_busy, "", "");

SYMBOL_CRC(cx2341x_mpeg_ctrls, 0x55aa7c5f, "");
SYMBOL_CRC(cx2341x_ctrl_query, 0x15ac1bd0, "");
SYMBOL_CRC(cx2341x_ctrl_get_menu, 0x28240e61, "");
SYMBOL_CRC(cx2341x_ext_ctrls, 0x24523648, "");
SYMBOL_CRC(cx2341x_fill_defaults, 0x7b4dd2cb, "");
SYMBOL_CRC(cx2341x_update, 0xdbc5583a, "");
SYMBOL_CRC(cx2341x_log_status, 0xe1fe1432, "");
SYMBOL_CRC(cx2341x_handler_init, 0x09143504, "");
SYMBOL_CRC(cx2341x_handler_set_50hz, 0x8a94a53c, "");
SYMBOL_CRC(cx2341x_handler_setup, 0xbb28d850, "");
SYMBOL_CRC(cx2341x_handler_set_busy, 0x4a9d6229, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd24101e7, "v4l2_ctrl_activate" },
	{ 0xa3f622a6, "v4l2_ctrl_g_ctrl" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x89e3897d, "v4l2_ctrl_query_fill" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x1ae48415, "v4l2_ctrl_new_std_menu" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xf27b4bb9, "v4l2_ctrl_cluster" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc90aa5df, "__v4l2_ctrl_grab" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "9B7366CAD416EC72424DA74");
