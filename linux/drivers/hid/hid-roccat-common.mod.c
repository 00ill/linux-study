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

KSYMTAB_FUNC(roccat_common2_receive, "_gpl", "");
KSYMTAB_FUNC(roccat_common2_send, "_gpl", "");
KSYMTAB_FUNC(roccat_common2_send_with_status, "_gpl", "");
KSYMTAB_FUNC(roccat_common2_device_init_struct, "_gpl", "");
KSYMTAB_FUNC(roccat_common2_sysfs_read, "_gpl", "");
KSYMTAB_FUNC(roccat_common2_sysfs_write, "_gpl", "");

SYMBOL_CRC(roccat_common2_receive, 0x93e829ee, "_gpl");
SYMBOL_CRC(roccat_common2_send, 0xc0a8e726, "_gpl");
SYMBOL_CRC(roccat_common2_send_with_status, 0xc80a151f, "_gpl");
SYMBOL_CRC(roccat_common2_device_init_struct, 0x4a66b58c, "_gpl");
SYMBOL_CRC(roccat_common2_sysfs_read, 0x72c96646, "_gpl");
SYMBOL_CRC(roccat_common2_sysfs_write, 0x0ed540df, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D5FF1F776F36C5C65F8998A");
