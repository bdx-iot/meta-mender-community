FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI_remove = " \
	file://0005-fw_env_main.c-Fix-incorrect-size-for-malloc-ed-strin.patch \
	file://0006-env-Kconfig-Add-descriptions-so-environment-options-.patch \
"

SRC_URI_append = " file://0001-ARM-STM32MP1-Add-support-to-mender.patch"

# Temporary fix (see: http://patchwork.ozlabs.org/project/uboot/list/?series=127075)
SRC_URI_append = " \
	file://0001-fw_env-remove-duplicated-definitions.patch \
	file://0002-fw_env-fix-build-error.patch \
	file://0003-env-add-missing-compiler.h-header-file.patch \
"

MENDER_UBOOT_AUTO_CONFIGURE = "0"
BOOTENV_SIZE = "0x2000"
