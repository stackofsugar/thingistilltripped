program looping2;

var 
i, value : Integer;
fact : Int64;

begin
    WriteLn('Please enter any integer you want to find the factorial: ');
    ReadLn(value);

    fact := 1;
    i := 0;
    repeat
        fact := fact * (value - i);
        i := i + 1;
    until i = (value - 1);

    WriteLn('The factorial is: ', fact);
end.