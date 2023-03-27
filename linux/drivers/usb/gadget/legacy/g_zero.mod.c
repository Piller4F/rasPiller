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
	{ 0x2b68bd2f, "del_timer" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x99711c43, "usb_ep_autoconfig_reset" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1ff009a4, "usb_composite_overwrite_options" },
	{ 0x44239691, "_dev_info" },
	{ 0xf059de41, "usb_composite_probe" },
	{ 0x7b4b1895, "usb_add_function" },
	{ 0x1c809111, "usb_gadget_wakeup" },
	{ 0xb88db477, "usb_put_function" },
	{ 0x240e77d5, "usb_composite_unregister" },
	{ 0xa965ceeb, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x26fe7fb9, "usb_string_ids_tab" },
	{ 0x236de676, "usb_add_config_only" },
	{ 0x75b13944, "usb_get_function_instance" },
	{ 0xe780e06a, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6736b8b2, "param_ops_uint" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "96AB8942FB3B6B42A4D4425");
