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

KSYMTAB_FUNC(w1_add_master_device, "", "");
KSYMTAB_FUNC(w1_remove_master_device, "", "");
KSYMTAB_FUNC(w1_register_family, "", "");
KSYMTAB_FUNC(w1_unregister_family, "", "");
KSYMTAB_FUNC(w1_touch_bit, "_gpl", "");
KSYMTAB_FUNC(w1_write_8, "_gpl", "");
KSYMTAB_FUNC(w1_triplet, "_gpl", "");
KSYMTAB_FUNC(w1_read_8, "_gpl", "");
KSYMTAB_FUNC(w1_write_block, "_gpl", "");
KSYMTAB_FUNC(w1_touch_block, "_gpl", "");
KSYMTAB_FUNC(w1_read_block, "_gpl", "");
KSYMTAB_FUNC(w1_reset_bus, "_gpl", "");
KSYMTAB_FUNC(w1_calc_crc8, "_gpl", "");
KSYMTAB_FUNC(w1_reset_select_slave, "_gpl", "");
KSYMTAB_FUNC(w1_reset_resume_command, "_gpl", "");
KSYMTAB_FUNC(w1_next_pullup, "_gpl", "");

SYMBOL_CRC(w1_add_master_device, 0x139e8b1f, "");
SYMBOL_CRC(w1_remove_master_device, 0xa661db9f, "");
SYMBOL_CRC(w1_register_family, 0x26130a71, "");
SYMBOL_CRC(w1_unregister_family, 0xcc223af9, "");
SYMBOL_CRC(w1_touch_bit, 0x15c22b09, "_gpl");
SYMBOL_CRC(w1_write_8, 0xea7b044f, "_gpl");
SYMBOL_CRC(w1_triplet, 0x6053964f, "_gpl");
SYMBOL_CRC(w1_read_8, 0xb61957a6, "_gpl");
SYMBOL_CRC(w1_write_block, 0xd4eb9522, "_gpl");
SYMBOL_CRC(w1_touch_block, 0xf2673568, "_gpl");
SYMBOL_CRC(w1_read_block, 0x652fcef6, "_gpl");
SYMBOL_CRC(w1_reset_bus, 0xd22ce88d, "_gpl");
SYMBOL_CRC(w1_calc_crc8, 0x63757e92, "_gpl");
SYMBOL_CRC(w1_reset_select_slave, 0xbd143cf9, "_gpl");
SYMBOL_CRC(w1_reset_resume_command, 0x99a20da3, "_gpl");
SYMBOL_CRC(w1_next_pullup, 0xdd99f09d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x469438cc, "of_node_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x22acd2e2, "device_unregister" },
	{ 0x3e2537d7, "sysfs_remove_groups" },
	{ 0x2af8df92, "sysfs_create_groups" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a32c422, "cn_netlink_send_mult" },
	{ 0x36dc6ece, "put_device" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x89df56d1, "flush_signals" },
	{ 0xe8bc40c5, "cn_netlink_send" },
	{ 0xbf8790c5, "bus_unregister" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc7548d61, "hwmon_device_register_with_info" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92893115, "driver_unregister" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x28b118b6, "device_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x7483e13, "cn_del_callback" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x32700730, "kobject_uevent" },
	{ 0x319120f8, "hwmon_device_unregister" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7092da37, "of_find_matching_node_and_match" },
	{ 0xf2772c4e, "driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe7e06108, "cn_add_callback" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x1b367b9c, "bus_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cn");


MODULE_INFO(srcversion, "A58D9DE3D4C4FF51DFED556");
