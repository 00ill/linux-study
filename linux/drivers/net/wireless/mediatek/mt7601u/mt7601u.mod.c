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
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0x42e2b350, "__skb_pad" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x27c66375, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x438717fb, "bpf_trace_run4" },
	{ 0x3c57e074, "debugfs_attr_write" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa6257a2f, "complete" },
	{ 0x180cd0ba, "trace_raw_output_prep" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa50bb103, "__trace_trigger_soft_disabled" },
	{ 0x61420e14, "ieee80211_free_hw" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xfbfd5863, "trace_event_printf" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x5676cb2b, "ieee80211_tx_status_ext" },
	{ 0xe1bafd45, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x4ff913b5, "ieee80211_register_hw" },
	{ 0xe83c2d4, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9a38130e, "bpf_trace_run2" },
	{ 0x501ee2bd, "ieee80211_get_hdrlen_from_skb" },
	{ 0x71b6ad08, "ieee80211_wake_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbbae820d, "pskb_expand_head" },
	{ 0xea427052, "trace_event_buffer_commit" },
	{ 0x650d4708, "ieee80211_tx_status_skb" },
	{ 0x69ddc472, "ieee80211_get_tx_rates" },
	{ 0x22fe87e5, "ieee80211_handle_wake_tx_queue" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x352833ed, "__alloc_pages_noprof" },
	{ 0xf6060c12, "ieee80211_send_bar" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xe3bd0bc5, "usb_put_dev" },
	{ 0x7a01201a, "usb_bulk_msg" },
	{ 0x7fcac341, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x69836ab, "usb_get_dev" },
	{ 0xf9282df4, "__alloc_skb" },
	{ 0x618911fc, "numa_node" },
	{ 0x6c736d6, "__free_pages" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xa861d6a8, "debugfs_attr_read" },
	{ 0x6ca3449c, "ieee80211_queue_delayed_work" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x91ac9254, "perf_trace_run_bpf_submit" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x2ef9e47d, "simple_attr_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x3dfbc684, "seq_putc" },
	{ 0xf74654c, "usb_poison_urb" },
	{ 0xfe479535, "trace_event_reg" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xabb61447, "ieee80211_wake_queues" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb58c18e8, "ieee80211_free_txskb" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc87fd291, "ieee80211_alloc_hw_nm" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xacb50e4a, "bpf_trace_run9" },
	{ 0xda2768de, "ieee80211_rx_list" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x38590bd4, "ieee80211_emulate_add_chanctx" },
	{ 0x3f302749, "debugfs_create_u32" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb77e1ef3, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0x1e052696, "ieee80211_stop_queue" },
	{ 0x27b8aeb2, "ieee80211_stop_queues" },
	{ 0x2c190ec6, "skb_trim" },
	{ 0xf2da001e, "bpf_trace_run3" },
	{ 0x661256ad, "seq_read" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x2f828d33, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24c4b1f8, "ieee80211_unregister_hw" },
	{ 0xb53675e6, "seq_write" },
	{ 0xd9aab56f, "__folio_put" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x7f2b5607, "firmware_request_cache" },
	{ 0xc86c3f91, "skb_add_rx_frag_netmem" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x571ab022, "debugfs_create_u8" },
	{ 0x71c90ddc, "single_open" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xe3bafe79, "ieee80211_emulate_remove_chanctx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "06C3F8BE63A999B20A7F0EE");
