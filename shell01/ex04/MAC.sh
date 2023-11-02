#!/bin/bash
ifconfig -L | grep -w "ether" | cut -d " " -f 2
