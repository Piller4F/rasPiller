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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xb24e14b5, "iio_channel_release_all" },
	{ 0xe4a88377, "iio_buffer_init" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x4357f4f6, "iio_update_buffers" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3bddb415, "iio_channel_get_all" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e9b07c, "iio_buffer_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "7F5A76C2D34043D615353E4");
