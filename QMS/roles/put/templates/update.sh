#!/bin/bash
softdir=`echo ${1} |awk '{print $1}'`
softname=`echo ${1} |awk '{print $2}'`
dbhost=`echo ${1} |awk '{print $3}'`
dbname=`echo ${1} |awk '{print $4}'`
dbpassword=`echo ${1} |awk '{print $5}'`
delvar=`echo ${1} |awk '{print $6}'`

# download the pkg of install 
wget -c -P /tmp/${softdir}  http://10.199.89.56/wanda/qms/${softname}

# update cqs
#initctl stop cqs
#sleep 10s
#rpm -Uvh /tmp/${softdir}/${softname}
#initctl start cqs

# check cqs version
#cqsver=`rpm -qa|grep cqs`".rpm"


#if [ ${softname}s == ${cqsver}s ]; then
#  echo `date "+%Y-%m-%d %H:%M:%S"`" cqs update success. " > /tmp/autodev.log
#else
#  echo `date "+%Y-%m-%d %H:%M:%S"`" cqs update error. " > /tmp/autodev.log
#fi

#hostip=`ifconfig|grep 'inet addr:10.'|awk -F: '{print $2}'|awk '{print $1}'`

#mysql -h${dbhost} -uroot -p${dbpassword} --default-character-set=utf8 -e "update ${dbname} set VersionQms='${cqsver}',UpdateTimeQms=now() where tmsIP='${hostip}'"

#if [ $? != 0  ]; then
#  echo "records update error " >> /tmp/autodev.log
#else
#  echo "records update success"  >> /tmp/autodev.log
#fi

#if [ ${delvar}es == 'yes' ]; then
#  rm -rf /tmp/${softdir} 
#fi
