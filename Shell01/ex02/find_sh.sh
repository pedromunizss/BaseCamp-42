#!/bin/sh
ls -R | find . -type f -name "*.sh" | sed 's/.*\///g' | rev | cut -c 4- | rev