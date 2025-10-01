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

KSYMTAB_FUNC(w5100_ops_priv, "_gpl", "");
KSYMTAB_FUNC(w5100_probe, "_gpl", "");
KSYMTAB_FUNC(w5100_remove, "_gpl", "");
KSYMTAB_DATA(w5100_pm_ops, "_gpl", "");

SYMBOL_CRC(w5100_ops_priv, 0x483f60a8, "_gpl");
SYMBOL_CRC(w5100_probe, 0xb45fd84d, "_gpl");
SYMBOL_CRC(w5100_remove, 0x473aba96, "_gpl");
SYMBOL_CRC(w5100_pm_ops, 0x689ca491, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x53dcc4a9, "devm_platform_get_and_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0xc4f8efb6, "eth_type_trans" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xf7bbf8be, "napi_schedule_prep" },
	{ 0x3adfad74, "__napi_schedule" },
	{ 0x44056010, "gpio_to_desc" },
	{ 0x3cc87760, "gpiod_get_raw_value" },
	{ 0x828a01bc, "netif_carrier_off" },
	{ 0xffc50605, "netif_carrier_on" },
	{ 0x67bbcda, "netdev_info" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0x50d00458, "netif_rx" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31bd7946, "napi_enable" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x6dc88bac, "napi_disable" },
	{ 0x2e7b0048, "netif_receive_skb" },
	{ 0x36184085, "napi_complete_done" },
	{ 0x204346f0, "alloc_etherdev_mqs" },
	{ 0x24b49baa, "free_netdev" },
	{ 0xe2835923, "netif_napi_add_weight" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x349cba85, "strchr" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2795b5f0, "gpiod_to_irq" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xef7fa408, "platform_get_resource" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xf0978683, "eth_validate_addr" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F7B2143D12865507AE61F92");
