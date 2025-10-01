#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(brcmu_pkt_buf_get_skb, "", "");
KSYMTAB_FUNC(brcmu_pkt_buf_free_skb, "", "");
KSYMTAB_FUNC(brcmu_pktq_penq, "", "");
KSYMTAB_FUNC(brcmu_pktq_penq_head, "", "");
KSYMTAB_FUNC(brcmu_pktq_pdeq, "", "");
KSYMTAB_FUNC(brcmu_pktq_pdeq_match, "", "");
KSYMTAB_FUNC(brcmu_pktq_pdeq_tail, "", "");
KSYMTAB_FUNC(brcmu_pktq_pflush, "", "");
KSYMTAB_FUNC(brcmu_pktq_flush, "", "");
KSYMTAB_FUNC(brcmu_pktq_init, "", "");
KSYMTAB_FUNC(brcmu_pktq_peek_tail, "", "");
KSYMTAB_FUNC(brcmu_pktq_mlen, "", "");
KSYMTAB_FUNC(brcmu_pktq_mdeq, "", "");
KSYMTAB_FUNC(brcmu_boardrev_str, "", "");
KSYMTAB_FUNC(brcmu_dotrev_str, "", "");
KSYMTAB_FUNC(brcmu_prpkt, "", "");
KSYMTAB_FUNC(brcmu_dbg_hex_dump, "", "");
KSYMTAB_FUNC(brcmu_d11_attach, "", "");

SYMBOL_CRC(brcmu_pkt_buf_get_skb, 0x0695c5d9, "");
SYMBOL_CRC(brcmu_pkt_buf_free_skb, 0x916553ba, "");
SYMBOL_CRC(brcmu_pktq_penq, 0x5d170613, "");
SYMBOL_CRC(brcmu_pktq_penq_head, 0x298ab2a6, "");
SYMBOL_CRC(brcmu_pktq_pdeq, 0xa8896e5d, "");
SYMBOL_CRC(brcmu_pktq_pdeq_match, 0xb6c36b0a, "");
SYMBOL_CRC(brcmu_pktq_pdeq_tail, 0x659f6a62, "");
SYMBOL_CRC(brcmu_pktq_pflush, 0xa08d5f20, "");
SYMBOL_CRC(brcmu_pktq_flush, 0xf54dcfde, "");
SYMBOL_CRC(brcmu_pktq_init, 0xa7aab0fc, "");
SYMBOL_CRC(brcmu_pktq_peek_tail, 0x43cf485d, "");
SYMBOL_CRC(brcmu_pktq_mlen, 0xe7238d3a, "");
SYMBOL_CRC(brcmu_pktq_mdeq, 0xac9e01fa, "");
SYMBOL_CRC(brcmu_boardrev_str, 0x1906648e, "");
SYMBOL_CRC(brcmu_dotrev_str, 0xa17c0ccf, "");
SYMBOL_CRC(brcmu_prpkt, 0x5961b380, "");
SYMBOL_CRC(brcmu_dbg_hex_dump, 0x9dbcd801, "");
SYMBOL_CRC(brcmu_d11_attach, 0xd6217d91, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4367c3a1, "skb_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb6b9600a, "skb_dequeue" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb8036095, "skb_queue_tail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdcb764ad, "memset" },
	{ 0x1f95460a, "skb_dequeue_tail" },
	{ 0xe606e56f, "__netdev_alloc_skb" },
	{ 0x43f25734, "skb_unlink" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8df78ffa, "dev_kfree_skb_any_reason" },
	{ 0x910b3446, "skb_queue_head" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "723360FECF6CC6F38A38690");
