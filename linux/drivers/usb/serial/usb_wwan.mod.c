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

KSYMTAB_FUNC(usb_wwan_dtr_rts, "", "");
KSYMTAB_FUNC(usb_wwan_tiocmget, "", "");
KSYMTAB_FUNC(usb_wwan_tiocmset, "", "");
KSYMTAB_FUNC(usb_wwan_write, "", "");
KSYMTAB_FUNC(usb_wwan_write_room, "", "");
KSYMTAB_FUNC(usb_wwan_chars_in_buffer, "", "");
KSYMTAB_FUNC(usb_wwan_open, "", "");
KSYMTAB_FUNC(usb_wwan_close, "", "");
KSYMTAB_FUNC(usb_wwan_port_probe, "_gpl", "");
KSYMTAB_FUNC(usb_wwan_port_remove, "", "");
KSYMTAB_FUNC(usb_wwan_suspend, "", "");
KSYMTAB_FUNC(usb_wwan_resume, "", "");

SYMBOL_CRC(usb_wwan_dtr_rts, 0xf546739b, "");
SYMBOL_CRC(usb_wwan_tiocmget, 0x2eb0f108, "");
SYMBOL_CRC(usb_wwan_tiocmset, 0xa1988144, "");
SYMBOL_CRC(usb_wwan_write, 0x4ed6f6e1, "");
SYMBOL_CRC(usb_wwan_write_room, 0x3cb577cb, "");
SYMBOL_CRC(usb_wwan_chars_in_buffer, 0xf1c92ae4, "");
SYMBOL_CRC(usb_wwan_open, 0x5df269d7, "");
SYMBOL_CRC(usb_wwan_close, 0x9742e7d6, "");
SYMBOL_CRC(usb_wwan_port_probe, 0x858f5f54, "_gpl");
SYMBOL_CRC(usb_wwan_port_remove, 0xb7ce9e5c, "");
SYMBOL_CRC(usb_wwan_suspend, 0x84eb2f66, "");
SYMBOL_CRC(usb_wwan_resume, 0x5af97615, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x669c413b, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3cf8929c, "usb_unlink_urb" },
	{ 0xf0f82afc, "usb_autopm_get_interface_async" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x15f01c27, "usb_autopm_put_interface_async" },
	{ 0xa1311ba2, "usb_get_from_anchor" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x1f4b34e8, "usb_autopm_get_interface_no_resume" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x61d6a5b, "usb_serial_port_softint" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "usbserial");


MODULE_INFO(srcversion, "113B80808F2D2FDAE0656DD");
