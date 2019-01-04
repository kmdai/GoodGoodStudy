#!/bin/bash

git_path=$1

if [[ $git_path =~ ^https.* ]];
then
git clone -c http.proxy=socks5://127.0.0.1:1081 $1
elif [[ $git_path =~ ^http.* ]];
then
git clone -c http.proxy=socks5://127.0.0.1:1081 $1
else
git clone $1
fi
