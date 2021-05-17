#!/bin/bash

# Script to run wave on Mac OS

cat runtime/jre_mac64/Contents/Home/lib/modules_aa runtime/jre_mac64/Contents/Home/lib/modules_ab runtime/jre_mac64/Contents/Home/lib/modules_ac > runtime/jre_mac64/Contents/Home/lib/modules
runtime/jre_mac64/Contents/Home/bin/java --module-path runtime/jre_mac64/javafx-sdk-16/lib/ --add-modules javafx.controls,javafx.fxml,javafx.web -jar runtime/bin/wave > nul 2>&1 &