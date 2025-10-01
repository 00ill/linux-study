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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa728742c, "usb_register_driver" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x70b0605f, "usb_anchor_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x29c998f4, "usb_unanchor_urb" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4a48d65c, "hci_cmd_sync_cancel" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0xd922c2e5, "sk_skb_reason_drop" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xadc1603a, "hci_unregister_dev" },
	{ 0x15058ed7, "gpiod_put" },
	{ 0xec2f6bf4, "hci_free_dev" },
	{ 0x72b34551, "usb_driver_release_interface" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5947eb5, "__hci_cmd_sync" },
	{ 0x3518924b, "skb_pull_data" },
	{ 0x718b8b7, "bt_info" },
	{ 0x214e4265, "bt_warn" },
	{ 0x66576651, "pm_runtime_allow" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0x47ab63cc, "pm_runtime_forbid" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd4157fc, "usb_enable_autosuspend" },
	{ 0x994adaa1, "btrtl_setup_realtek" },
	{ 0xded62bf7, "__hci_cmd_sync_ev" },
	{ 0x748b3f7d, "__hci_cmd_send" },
	{ 0xd75a168c, "skb_pull" },
	{ 0xb20da7cc, "hci_devcd_init" },
	{ 0x6459382d, "usb_disable_autosuspend" },
	{ 0x837bda45, "hci_devcd_append" },
	{ 0x25eac995, "hci_devcd_complete" },
	{ 0xd7fc5065, "hci_devcd_append_pattern" },
	{ 0x4829a47e, "memcpy" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x669c413b, "_dev_err" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x58a8779a, "btmtk_usb_shutdown" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0x47fa5eea, "usb_autopm_get_interface" },
	{ 0x8af69228, "usb_queue_reset_device" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x6a336a2e, "usb_autopm_put_interface" },
	{ 0xdcb764ad, "memset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa6b5a588, "skb_clone" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xf7389894, "hci_recv_frame" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe58bd38a, "alloc_mtk_intr_urb" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x53af7811, "skb_queue_purge_reason" },
	{ 0xa1311ba2, "usb_get_from_anchor" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf2c9a2dc, "btmtk_usb_subsys_reset" },
	{ 0xcf9ac34d, "hci_recv_diag" },
	{ 0xe587afaa, "btmtk_usb_setup" },
	{ 0xe228da49, "usb_ifnum_to_if" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf6491f8c, "usb_driver_claim_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x84351f9d, "hci_alloc_dev_priv" },
	{ 0x80dd4730, "gpiod_get_optional" },
	{ 0xa41bd271, "of_match_device" },
	{ 0x5cc77b0, "of_irq_get_byname" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xe294c427, "btmtk_reset_sync" },
	{ 0x3e19bf61, "btmtk_set_bdaddr" },
	{ 0x31f7d576, "btmtk_usb_recv_acl" },
	{ 0xeee30c0d, "btmtk_usb_suspend" },
	{ 0xbb1131b9, "btmtk_usb_resume" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x9b80e029, "hci_register_dev" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0xd762357, "usb_match_id" },
	{ 0x466e6201, "btintel_recv_event" },
	{ 0x70ac5894, "btintel_configure_setup" },
	{ 0x49e15767, "btbcm_setup_patchram" },
	{ 0x436fed84, "btbcm_set_bdaddr" },
	{ 0x56925ebc, "btbcm_setup_apple" },
	{ 0x4d2220ac, "btrtl_set_driver_name" },
	{ 0xec820610, "btrtl_shutdown_realtek" },
	{ 0x1e8b81a, "hci_devcd_register" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xdce2f57c, "of_property_read_variable_u16_array" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0x5d809a68, "simple_open" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,btrtl,btmtk,btintel,btbcm");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FAF119FC4AF049A2087231E");
