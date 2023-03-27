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
	{ 0x13445e92, "param_ops_bool" },
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x449ea93, "usb_hub_find_child" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x8c9e3716, "usb_hid_driver" },
	{ 0x44239691, "_dev_info" },
	{ 0x771f85fb, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf864e474, "hid_hw_stop" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004E7p00000009");
MODULE_ALIAS("hid:b0003g*v000004E7p00000030");

MODULE_INFO(srcversion, "A91B4FA4A8CB78E5D4E6959");
