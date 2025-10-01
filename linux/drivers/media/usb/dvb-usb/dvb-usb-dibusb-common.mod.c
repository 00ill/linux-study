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

KSYMTAB_FUNC(dibusb_streaming_ctrl, "", "");
KSYMTAB_FUNC(dibusb_pid_filter, "", "");
KSYMTAB_FUNC(dibusb_pid_filter_ctrl, "", "");
KSYMTAB_FUNC(dibusb_power_ctrl, "", "");
KSYMTAB_FUNC(dibusb2_0_streaming_ctrl, "", "");
KSYMTAB_FUNC(dibusb2_0_power_ctrl, "", "");
KSYMTAB_DATA(dibusb_i2c_algo, "", "");
KSYMTAB_FUNC(dibusb_read_eeprom_byte, "", "");
KSYMTAB_DATA(rc_map_dibusb_table, "", "");
KSYMTAB_FUNC(dibusb_rc_query, "", "");

SYMBOL_CRC(dibusb_streaming_ctrl, 0x45141a02, "");
SYMBOL_CRC(dibusb_pid_filter, 0xcc05e0fd, "");
SYMBOL_CRC(dibusb_pid_filter_ctrl, 0x13f151fe, "");
SYMBOL_CRC(dibusb_power_ctrl, 0xff25e108, "");
SYMBOL_CRC(dibusb2_0_streaming_ctrl, 0x84765499, "");
SYMBOL_CRC(dibusb2_0_power_ctrl, 0xba69fd43, "");
SYMBOL_CRC(dibusb_i2c_algo, 0x0732afc8, "");
SYMBOL_CRC(dibusb_read_eeprom_byte, 0x79cb8351, "");
SYMBOL_CRC(rc_map_dibusb_table, 0x93822ecb, "");
SYMBOL_CRC(dibusb_rc_query, 0x8265c575, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x26aca8c, "dvb_usb_nec_rc_key_to_event" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x46b92066, "dvb_usb_generic_rw" },
	{ 0x122c3a7e, "_printk" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x89f3455f, "dvb_usb_generic_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb-usb");


MODULE_INFO(srcversion, "4A0E7ED05F75D069E59F0E7");
