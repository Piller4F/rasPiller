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
	{ 0x8a6dfff8, "dmaengine_unmap_put" },
	{ 0xa39055e1, "async_tx_submit" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xebeddb2e, "dmaengine_get_unmap_data" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa43b0aa6, "__async_tx_find_channel" },
	{ 0x9fd9307a, "async_tx_quiesce" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "async_tx");


MODULE_INFO(srcversion, "6B1E7FF95EAC2758C9CD924");
