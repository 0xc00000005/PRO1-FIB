#!/bin/bash
rm ./tempp > /dev/null
echo "Compiling $1..."
EXECUTABLE=${1//.cpp}
echo $EXECUTABLE
g++ $1 -o $EXECUTABLE
echo "Compilation succedeed, executing..."
touch ./temp
cat $EXECUTABLE >> ./temp
chmod +x ./temp
./temp

 