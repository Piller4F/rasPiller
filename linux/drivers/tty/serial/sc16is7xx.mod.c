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
	{ 0x20105980, "driver_unregister" },
	{ 0xfa5af296, "uart_unregister_driver" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xe5954944, "uart_register_driver" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x650a26c0, "uart_update_timeout" },
	{ 0x1f71cf83, "uart_get_baud_rate" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xc8cbd20d, "spi_get_device_id" },
	{ 0x7cc30d74, "__devm_regmap_init_spi" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0x73b71578, "spi_setup" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xe786d32a, "of_prop_next_u32" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x4bddf965, "uart_add_one_port" },
	{ 0x2ef24fb4, "gpiochip_add_data_with_key" },
	{ 0x7630e13a, "sched_set_fifo" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0xc53c2eea, "__kthread_init_worker" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3adb6eb6, "devm_clk_get_optional" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x80d43a70, "do_SAK" },
	{ 0xdeac8a22, "tty_flip_buffer_push" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0x1d1c53d0, "uart_try_toggle_sysrq" },
	{ 0x4a17ed66, "sysrq_mask" },
	{ 0xe0c0d0b5, "uart_insert_char" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x66dbf813, "regmap_raw_read" },
	{ 0xf45dbda3, "gpiochip_remove" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0xe81aa1cc, "kthread_flush_worker" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8122f4ab, "uart_remove_one_port" },
	{ 0x97df9f42, "gpiochip_get_data" },
	{ 0x5f0d30e8, "kthread_queue_work" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x96da5f91, "uart_write_wakeup" },
	{ 0xe247157e, "regmap_raw_write" },
	{ 0x67ff8ab2, "regcache_cache_bypass" },
	{ 0x2cc71b34, "regmap_read" },
};

MODULE_INFO(depends, "regmap-i2c,regmap-spi");

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "C79CB49FDEF07970F20E9B7");
