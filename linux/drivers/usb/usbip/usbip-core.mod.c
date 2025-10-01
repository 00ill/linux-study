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

KSYMTAB_DATA(usbip_debug_flag, "_gpl", "");
KSYMTAB_DATA(dev_attr_usbip_debug, "_gpl", "");
KSYMTAB_FUNC(usbip_dump_urb, "_gpl", "");
KSYMTAB_FUNC(usbip_dump_header, "_gpl", "");
KSYMTAB_FUNC(usbip_recv, "_gpl", "");
KSYMTAB_FUNC(usbip_pack_pdu, "_gpl", "");
KSYMTAB_FUNC(usbip_header_correct_endian, "_gpl", "");
KSYMTAB_FUNC(usbip_alloc_iso_desc_pdu, "_gpl", "");
KSYMTAB_FUNC(usbip_recv_iso, "_gpl", "");
KSYMTAB_FUNC(usbip_pad_iso, "_gpl", "");
KSYMTAB_FUNC(usbip_recv_xbuff, "_gpl", "");
KSYMTAB_FUNC(usbip_start_eh, "_gpl", "");
KSYMTAB_FUNC(usbip_stop_eh, "_gpl", "");
KSYMTAB_FUNC(usbip_event_add, "_gpl", "");
KSYMTAB_FUNC(usbip_event_happened, "_gpl", "");
KSYMTAB_FUNC(usbip_in_eh, "_gpl", "");

SYMBOL_CRC(usbip_debug_flag, 0x78b72f44, "_gpl");
SYMBOL_CRC(dev_attr_usbip_debug, 0x0b1ec03d, "_gpl");
SYMBOL_CRC(usbip_dump_urb, 0x6dc233e6, "_gpl");
SYMBOL_CRC(usbip_dump_header, 0xe1ea0586, "_gpl");
SYMBOL_CRC(usbip_recv, 0x1d0af1d5, "_gpl");
SYMBOL_CRC(usbip_pack_pdu, 0x4258fad8, "_gpl");
SYMBOL_CRC(usbip_header_correct_endian, 0xd02753dc, "_gpl");
SYMBOL_CRC(usbip_alloc_iso_desc_pdu, 0x23943b9d, "_gpl");
SYMBOL_CRC(usbip_recv_iso, 0xfc3471ef, "_gpl");
SYMBOL_CRC(usbip_pad_iso, 0x6751c2d0, "_gpl");
SYMBOL_CRC(usbip_recv_xbuff, 0xd2ecdcb9, "_gpl");
SYMBOL_CRC(usbip_start_eh, 0x03b455f4, "_gpl");
SYMBOL_CRC(usbip_stop_eh, 0xf6ae260e, "_gpl");
SYMBOL_CRC(usbip_event_add, 0xf34acbf4, "_gpl");
SYMBOL_CRC(usbip_event_happened, 0xa05a6e64, "_gpl");
SYMBOL_CRC(usbip_in_eh, 0x4bfd454d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x49a2e97f, "param_ops_ulong" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xff65ed11, "iov_iter_kvec" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4542181e, "sock_recvmsg" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FB47B719EEEB813331CE05C");
