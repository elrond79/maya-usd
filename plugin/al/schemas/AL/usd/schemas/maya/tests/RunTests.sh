#!/bin/bash

export AL_USDMAYA_LOCATION=$1
export MAYA_PLUG_IN_PATH=$AL_USDMAYA_LOCATION/plugin:$MAYA_PLUG_IN_PATH
export LD_LIBRARY_PATH=$AL_USDMAYA_LOCATION/lib:$2:$LD_LIBRARY_PATH
export PYTHONPATH=$AL_USDMAYA_LOCATION/lib/python:$2/python:$PYTHONPATH
export PXR_PLUGINPATH_NAME=$AL_USDMAYA_LOCATION/lib/usd:$PXR_PLUGINPATH_NAME
export PATH=$MAYA_LOCATION/bin:$PATH

$AL_USDMAYA_LOCATION/bin/testMayaSchemas

