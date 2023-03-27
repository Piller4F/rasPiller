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
	{ 0x2c1bb3df, "iio_kfifo_allocate" },
	{ 0x9683339d, "iio_device_attach_buffer" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0xed1f7ea0, "iio_kfifo_free" },
	{ 0x68526938, "iio_device_id" },
	{ 0xc3ac59dd, "iio_alloc_pollfunc" },
	{ 0x4561912b, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "7AEF01B9B03EBA8C74E2DE9");
