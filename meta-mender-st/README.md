# Mender integration for st based boards

Supported boards:

 - stm32mp157a-dk1

## Build

Download the source:

    $ mkdir mender-st
    $ cd mender-st
    $ repo init \
           -u https://github.com/bdx-iot/meta-mender-community \
           -m meta-mender-st/scripts/manifest-st.xml \
           -b add/stm32mp1-dk1
    $ repo sync

Setup environment

    $ . setup-environment st

Build

    $ bitbake core-image-base
