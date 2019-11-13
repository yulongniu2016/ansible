#!/bin/bash

SPATH='/opt/lampp/htdocs/wanda/FareDisplaySystem'
Svn_chk()
{
  svn checkout svn://10.199.88.69/nocsvn/RDCode/doc/900_部署发布/  ${SPATH}/svndata/
}

Svn_Update()
{
  #svn update /srv/www/repos/noc/FareDisplaySystem/svndata/
  svn info ${SPATH}/svndata/102_票价屏/
  svn update ${SPATH}/svndata/102_票价屏/

}

case $1 in
'chk')
  Svn_chk
  ;;
'up')
  Svn_Update
  ;;
*)
 echo "Usage: $0 <chk / up>"
 ;;
esac
