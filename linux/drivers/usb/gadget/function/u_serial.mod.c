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

KSYMTAB_FUNC(gs_alloc_req, "_gpl", "");
KSYMTAB_FUNC(gs_free_req, "_gpl", "");
KSYMTAB_FUNC(gserial_free_line, "_gpl", "");
KSYMTAB_FUNC(gserial_alloc_line_no_console, "_gpl", "");
KSYMTAB_FUNC(gserial_alloc_line, "_gpl", "");
KSYMTAB_FUNC(gserial_connect, "_gpl", "");
KSYMTAB_FUNC(gserial_disconnect, "_gpl", "");
KSYMTAB_FUNC(gserial_suspend, "_gpl", "");
KSYMTAB_FUNC(gserial_resume, "_gpl", "");

SYMBOL_CRC(gs_alloc_req, 0xef80467f, "_gpl");
SYMBOL_CRC(gs_free_req, 0xdce89ef6, "_gpl");
SYMBOL_CRC(gserial_free_line, 0xb6652875, "_gpl");
SYMBOL_CRC(gserial_alloc_line_no_console, 0xe89dc424, "_gpl");
SYMBOL_CRC(gserial_alloc_line, 0x33bfdca2, "_gpl");
SYMBOL_CRC(gserial_connect, 0xfae6f0ff, "_gpl");
SYMBOL_CRC(gserial_disconnect, 0x87524a39, "_gpl");
SYMBOL_CRC(gserial_suspend, 0xed2829c9, "_gpl");
SYMBOL_CRC(gserial_resume, 0x868e9ba8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8ca7011c, "usb_ep_alloc_request" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0x349114cf, "__tty_alloc_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x737a3a00, "tty_register_driver" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2888e9ea, "tty_driver_kref_put" },
	{ 0x43915fbd, "tty_unregister_driver" },
	{ 0xe2964344, "__wake_up" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x462fbbdc, "tty_port_tty_wakeup" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x50ece8ef, "tty_port_destroy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2707a363, "tty_unregister_device" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xde4c8c8c, "tty_port_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2621f61e, "tty_port_register_device" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xbcf61715, "usb_ep_enable" },
	{ 0xd152cd3f, "usb_ep_disable" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc83c3616, "tty_hangup" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "61C2B4537AA455134BA60FF");
