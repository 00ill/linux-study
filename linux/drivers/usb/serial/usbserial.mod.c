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

KSYMTAB_FUNC(usb_serial_claim_interface, "_gpl", "");
KSYMTAB_FUNC(usb_serial_port_softint, "_gpl", "");
KSYMTAB_FUNC(usb_serial_suspend, "", "");
KSYMTAB_FUNC(usb_serial_resume, "", "");
KSYMTAB_FUNC(__usb_serial_register_drivers, "_gpl", "");
KSYMTAB_FUNC(usb_serial_deregister_drivers, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_open, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_close, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_write_start, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_write, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_chars_in_buffer, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_wait_until_sent, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_submit_read_urbs, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_process_read_urb, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_read_bulk_callback, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_write_bulk_callback, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_throttle, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_unthrottle, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_tiocmiwait, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_get_icount, "_gpl", "");
KSYMTAB_FUNC(usb_serial_handle_dcd_change, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_resume, "_gpl", "");

SYMBOL_CRC(usb_serial_claim_interface, 0xe99ffb07, "_gpl");
SYMBOL_CRC(usb_serial_port_softint, 0x061d6a5b, "_gpl");
SYMBOL_CRC(usb_serial_suspend, 0x34c4d45c, "");
SYMBOL_CRC(usb_serial_resume, 0x576a2f27, "");
SYMBOL_CRC(__usb_serial_register_drivers, 0x9e80f108, "_gpl");
SYMBOL_CRC(usb_serial_deregister_drivers, 0x90521f65, "_gpl");
SYMBOL_CRC(usb_serial_generic_open, 0xd2b5de5e, "_gpl");
SYMBOL_CRC(usb_serial_generic_close, 0x9cbf2887, "_gpl");
SYMBOL_CRC(usb_serial_generic_write_start, 0xfa493556, "_gpl");
SYMBOL_CRC(usb_serial_generic_write, 0x6b248ac1, "_gpl");
SYMBOL_CRC(usb_serial_generic_chars_in_buffer, 0xe775d84b, "_gpl");
SYMBOL_CRC(usb_serial_generic_wait_until_sent, 0xc8f7e630, "_gpl");
SYMBOL_CRC(usb_serial_generic_submit_read_urbs, 0xc1c22da0, "_gpl");
SYMBOL_CRC(usb_serial_generic_process_read_urb, 0x0ab95ad7, "_gpl");
SYMBOL_CRC(usb_serial_generic_read_bulk_callback, 0x36b2910b, "_gpl");
SYMBOL_CRC(usb_serial_generic_write_bulk_callback, 0x351ae593, "_gpl");
SYMBOL_CRC(usb_serial_generic_throttle, 0x87aed1dd, "_gpl");
SYMBOL_CRC(usb_serial_generic_unthrottle, 0xc34ad7a6, "_gpl");
SYMBOL_CRC(usb_serial_generic_tiocmiwait, 0x849dbc34, "_gpl");
SYMBOL_CRC(usb_serial_generic_get_icount, 0xaadd8ec7, "_gpl");
SYMBOL_CRC(usb_serial_handle_dcd_change, 0x43356bdc, "_gpl");
SYMBOL_CRC(usb_serial_generic_resume, 0x2c2e828e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc22550f5, "usb_put_intf" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0xb651c51e, "driver_attach" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbd907522, "tty_kref_put" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x12cd4efd, "usb_match_one_id" },
	{ 0x16965a52, "device_initialize" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x349114cf, "__tty_alloc_driver" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5618b05a, "tty_standard_install" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0xc83c3616, "tty_hangup" },
	{ 0x43915fbd, "tty_unregister_driver" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xe816048f, "tty_termios_copy_hw" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2ad25d23, "usb_get_intf" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x72b34551, "usb_driver_release_interface" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x36dc6ece, "put_device" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x2707a363, "tty_unregister_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9d9e8944, "module_put" },
	{ 0x462fbbdc, "tty_port_tty_wakeup" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xd762357, "usb_match_id" },
	{ 0x1ff0128e, "usb_store_new_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbf8790c5, "bus_unregister" },
	{ 0x669c413b, "_dev_err" },
	{ 0x7b1a51f0, "device_add" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x7b26eef5, "tty_ldisc_ref" },
	{ 0x284fe1e5, "tty_vhangup" },
	{ 0x5262ac7b, "__tty_insert_flip_string_flags" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x50ece8ef, "tty_port_destroy" },
	{ 0xde4c8c8c, "tty_port_init" },
	{ 0xf6491f8c, "usb_driver_claim_interface" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xf74654c, "usb_poison_urb" },
	{ 0xd4d6b2da, "usb_unpoison_urb" },
	{ 0x92893115, "driver_unregister" },
	{ 0x2621f61e, "tty_port_register_device" },
	{ 0xbac04b09, "tty_ldisc_deref" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x73f49957, "device_del" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb45c05d7, "tty_port_close" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x737a3a00, "tty_register_driver" },
	{ 0xb53675e6, "seq_write" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4892aee0, "tty_port_hangup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xd89dd07a, "tty_port_open" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xf2772c4e, "driver_register" },
	{ 0x2888e9ea, "tty_driver_kref_put" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x1b367b9c, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x39e01600, "tty_port_tty_get" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F825C0AAF43902DB17F11CC");
