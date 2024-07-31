ifconfig | grep -w 'ether' | sed 's/^.......//' | tr -d ' '
