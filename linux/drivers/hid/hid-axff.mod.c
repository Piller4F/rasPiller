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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xcef6dead, "hid_hw_open" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0xc5dbd270, "hid_hw_close" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001A34p00000802");
MODULE_ALIAS("hid:b0003g*v00001A34p0000F705");

MODULE_INFO(srcversion, "1C82D73C8514D679AA7542E");