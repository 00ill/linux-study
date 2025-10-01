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

KSYMTAB_FUNC(speakup_start_ttys, "_gpl", "");
KSYMTAB_FUNC(synth_buffer_empty, "_gpl", "");
KSYMTAB_FUNC(synth_buffer_getc, "_gpl", "");
KSYMTAB_FUNC(synth_buffer_peek, "_gpl", "");
KSYMTAB_FUNC(synth_buffer_skip_nonlatin1, "_gpl", "");
KSYMTAB_FUNC(synth_buffer_clear, "_gpl", "");
KSYMTAB_FUNC(spk_var_show, "_gpl", "");
KSYMTAB_FUNC(spk_var_store, "_gpl", "");
KSYMTAB_DATA(spk_ttyio_ops, "_gpl", "");
KSYMTAB_FUNC(spk_ttyio_synth_probe, "_gpl", "");
KSYMTAB_FUNC(spk_ttyio_release, "_gpl", "");
KSYMTAB_FUNC(spk_ttyio_synth_immediate, "_gpl", "");
KSYMTAB_DATA(speakup_info, "_gpl", "");
KSYMTAB_FUNC(spk_do_catch_up, "_gpl", "");
KSYMTAB_FUNC(spk_do_catch_up_unicode, "_gpl", "");
KSYMTAB_FUNC(spk_synth_flush, "_gpl", "");
KSYMTAB_FUNC(spk_synth_get_index, "_gpl", "");
KSYMTAB_FUNC(spk_synth_is_alive_nop, "_gpl", "");
KSYMTAB_FUNC(spk_synth_is_alive_restart, "_gpl", "");
KSYMTAB_FUNC(synth_printf, "_gpl", "");
KSYMTAB_FUNC(synth_putwc, "_gpl", "");
KSYMTAB_FUNC(synth_putwc_s, "_gpl", "");
KSYMTAB_FUNC(synth_putws, "_gpl", "");
KSYMTAB_FUNC(synth_putws_s, "_gpl", "");
KSYMTAB_FUNC(synth_request_region, "_gpl", "");
KSYMTAB_FUNC(synth_release_region, "_gpl", "");
KSYMTAB_FUNC(synth_add, "_gpl", "");
KSYMTAB_FUNC(synth_remove, "_gpl", "");
KSYMTAB_FUNC(synth_current, "_gpl", "");
KSYMTAB_DATA(speakup_event, "_gpl", "");
KSYMTAB_FUNC(spk_get_var_header, "_gpl", "");
KSYMTAB_FUNC(spk_get_var, "_gpl", "");
KSYMTAB_FUNC(spk_set_num_var, "_gpl", "");

SYMBOL_CRC(speakup_start_ttys, 0xbbd15a51, "_gpl");
SYMBOL_CRC(synth_buffer_empty, 0x41a160e5, "_gpl");
SYMBOL_CRC(synth_buffer_getc, 0x84dad068, "_gpl");
SYMBOL_CRC(synth_buffer_peek, 0xaadb0612, "_gpl");
SYMBOL_CRC(synth_buffer_skip_nonlatin1, 0x76d40046, "_gpl");
SYMBOL_CRC(synth_buffer_clear, 0x4449e1dd, "_gpl");
SYMBOL_CRC(spk_var_show, 0x00a149fa, "_gpl");
SYMBOL_CRC(spk_var_store, 0xd1a758df, "_gpl");
SYMBOL_CRC(spk_ttyio_ops, 0x2efffe23, "_gpl");
SYMBOL_CRC(spk_ttyio_synth_probe, 0x283057c0, "_gpl");
SYMBOL_CRC(spk_ttyio_release, 0x59c7be65, "_gpl");
SYMBOL_CRC(spk_ttyio_synth_immediate, 0xf0745e62, "_gpl");
SYMBOL_CRC(speakup_info, 0xd93829dd, "_gpl");
SYMBOL_CRC(spk_do_catch_up, 0xecdba229, "_gpl");
SYMBOL_CRC(spk_do_catch_up_unicode, 0x58194f86, "_gpl");
SYMBOL_CRC(spk_synth_flush, 0x460570bf, "_gpl");
SYMBOL_CRC(spk_synth_get_index, 0x688dbc9c, "_gpl");
SYMBOL_CRC(spk_synth_is_alive_nop, 0xf782a016, "_gpl");
SYMBOL_CRC(spk_synth_is_alive_restart, 0x2371d68f, "_gpl");
SYMBOL_CRC(synth_printf, 0xe194d0ef, "_gpl");
SYMBOL_CRC(synth_putwc, 0x466f5eb7, "_gpl");
SYMBOL_CRC(synth_putwc_s, 0x8fe0db01, "_gpl");
SYMBOL_CRC(synth_putws, 0x1e39eb14, "_gpl");
SYMBOL_CRC(synth_putws_s, 0xc319c604, "_gpl");
SYMBOL_CRC(synth_request_region, 0x8c82dfca, "_gpl");
SYMBOL_CRC(synth_release_region, 0xd8fd86cf, "_gpl");
SYMBOL_CRC(synth_add, 0xcd0de21e, "_gpl");
SYMBOL_CRC(synth_remove, 0xda4bc49c, "_gpl");
SYMBOL_CRC(synth_current, 0x24ec72aa, "_gpl");
SYMBOL_CRC(speakup_event, 0xb734cb9d, "_gpl");
SYMBOL_CRC(spk_get_var_header, 0xc58f6e50, "_gpl");
SYMBOL_CRC(spk_get_var, 0x45eda959, "_gpl");
SYMBOL_CRC(spk_set_num_var, 0x08f0212d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x99c44b73, "input_allocate_device" },
	{ 0x86d79baf, "paste_selection" },
	{ 0xe914e41e, "strcpy" },
	{ 0x61fcd748, "tty_set_termios" },
	{ 0xbf041102, "register_vt_notifier" },
	{ 0x70bbbd48, "tty_lock" },
	{ 0x13110126, "request_resource" },
	{ 0x94090688, "misc_deregister" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x5905b725, "tty_register_ldisc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xca454a34, "vt_get_leds" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x378a4e19, "tty_kopen_exclusive" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x67fdac4f, "inverse_translate" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbd907522, "tty_kref_put" },
	{ 0x96848186, "scnprintf" },
	{ 0xc1ea4986, "set_user_nice" },
	{ 0x4e6e8ea7, "fg_console" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x96a31174, "tty_kclose" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x148653, "vsnprintf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc87f15e8, "tty_write_room" },
	{ 0x72a69b73, "stop_tty" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb727b479, "input_free_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x64bbc288, "string_unescape" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xdd2738be, "tty_ldisc_flush" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x9ed554b3, "unregister_keyboard_notifier" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xdcb764ad, "memset" },
	{ 0xb11d9000, "tty_dev_name_to_number" },
	{ 0x2002cbd1, "misc_register" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x41cc93f6, "input_event" },
	{ 0xc631580a, "console_unlock" },
	{ 0x22b325d5, "kd_mksound" },
	{ 0x79dadb14, "vc_cons" },
	{ 0xad811a0a, "kobject_create_and_add" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x83fc2de9, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0x55417264, "unregister_vt_notifier" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x96554810, "register_keyboard_notifier" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x38374815, "clear_selection" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x5c6aa204, "set_selection_kernel" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5670022c, "tty_set_ldisc" },
	{ 0x99cea0, "screen_pos" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xc5e74216, "release_resource" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x349cba85, "strchr" },
	{ 0x6ad06fb5, "start_tty" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0x5edb93d2, "tty_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x317df83, "kobject_put" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4E388EA748BE65BC0048EFB");
