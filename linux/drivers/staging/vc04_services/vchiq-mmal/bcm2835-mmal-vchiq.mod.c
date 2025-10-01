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

MODULE_INFO(staging, "Y");

KSYMTAB_FUNC(vchiq_mmal_port_set_format, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_port_parameter_set, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_port_parameter_get, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_port_enable, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_port_disable, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_port_connect_tunnel, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_submit_buffer, "_gpl", "");
KSYMTAB_FUNC(mmal_vchi_buffer_init, "_gpl", "");
KSYMTAB_FUNC(mmal_vchi_buffer_cleanup, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_component_init, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_component_finalise, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_component_enable, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_component_disable, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_version, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_finalise, "_gpl", "");
KSYMTAB_FUNC(vchiq_mmal_init, "_gpl", "");

SYMBOL_CRC(vchiq_mmal_port_set_format, 0x16fbb6ad, "_gpl");
SYMBOL_CRC(vchiq_mmal_port_parameter_set, 0x79a9b506, "_gpl");
SYMBOL_CRC(vchiq_mmal_port_parameter_get, 0x4744b217, "_gpl");
SYMBOL_CRC(vchiq_mmal_port_enable, 0x1044899d, "_gpl");
SYMBOL_CRC(vchiq_mmal_port_disable, 0x34043fac, "_gpl");
SYMBOL_CRC(vchiq_mmal_port_connect_tunnel, 0xcf7e73c2, "_gpl");
SYMBOL_CRC(vchiq_mmal_submit_buffer, 0x7bdb19c9, "_gpl");
SYMBOL_CRC(mmal_vchi_buffer_init, 0x21524ae9, "_gpl");
SYMBOL_CRC(mmal_vchi_buffer_cleanup, 0x8c9c42aa, "_gpl");
SYMBOL_CRC(vchiq_mmal_component_init, 0xce7d6ea2, "_gpl");
SYMBOL_CRC(vchiq_mmal_component_finalise, 0x136249d1, "_gpl");
SYMBOL_CRC(vchiq_mmal_component_enable, 0xeea20455, "_gpl");
SYMBOL_CRC(vchiq_mmal_component_disable, 0x5c35c536, "_gpl");
SYMBOL_CRC(vchiq_mmal_version, 0x6192e1a2, "_gpl");
SYMBOL_CRC(vchiq_mmal_finalise, 0x73577d20, "_gpl");
SYMBOL_CRC(vchiq_mmal_init, 0x61f8a1ea, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x631dd20c, "vchiq_use_service" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0x20978fb9, "idr_find" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2569de03, "vchiq_connect" },
	{ 0xc0bc42f9, "vchiq_get_service_userdata" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xdd592fc2, "vchiq_initialise" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1a2f64c5, "vchiq_open_service" },
	{ 0x78e63b98, "vchiq_close_service" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd29af670, "vchiq_shutdown" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa66b2564, "vc_sm_cma_import_dmabuf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0x73ab1e59, "vchiq_release_service" },
	{ 0x91a4d135, "vchiq_queue_kernel_message" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x7d9d0828, "vchiq_bulk_receive" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x95598b87, "vchiq_release_message" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "vc-sm-cma");


MODULE_INFO(srcversion, "5BC26772C39F31A681BD891");
