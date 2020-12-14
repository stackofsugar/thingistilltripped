program conditional;

var value : Integer;

begin
    while(1 = 1) do
    begin
        WriteLn('Please enter an integer: ');
        ReadLn(value);
        if(value < 10) then
            WriteLn('Your input is less than 10')
        else if(value < 20) then
            WriteLn('Your input is less than 20')
        else if(value < 30) then
            WriteLn('Your input is less than 30')
        else 
            WriteLn('Your input is more than or equal to 30');
    end;
end.