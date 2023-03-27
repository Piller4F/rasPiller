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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0x3147d202, "usb_add_config" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0x12692129, "fsg_common_set_cdev" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0x1ff009a4, "usb_composite_overwrite_options" },
	{ 0x44239691, "_dev_info" },
	{ 0xf059de41, "usb_composite_probe" },
	{ 0x7b4b1895, "usb_add_function" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0xb88db477, "usb_put_function" },
	{ 0x240e77d5, "usb_composite_unregister" },
	{ 0xa965ceeb, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x26fe7fb9, "usb_string_ids_tab" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x75b13944, "usb_get_function_instance" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0xe780e06a, "param_ops_ushort" },
	{ 0x6736b8b2, "param_ops_uint" },
};

MODULE_INFO(depends, "usb_f_mass_storage,libcomposite");


MODULE_INFO(srcversion, "ACBA96CE3B483C403E2C9FB");
