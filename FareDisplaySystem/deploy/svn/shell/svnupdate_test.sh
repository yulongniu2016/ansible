#!/bin/bash

#svn checkout  svn://10.199.88.69/nocsvn/RDCode/doc/900_部署发布/102_票价屏/20171219-试点/01_DB/ /srv/www/repos/noc/FareDisplaySystem/01db/
#svn checkout  svn://10.199.88.69/nocsvn/RDCode/doc/900_部署发布/102_票价屏/20171219-试点/02_应用 /srv/www/repos/noc/FareDisplaySystem/02app/
#svn update /srv/www/repos/noc/FareDisplaySystem/01db/
#svn update /srv/www/repos/noc/FareDisplaySystem/02app/


#svn checkout  svn://10.199.88.69/nocsvn/RDCode/doc/900_部署发布 /srv/www/repos/noc/FareDisplaySystem/svndata/
Svn_Update()
{
  svn update /srv/www/repos/noc/FareDisplaySystem/svndata/

  rm -rf /srv/www/repos/noc/FareDisplaySystem/01db/* > /dev/null
  rm -rf /srv/www/repos/noc/FareDisplaySystem/02app/* > /dev/null
}

case "$1" in
  single)
    echo single
    Svn_Update
    svn info /srv/www/repos/noc/FareDisplaySystem/svndata/102_票价屏/20171219-试点/
    cp /srv/www/repos/noc/FareDisplaySystem/svndata/102_票价屏/20171219-试点/01_DB/* /srv/www/repos/noc/FareDisplaySystem/01db
    cp /srv/www/repos/noc/FareDisplaySystem/svndata/102_票价屏/20171219-试点/02_应用/* /srv/www/repos/noc/FareDisplaySystem/02app
  ;;
  double)
    echo double
    Svn_Update
    svn info /srv/www/repos/noc/FareDisplaySystem/svndata/102_票价屏/20171222-试点（双屏）/
    cp /srv/www/repos/noc/FareDisplaySystem/svndata/102_票价屏/20171222-试点（双屏）/01_DB/* /srv/www/repos/noc/FareDisplaySystem/01db
    cp /srv/www/repos/noc/FareDisplaySystem/svndata/102_票价屏/20171222-试点（双屏）/02_应用/* /srv/www/repos/noc/FareDisplaySystem/02app
  ;;
  *)
    echo "Usage: $0 {single|double}"
  ;;
esac


