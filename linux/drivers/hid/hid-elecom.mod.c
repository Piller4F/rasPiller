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
	{ 0x44239691, "_dev_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0005g*v0000056Ep00000061");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000E6");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000FB");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000FC");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000FD");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000FE");
MODULE_ALIAS("hid:b0003g*v0000056Ep000000FF");
MODULE_ALIAS("hid:b0003g*v0000056Ep0000010C");
MODULE_ALIAS("hid:b0003g*v0000056Ep0000010D");

MODULE_INFO(srcversion, "E0C89AFCC4413A8B8A192E7");
