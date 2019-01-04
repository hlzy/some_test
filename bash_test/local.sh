function myfunc()  
{  
    local  myresult='some value'  
    echo "$myresult"  
} 
result=$(myfunc)
echo $result


function myfunc2()  
{  
    local  __resultvar=$1  
    local  myresult='ls'  
    echo $myresult
    eval $__resultvar="'$myresult'"  
} 
echo $(myfunc2)
