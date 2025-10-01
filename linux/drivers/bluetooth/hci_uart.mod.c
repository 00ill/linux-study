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

KSYMTAB_FUNC(hci_uart_tx_wakeup, "_gpl", "");
KSYMTAB_FUNC(hci_uart_register_device_priv, "_gpl", "");
KSYMTAB_FUNC(hci_uart_unregister_device, "_gpl", "");
KSYMTAB_FUNC(h4_recv_buf, "_gpl", "");

SYMBOL_CRC(hci_uart_tx_wakeup, 0x8cffac27, "_gpl");
SYMBOL_CRC(hci_uart_register_device_priv, 0xadc597dd, "_gpl");
SYMBOL_CRC(hci_uart_unregister_device, 0xb8c091e9, "_gpl");
SYMBOL_CRC(h4_recv_buf, 0x401970ef, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x10a12f07, "percpu_free_rwsem" },
	{ 0x61fcd748, "tty_set_termios" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x8373c260, "percpu_down_write" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x5905b725, "tty_register_ldisc" },
	{ 0xbe2f7a74, "serdev_device_set_baudrate" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xec2f6bf4, "hci_free_dev" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x738f15e, "btbcm_finalize" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xe1357870, "btbcm_initialize" },
	{ 0xb8b3d0cc, "serdev_device_set_flow_control" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x84351f9d, "hci_alloc_dev_priv" },
	{ 0x37a0cba, "kfree" },
	{ 0xd30c3a4c, "serdev_device_open" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd71fb816, "devm_free_irq" },
	{ 0x9d5d1f02, "tty_driver_flush_buffer" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x559335d7, "btbcm_read_pcm_int_params" },
	{ 0xd3eeeb78, "percpu_up_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x606a79da, "device_property_read_u8_array" },
	{ 0xa41c3c7, "devm_clk_put" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0xe25f56ac, "serdev_device_write_flush" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x291ce00c, "n_tty_ioctl_helper" },
	{ 0x92893115, "driver_unregister" },
	{ 0xdd2738be, "tty_ldisc_flush" },
	{ 0xadbc772a, "__percpu_init_rwsem" },
	{ 0x62543cd7, "__serdev_device_driver_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x987fa440, "serdev_device_set_tiocm" },
	{ 0x718b8b7, "bt_info" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xf0d3c14b, "serdev_device_write_buf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x83fc2de9, "tty_unregister_ldisc" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0xadc1603a, "hci_unregister_dev" },
	{ 0x38aa1397, "gpiod_add_lookup_table" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0xf7389894, "hci_recv_frame" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5cc77b0, "of_irq_get_byname" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9db46ab2, "serdev_device_close" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0xea16c9ca, "__percpu_down_read" },
	{ 0xff81487d, "gpiod_remove_lookup_table" },
	{ 0x4b930556, "btbcm_write_pcm_int_params" },
	{ 0x436fed84, "btbcm_set_bdaddr" },
	{ 0x13370417, "tty_unthrottle" },
	{ 0x6ed3acab, "hci_reset_dev" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7a444f31, "btbcm_check_bdaddr" },
	{ 0x637f8cbf, "rcuwait_wake_up" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x9b80e029, "hci_register_dev" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5947eb5, "__hci_cmd_sync" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xcf9ac34d, "hci_recv_diag" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,btbcm");

MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4334-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4334-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a0-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a0-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a1-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43430a1-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0C*");
MODULE_ALIAS("of:N*T*Ccypress,cyw4373a0-bt");
MODULE_ALIAS("of:N*T*Ccypress,cyw4373a0-btC*");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-bt");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-btC*");

MODULE_INFO(srcversion, "62D7CD7DEA4A7A5FD4B5434");
