ldapsearch -x -LLL "sn=*bon*" sn | grep sn | cut -c 5- | wc -l | bc 
