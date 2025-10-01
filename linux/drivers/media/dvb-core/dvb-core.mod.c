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

KSYMTAB_FUNC(dvb_generic_open, "", "");
KSYMTAB_FUNC(dvb_generic_release, "", "");
KSYMTAB_FUNC(dvb_generic_ioctl, "", "");
KSYMTAB_FUNC(dvb_register_device, "", "");
KSYMTAB_FUNC(dvb_remove_device, "", "");
KSYMTAB_FUNC(dvb_device_get, "", "");
KSYMTAB_FUNC(dvb_unregister_device, "", "");
KSYMTAB_FUNC(dvb_create_media_graph, "_gpl", "");
KSYMTAB_FUNC(dvb_register_adapter, "", "");
KSYMTAB_FUNC(dvb_unregister_adapter, "", "");
KSYMTAB_FUNC(dvb_module_probe, "_gpl", "");
KSYMTAB_FUNC(dvb_module_release, "_gpl", "");
KSYMTAB_FUNC(dvb_dmxdev_init, "", "");
KSYMTAB_FUNC(dvb_dmxdev_release, "", "");
KSYMTAB_FUNC(dvb_dmx_swfilter_packets, "", "");
KSYMTAB_FUNC(dvb_dmx_swfilter, "", "");
KSYMTAB_FUNC(dvb_dmx_swfilter_204, "", "");
KSYMTAB_FUNC(dvb_dmx_swfilter_raw, "", "");
KSYMTAB_FUNC(dvb_dmx_init, "", "");
KSYMTAB_FUNC(dvb_dmx_release, "", "");
KSYMTAB_FUNC(dvb_ca_en50221_camchange_irq, "", "");
KSYMTAB_FUNC(dvb_ca_en50221_camready_irq, "", "");
KSYMTAB_FUNC(dvb_ca_en50221_frda_irq, "", "");
KSYMTAB_FUNC(dvb_ca_en50221_init, "", "");
KSYMTAB_FUNC(dvb_ca_en50221_release, "", "");
KSYMTAB_FUNC(dvb_frontend_reinitialise, "", "");
KSYMTAB_FUNC(dvb_frontend_sleep_until, "", "");
KSYMTAB_FUNC(dvb_frontend_suspend, "", "");
KSYMTAB_FUNC(dvb_frontend_resume, "", "");
KSYMTAB_FUNC(dvb_register_frontend, "", "");
KSYMTAB_FUNC(dvb_unregister_frontend, "", "");
KSYMTAB_FUNC(dvb_frontend_detach, "", "");
KSYMTAB_FUNC(dvb_net_release, "", "");
KSYMTAB_FUNC(dvb_net_init, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_flush, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_init, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_empty, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_free, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_avail, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_flush_spinlock_wakeup, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_read_user, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_read, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_write, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_write_user, "", "");

