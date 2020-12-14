program operators;

var value : Integer;

begin
    WriteLn('Enter an integer value: ');
    ReadLn(value);

    WriteLn('value * value = ', (value * value));
    WriteLn('value + value = ', (value + value));
    WriteLn('value / 150 = ', (value / 150):7:5);
    WriteLn('... and many more');
end.