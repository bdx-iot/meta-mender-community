FILESEXTRAPATHS_prepend := "${THISDIR}/u-boot-mainline:"

SRC_URI_remove = " \
	file://0005-fw_env_main.c-Fix-incorrect-size-for-malloc-ed-strin.patch \
	file://0006-env-Kconfig-Add-descriptions-so-environment-options-.patch \
"

SRC_URI_append = " file://0001-ARM-STM32MP1-Add-support-to-mender.patch"

MENDER_UBOOT_AUTO_CONFIGURE = "0"
BOOTENV_SIZE = "0x2000"
