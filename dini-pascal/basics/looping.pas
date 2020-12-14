program looping;

var 
i, value : Integer;
fact : Int64;

begin
    fact := 1;
    WriteLn('Please enter any integer you want to find the factorial: ');
    ReadLn(value);

    for i := 0 to (value - 1) do 
    begin
        fact := fact * (value - i);
    end;

    WriteLn('The factorial is: ', fact);
end.
