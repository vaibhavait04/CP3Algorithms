for file in `ls *.cpp`
do 
#echo "checking $file" 
filepdf=`echo $file | sed 's/\.cpp/\.pdf/g'`
filehtml=`echo $file | sed 's/\.cpp/\.html/g'`
filehtm=`echo $file | sed 's/\.cpp/\.htm/g'`
#echo " HTML $filehtml and PDF $filepdf " 

if [ -f $filepdf -o  -f $filehtml -o -f $filehtm ]
then 
echo ;
#"File $filepdf for $file found" 
else 
echo "File not found for $file " 
fi

done 
