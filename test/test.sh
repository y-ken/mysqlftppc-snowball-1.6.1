#!/bin/sh
EXPECT="1
1
1
1"
RESULT=`mysql test -B -N < test.sql`
if [ "$EXPECT" = "$RESULT" ];
then
	echo 'ok'
else
	echo 'fail'
fi
