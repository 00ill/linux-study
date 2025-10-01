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

KSYMTAB_FUNC(hdlcdrv_receiver, "", "");
KSYMTAB_FUNC(hdlcdrv_transmitter, "", "");
KSYMTAB_FUNC(hdlcdrv_arbitrate, "", "");
KSYMTAB_FUNC(hdlcdrv_register, "", "");
KSYMTAB_FUNC(hdlcdrv_unregister, "", "");

SYMBOL_CRC(hdlcdrv_receiver, 0x46e1b95c, "");
SYMBOL_CRC(hdlcdrv_transmitter, 0xb0ed152b, "");
SYMBOL_CRC(hdlcdrv_arbitrate, 0x59028a15, "");
SYMBOL_CRC(hdlcdrv_register, 0x9606a40a, "");
SYMBOL_CRC(hdlcdrv_unregister, 0xd3c6d03a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb67fb8b4, "alloc_netdev_mqs" },
	{ 0x219f96ce, "register_netdev" },
	{ 0x24b49baa, "free_netdev" },
	{ 0x1b7dcd17, "consume_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0b8a1e8, "ax25_ip_xmit" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x42154287, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xa04864d5, "dev_addr_mod" },
	{ 0xed11a6a0, "netif_tx_wake_queue" },
	{ 0xad25b856, "dev_kfree_skb_irq_reason" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4829a47e, "memcpy" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x385fa099, "unregister_netdev" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x4367c3a1, "skb_put" },
	{ 0x50d00458, "netif_rx" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ax25,crc-ccitt");


MODULE_INFO(srcversion, "4719F4229627E6C4284A201");
