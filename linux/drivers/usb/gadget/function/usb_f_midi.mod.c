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
	{ 0xe914e41e, "strcpy" },
	{ 0x92ee93f3, "snd_rawmidi_receive" },
	{ 0xd86b7fad, "snd_rawmidi_transmit" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc40f5484, "snd_card_register" },
	{ 0x95f6a55f, "snd_card_free" },
	{ 0x8bf701a4, "usb_interface_id" },
	{ 0x8b77fbab, "snd_rawmidi_drop_output" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x970607ff, "usb_ep_free_request" },
	{ 0x35e071f4, "config_ep_by_speed" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x640cc173, "alloc_ep_req" },
	{ 0xa4435faa, "snd_component_add" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x306f753, "snd_card_new" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf9673004, "usb_function_register" },
	{ 0x669c413b, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x10b9f0fc, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x624ab268, "snd_card_free_when_closed" },
	{ 0x6f3f2011, "usb_ep_autoconfig" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3a7652c8, "usb_put_function_instance" },
	{ 0xb6266700, "snd_device_new" },
	{ 0xdcb764ad, "memset" },
	{ 0x49b8b65a, "snd_rawmidi_new" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf0105eee, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x853bcf02, "snd_rawmidi_set_ops" },
	{ 0x2d75696f, "usb_ep_set_halt" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7673e7f6, "usb_ep_queue" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xbcf61715, "usb_ep_enable" },
	{ 0xd152cd3f, "usb_ep_disable" },
	{ 0xd962ac6, "usb_free_all_descriptors" },
	{ 0x3a7eeb5, "usb_gstrings_attach" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd,libcomposite");


MODULE_INFO(srcversion, "6C927AF4F94EFFEBD210856");
