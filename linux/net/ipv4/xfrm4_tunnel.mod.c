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
	{ 0x45deb145, "xfrm4_tunnel_deregister" },
	{ 0x21b3b49, "xfrm_unregister_type" },
	{ 0x8fa16d2e, "xfrm4_tunnel_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x224bf7d1, "xfrm_register_type" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x997c08ec, "xfrm_input" },
};

MODULE_INFO(depends, "tunnel4");


MODULE_INFO(srcversion, "51A3AB12ED474824C44BF8B");
