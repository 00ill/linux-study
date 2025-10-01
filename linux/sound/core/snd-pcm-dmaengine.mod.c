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

KSYMTAB_FUNC(snd_dmaengine_pcm_get_chan, "_gpl", "");
KSYMTAB_FUNC(snd_hwparams_to_dma_slave_config, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_set_config_from_dai_data, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_trigger, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_pointer_no_residue, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_pointer, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_request_channel, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_open, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_open_request_chan, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_sync_stop, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_close, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_close_release_chan, "_gpl", "");
KSYMTAB_FUNC(snd_dmaengine_pcm_refine_runtime_hwparams, "_gpl", "");

SYMBOL_CRC(snd_dmaengine_pcm_get_chan, 0xbc4c32ec, "_gpl");
SYMBOL_CRC(snd_hwparams_to_dma_slave_config, 0x1bc182c4, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_set_config_from_dai_data, 0x522e77e7, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_trigger, 0xd323a7b7, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_pointer_no_residue, 0xb1441b25, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_pointer, 0x33d5f3c5, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_request_channel, 0xdd322d46, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_open, 0x6ed8b709, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_open_request_chan, 0xab2a2f35, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_sync_stop, 0x38fcc4f6, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_close, 0x223d6547, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_close_release_chan, 0xced4e90c, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_refine_runtime_hwparams, 0xf8cacad3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0x2b21d1e1, "dma_release_channel" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xe100f81f, "__dma_request_channel" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bfc93cf, "dma_get_slave_caps" },
	{ 0x103afa42, "snd_pcm_hw_constraint_integer" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm");


MODULE_INFO(srcversion, "72ED8F2A692549F3B96D657");
