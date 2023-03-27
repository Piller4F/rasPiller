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
	{ 0xe3c55dba, "ieee80211_rx_irqsafe" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbcdc707, "cfg80211_unlink_bss" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x4558a487, "single_open" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x68bae379, "single_release" },
	{ 0x2f07a679, "seq_puts" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2e34abeb, "ieee80211_beacon_get_tim" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe7b156f3, "ieee80211_resume_disconnect" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2a352f01, "freq_reg_info" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xc962f319, "wiphy_rfkill_start_polling" },
	{ 0x9d50b929, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xdcf25530, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5a08e008, "skb_unlink" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x75d9364b, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc765400b, "ieee80211_rate_control_register" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x345caf15, "wiphy_apply_custom_regulatory" },
	{ 0x81bb8729, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0x703dd09b, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x54acd503, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x7daff04c, "cfg80211_put_bss" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x15ea399c, "ieee80211_tx_status_irqsafe" },
	{ 0x92997ed8, "_printk" },
	{ 0x31f94d90, "ieee80211_find_sta" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7ae81428, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd7002279, "ieee80211_rate_control_unregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb2a7131f, "ieee80211_start_tx_ba_session" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x5e1c179b, "ieee80211_connection_loss" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "mac80211,cfg80211,rfkill");


MODULE_INFO(srcversion, "AD97CBCB691FF5AAC5BB946");
