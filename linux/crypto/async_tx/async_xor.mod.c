#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8a6dfff8, "dmaengine_unmap_put" },
	{ 0xdcb764ad, "memset" },
	{ 0xa39055e1, "async_tx_submit" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0xebeddb2e, "dmaengine_get_unmap_data" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xa43b0aa6, "__async_tx_find_channel" },
	{ 0x9fd9307a, "async_tx_quiesce" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "async_tx,xor");


MODULE_INFO(srcversion, "3873C8882F41B45E33800A4");
