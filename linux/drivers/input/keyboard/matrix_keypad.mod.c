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
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x771f85fb, "input_event" },
	{ 0x6a2169ce, "gpiod_get_raw_value_cansleep" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdcb764ad, "memset" },
	{ 0x2313ab84, "gpiod_set_raw_value_cansleep" },
	{ 0x95fc5f46, "of_get_named_gpio_flags" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x63848f67, "of_get_property" },
	{ 0x2cfe9c2b, "of_count_phandle_with_args" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xd6011851, "input_free_device" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xf28855b, "gpiod_direction_input" },
	{ 0xa75efb1c, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x3d632891, "input_set_capability" },
	{ 0xe4ef066b, "matrix_keypad_build_keymap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6f140995, "input_allocate_device" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad");
MODULE_ALIAS("of:N*T*Cgpio-matrix-keypadC*");

MODULE_INFO(srcversion, "BEECF11A9AAE07F003A4CAE");
