#!/bin/bash

gpp *.cpp -o prog