SYMBOL_CRC(dvb_generic_open, 0xb7f963a0, "");
SYMBOL_CRC(dvb_generic_release, 0x8d6bcb76, "");
SYMBOL_CRC(dvb_generic_ioctl, 0x9252d767, "");
SYMBOL_CRC(dvb_register_device, 0x36602264, "");
SYMBOL_CRC(dvb_remove_device, 0x342ea8df, "");
SYMBOL_CRC(dvb_device_get, 0x10d08223, "");
SYMBOL_CRC(dvb_unregister_device, 0x088212f4, "");
SYMBOL_CRC(dvb_create_media_graph, 0x8b4245cf, "_gpl");
SYMBOL_CRC(dvb_register_adapter, 0xbf565938, "");
SYMBOL_CRC(dvb_unregister_adapter, 0x88cf6d3a, "");
SYMBOL_CRC(dvb_module_probe, 0x5db77c2e, "_gpl");
SYMBOL_CRC(dvb_module_release, 0x8e47effd, "_gpl");
SYMBOL_CRC(dvb_dmxdev_init, 0xd59ba7a8, "");
SYMBOL_CRC(dvb_dmxdev_release, 0xe643b477, "");
SYMBOL_CRC(dvb_dmx_swfilter_packets, 0x18acd31f, "");
SYMBOL_CRC(dvb_dmx_swfilter, 0x8c54b0f8, "");
SYMBOL_CRC(dvb_dmx_swfilter_204, 0x6a9f708a, "");
SYMBOL_CRC(dvb_dmx_swfilter_raw, 0xa4235824, "");
SYMBOL_CRC(dvb_dmx_init, 0x54abe4ff, "");
SYMBOL_CRC(dvb_dmx_release, 0x9263a063, "");
SYMBOL_CRC(dvb_ca_en50221_camchange_irq, 0xf720d701, "");
SYMBOL_CRC(dvb_ca_en50221_camready_irq, 0xa226931b, "");
SYMBOL_CRC(dvb_ca_en50221_frda_irq, 0x4de768ff, "");
SYMBOL_CRC(dvb_ca_en50221_init, 0xfe313fa9, "");
SYMBOL_CRC(dvb_ca_en50221_release, 0x0064d03d, "");
SYMBOL_CRC(dvb_frontend_reinitialise, 0x52ccdc8e, "");
SYMBOL_CRC(dvb_frontend_sleep_until, 0x3b93d71a, "");
SYMBOL_CRC(dvb_frontend_suspend, 0x52258516, "");
SYMBOL_CRC(dvb_frontend_resume, 0x5c5a0a63, "");
SYMBOL_CRC(dvb_register_frontend, 0x7ab4a2cf, "");
SYMBOL_CRC(dvb_unregister_frontend, 0xaf72fae1, "");
SYMBOL_CRC(dvb_frontend_detach, 0xd4a72041, "");
SYMBOL_CRC(dvb_net_release, 0x02559398, "");
SYMBOL_CRC(dvb_net_init, 0xa23a2eab, "");
SYMBOL_CRC(dvb_ringbuffer_flush, 0xfb9a826f, "");
SYMBOL_CRC(dvb_ringbuffer_init, 0xebbc2d9b, "");
SYMBOL_CRC(dvb_ringbuffer_empty, 0xb3352dd2, "");
SYMBOL_CRC(dvb_ringbuffer_free, 0xfc6380e5, "");
SYMBOL_CRC(dvb_ringbuffer_avail, 0xe138ce6b, "");
SYMBOL_CRC(dvb_ringbuffer_flush_spinlock_wakeup, 0x6181aec0, "");
SYMBOL_CRC(dvb_ringbuffer_read_user, 0x91a6794b, "");
SYMBOL_CRC(dvb_ringbuffer_read, 0xfb09f39a, "");
SYMBOL_CRC(dvb_ringbuffer_write, 0x2f5cdf80, "");
SYMBOL_CRC(dvb_ringbuffer_write_user, 0xc3f679f9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x36b4d6c1, "media_devnode_remove" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x37da848e, "eth_header" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6775d5d3, "class_destroy" },
	{ 0xcf2a6966, "up" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x4df02057, "crc32_be" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xdd3b7072, "ether_setup" },
	{ 0x81e7ebee, "media_create_intf_link" },
	{ 0xc93cfd73, "media_create_pad_links" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x37a84f24, "media_create_pad_link" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xc153072c, "eth_header_parse" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9d9e8944, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb1c4027b, "media_device_register_entity" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x5c362e8, "i2c_unregister_device" },
	{ 0xd75a168c, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0x4ae7394, "device_create" },
	{ 0x295427ca, "noop_llseek" },
	{ 0x6626afca, "down" },
	{ 0x59c02473, "class_create" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33b58322, "skb_push" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x24b49baa, "free_netdev" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5390eff6, "i2c_new_client_device" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x40d6ec8a, "default_llseek" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50d00458, "netif_rx" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xa04e7900, "media_get_pad_index" },
	{ 0x999e8297, "vfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7670b43, "media_devnode_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x41576788, "media_device_unregister_entity" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x27271c6b, "cdev_del" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mc");


MODULE_INFO(srcversion, "428F4D7483CD6B06869BE2D");
