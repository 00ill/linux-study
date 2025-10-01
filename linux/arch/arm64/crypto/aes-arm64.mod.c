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
	{ 0xfd6e81ec, "crypto_unregister_alg" },
	{ 0x56054c05, "crypto_it_tab" },
	{ 0x735a7246, "crypto_aes_set_key" },
	{ 0xead77811, "crypto_register_alg" },
	{ 0x1a10c32b, "crypto_ft_tab" },
	{ 0xa84ce9e0, "crypto_aes_inv_sbox" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "aes_generic,libaes");


MODULE_INFO(srcversion, "F802706DFF78E66D088709F");
