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

MODULE_INFO(staging, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x631dd20c, "vchiq_use_service" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x469438cc, "of_node_put" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xcae9f99e, "snd_ctl_add" },
	{ 0xa7ab474b, "snd_pcm_new" },
	{ 0xa6257a2f, "complete" },
	{ 0x2569de03, "vchiq_connect" },
	{ 0xc0bc42f9, "vchiq_get_service_userdata" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x633ee797, "snd_pcm_stop" },
	{ 0xc00e0644, "snd_pcm_hw_constraint_minmax" },
	{ 0xdd592fc2, "vchiq_initialise" },
	{ 0x37a0cba, "kfree" },
	{ 0x645c2e80, "rpi_firmware_get" },
	{ 0xde5315ca, "devres_add" },
	{ 0x50c7e6ee, "of_find_compatible_node" },
	{ 0x1a2f64c5, "vchiq_open_service" },
	{ 0x78e63b98, "vchiq_close_service" },
	{ 0x1069d298, "snd_ctl_new1" },
	{ 0xd29af670, "vchiq_shutdown" },
	{ 0x88817f04, "snd_pcm_stream_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x306f753, "snd_card_new" },
	{ 0x669c413b, "_dev_err" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x63e9296, "rpi_firmware_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0x7b77eb29, "vchiq_get_peer_version" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x738a0e18, "snd_pcm_set_ops" },
	{ 0x89f0994, "vchiq_driver_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x52d022d0, "vchiq_driver_unregister" },
	{ 0x9a0af284, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x73ab1e59, "vchiq_release_service" },
	{ 0x91a4d135, "vchiq_queue_kernel_message" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0xd8f2370d, "snd_pcm_stream_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7c1d5a8b, "vchiq_bulk_transmit" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0xbb35b780, "devres_find" },
	{ 0xc9098c3d, "snd_pcm_period_elapsed" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xb0567d27, "snd_pcm_hw_constraint_step" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x95598b87, "vchiq_release_message" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd,snd-pcm");

MODULE_ALIAS("vchiq:bcm2835-audio");

MODULE_INFO(srcversion, "863A632EDD4DCD4AB17F3FA");
