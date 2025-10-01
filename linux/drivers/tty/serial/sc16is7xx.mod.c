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

KSYMTAB_DATA(sc16is74x_devtype, "_gpl", "SERIAL_NXP_SC16IS7XX");
KSYMTAB_DATA(sc16is750_devtype, "_gpl", "SERIAL_NXP_SC16IS7XX");
KSYMTAB_DATA(sc16is752_devtype, "_gpl", "SERIAL_NXP_SC16IS7XX");
KSYMTAB_DATA(sc16is760_devtype, "_gpl", "SERIAL_NXP_SC16IS7XX");
KSYMTAB_DATA(sc16is762_devtype, "_gpl", "SERIAL_NXP_SC16IS7XX");
KSYMTAB_FUNC(sc16is7xx_probe, "_gpl", "SERIAL_NXP_SC16IS7XX");
KSYMTAB_FUNC(sc16is7xx_remove, "_gpl", "SERIAL_NXP_SC16IS7XX");
KSYMTAB_DATA(sc16is7xx_dt_ids, "_gpl", "SERIAL_NXP_SC16IS7XX");
KSYMTAB_DATA(sc16is7xx_regcfg, "_gpl", "SERIAL_NXP_SC16IS7XX");
KSYMTAB_FUNC(sc16is7xx_regmap_name, "_gpl", "SERIAL_NXP_SC16IS7XX");
KSYMTAB_FUNC(sc16is7xx_regmap_port_mask, "_gpl", "SERIAL_NXP_SC16IS7XX");

SYMBOL_CRC(sc16is74x_devtype, 0x561783a9, "_gpl");
SYMBOL_CRC(sc16is750_devtype, 0x1af41b3d, "_gpl");
SYMBOL_CRC(sc16is752_devtype, 0x1e01cb00, "_gpl");
SYMBOL_CRC(sc16is760_devtype, 0x83167d3c, "_gpl");
SYMBOL_CRC(sc16is762_devtype, 0x87e3ad01, "_gpl");
SYMBOL_CRC(sc16is7xx_probe, 0x111ae705, "_gpl");
SYMBOL_CRC(sc16is7xx_remove, 0x19cd5b0f, "_gpl");
SYMBOL_CRC(sc16is7xx_dt_ids, 0x97b77680, "_gpl");
SYMBOL_CRC(sc16is7xx_regcfg, 0x6cf9ed1c, "_gpl");
SYMBOL_CRC(sc16is7xx_regmap_name, 0xe64f5280, "_gpl");
SYMBOL_CRC(sc16is7xx_regmap_port_mask, 0x01e26f72, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9ba6295b, "regmap_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x13335124, "kthread_queue_work" },
	{ 0x1f42511a, "kthread_queue_delayed_work" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xd1b8a25, "regcache_cache_bypass" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x1320dd27, "uart_register_driver" },
	{ 0xe504a0c3, "uart_unregister_driver" },
	{ 0x3c70632c, "kthread_cancel_delayed_work_sync" },
	{ 0xffb7c514, "ida_free" },
	{ 0x84fd4f5e, "uart_remove_one_port" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xd3368eb6, "kthread_flush_worker" },
	{ 0xd45b3bc6, "kthread_stop" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x654a2723, "gpiochip_remove" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1f7a87d1, "nbcon_device_try_acquire" },
	{ 0x158844a1, "nbcon_device_release" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba757c99, "uart_handle_cts_change" },
	{ 0x93235ce9, "uart_handle_dcd_change" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0xef54673c, "devm_clk_get_optional" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x68e4192b, "__kthread_init_worker" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0xcb661d89, "kthread_create_on_node" },
	{ 0xba10aaf3, "wake_up_process" },
	{ 0xee1f98a6, "sched_set_fifo" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd6a2321f, "uart_get_rs485_mode" },
	{ 0xf86f560, "kthread_delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbc0283ec, "uart_add_one_port" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x79d02d44, "gpiochip_add_data_with_key" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x669c413b, "_dev_err" },
	{ 0x7b7c3ae5, "uart_get_baud_rate" },
	{ 0x2c40c7fc, "uart_update_timeout" },
	{ 0xdd5fa381, "__kfifo_out_linear" },
	{ 0xaedd1478, "regmap_noinc_write" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x56cf0c28, "uart_write_wakeup" },
	{ 0x75deb3d4, "regmap_noinc_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd6357382, "uart_insert_char" },
	{ 0xaf0efecf, "tty_flip_buffer_push" },
	{ 0x4a17ed66, "sysrq_mask" },
	{ 0x774b2a3c, "uart_try_toggle_sysrq" },
	{ 0xc9993ea2, "handle_sysrq" },
	{ 0x9c81f61a, "do_SAK" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "64FC7C2F5B4D351D5D8E63E");
