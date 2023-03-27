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
	{ 0x2d3385d3, "system_wq" },
	{ 0x1f62ffe5, "em28xx_read_reg" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x9b6fc2a5, "rc_unregister_device" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xf6e13467, "em28xx_write_regs" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1b8a30d0, "em28xx_register_extension" },
	{ 0x2a4cf6ec, "rc_allocate_device" },
	{ 0x771f85fb, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xe6fb8844, "em28xx_find_led" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x8606f399, "rc_free_device" },
	{ 0xec532318, "em28xx_toggle_reg_bits" },
	{ 0x21d39b2b, "rc_keydown" },
	{ 0xe7a5d416, "em28xx_unregister_extension" },
	{ 0x3ec5ed95, "rc_register_device" },
	{ 0x8a4e0154, "em28xx_write_reg_bits" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0xd6011851, "input_free_device" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0x4fc1646e, "i2c_probe_func_quick_read" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x984d234f, "em28xx_write_reg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x6f140995, "input_allocate_device" },
};

MODULE_INFO(depends, "em28xx");


MODULE_INFO(srcversion, "FA2160F9D4DCCF47832CC19");
