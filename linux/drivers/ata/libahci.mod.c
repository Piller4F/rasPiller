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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x921b3c7d, "ata_dummy_port_ops" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xedba53b9, "ata_port_freeze" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x1bbf0e9a, "dev_attr_sw_activity" },
	{ 0x13f68623, "sata_pmp_error_handler" },
	{ 0xf20a946c, "sata_link_scr_lpm" },
	{ 0x9651bbba, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x76aa7f57, "ata_port_desc" },
	{ 0x5311ffb8, "dev_attr_ncq_prio_enable" },
	{ 0x421a9978, "dev_attr_em_message" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0x97430d02, "sata_pmp_port_ops" },
	{ 0x569a8b7b, "ata_ehi_push_desc" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x8c35c438, "ata_dev_set_feature" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x60a53fbc, "ata_wait_register" },
	{ 0xa19539a2, "ata_std_qc_defer" },
	{ 0xbc35d69a, "ata_host_start" },
	{ 0xa64f8679, "ata_link_abort" },
	{ 0xc5947b53, "dev_attr_unload_heads" },
	{ 0xe86e5f5, "ata_msleep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0xecfd553f, "ata_ehi_clear_desc" },
	{ 0xa1e7b67f, "sata_link_hardreset" },
	{ 0x44239691, "_dev_info" },
	{ 0x5bcc0df7, "ata_dev_classify" },
	{ 0x9a2abc3, "ata_host_activate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdf0c757f, "ata_tf_to_fis" },
	{ 0x92997ed8, "_printk" },
	{ 0x7e9e1b58, "ata_host_register" },
	{ 0xed351c51, "dev_attr_ncq_prio_supported" },
	{ 0x8b32386b, "dev_attr_em_message_type" },
	{ 0x5ae668e5, "sata_lpm_ignore_phy_events" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0xf8ffb4ee, "ata_wait_after_reset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x65d9ba0e, "ata_qc_complete_multiple" },
	{ 0x3cdc9bf3, "ata_link_next" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4c085f8, "ata_tf_from_fis" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x37985272, "ata_std_postreset" },
	{ 0x20bb3feb, "dmam_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x747b7e6f, "dev_attr_link_power_management_policy" },
	{ 0x8c17fe5c, "ata_port_abort" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x8a0ed425, "sata_async_notification" },
};

MODULE_INFO(depends, "libata");


MODULE_INFO(srcversion, "DA7EA78B6C60907D9F1BA4C");
