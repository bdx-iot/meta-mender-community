# meta-mender-st

Mender integration for st based boards

Supported boards:

 - stm32mp157a-dk1


## Dependencies

This layer depends on:

```
URI: https://github.com/bdx-iot/meta-stm32mp1
branch: topic/uboot
revision: HEAD
```

```
URI: https://github.com/bdx-iot/meta-mender
branch: add/stm32mp157a-dk1
revision: HEAD
```

## Quick start

The following commands will setup the environment and allow you to build images
that have Mender integrated.


```
    $ mkdir mender-st && cd mender-st
    $ repo init \
           -u https://github.com/bdx-iot/meta-mender-community \
           -m meta-mender-st/scripts/manifest-st.xml \
           -b add/stm32mp157a-dk1/wip
    $ repo sync

    $ source setup-environment st
    $ MACHINE=stm32mp157a-dk1 bitbake core-image-base
```


#Maintainer

The author(s) and maintainer(s) of this layer are:

- Pierre-Jean Texier - <pjtexier@koncepto.io> - [texierp](https://github.com/texierp)
- Joris Offouga - <offougajoris@gmail.com> - [jorisoffouga](https://github.com/jorisoffouga)

Always include the maintainers when suggesting code changes to this layer.
