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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0xa6d4ab81, "hci_recv_diag" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0xf4ca96b0, "__hci_cmd_sync" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xb55d3b93, "__pm_runtime_use_autosuspend" },
	{ 0xa6ee775f, "hci_register_dev" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0x17088a76, "rcuwait_wake_up" },
	{ 0x9598415b, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x670881fc, "hci_reset_dev" },
	{ 0x58f204e4, "tty_unthrottle" },
	{ 0x55f6b237, "btbcm_set_bdaddr" },
	{ 0x6ed35941, "btbcm_write_pcm_int_params" },
	{ 0x343ee254, "__percpu_down_read" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9f88fca1, "serdev_device_close" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xecd7e4ca, "of_irq_get_byname" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbf35443c, "hci_recv_frame" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x2cd2c61a, "hci_unregister_dev" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x8c9e446, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd26ad1ae, "serdev_device_write_buf" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0x718b8b7, "bt_info" },
	{ 0x9b7f3b06, "serdev_device_set_tiocm" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xba424046, "__serdev_device_driver_register" },
	{ 0x4761161b, "__percpu_init_rwsem" },
	{ 0x6864928b, "tty_ldisc_flush" },
	{ 0x20105980, "driver_unregister" },
	{ 0xdb085d5f, "n_tty_ioctl_helper" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x81bb8729, "__dev_kfree_skb_irq" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x736733f0, "serdev_device_write_flush" },
	{ 0x1ea17f65, "devm_clk_put" },
	{ 0xaa6da2f1, "device_property_read_u8_array" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xc60c822e, "percpu_up_write" },
	{ 0x98223b61, "btbcm_read_pcm_int_params" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0x44239691, "_dev_info" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xf8e8aa42, "tty_driver_flush_buffer" },
	{ 0xaefb2a4c, "devm_free_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9cc8e538, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x702b033b, "hci_alloc_dev_priv" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0x70ba7772, "serdev_device_set_flow_control" },
	{ 0xdf7c7f5c, "btbcm_initialize" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xbd2dccc3, "pm_runtime_set_autosuspend_delay" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x585ed022, "btbcm_finalize" },
	{ 0x7606362, "platform_get_irq" },
	{ 0x38117856, "hci_free_dev" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xf983d0f, "serdev_device_set_baudrate" },
	{ 0x9be07d44, "tty_register_ldisc" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf513642d, "percpu_down_write" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf1d394fb, "tty_set_termios" },
	{ 0xfbb0f261, "percpu_free_rwsem" },
};

MODULE_INFO(depends, "bluetooth,btbcm");

MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4334-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4334-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0C*");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-bt");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-btC*");

MODULE_INFO(srcversion, "B93DF146F1ECA2369B27F50");
