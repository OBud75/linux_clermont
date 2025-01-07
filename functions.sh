show_params () {
	echo File name: $0;
	echo Param 1: $1;
	echo Param 2: $2;
}

echo First file param: $1;
show_params "toto" "abc";

