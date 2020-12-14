program example;

var
    num_1, num_2, res : Integer;

function maximum(value_1, value_2 : Integer) : Integer;
begin
    if (value_1 < value_2) then
        maximum := value_2
    else
        maximum := value_1;
end;

begin
    Write('Enter an integer: ');
    ReadLn(num_1);
    Write('Enter another integer: ');
    ReadLn(num_2);

    res := maximum(num_1, num_2);
    WriteLn('Maximum is: ', res);
end.