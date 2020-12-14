program baris;

var
    a_val, b_val, n_val, sum, i, op_buffer : Int64;

begin
    Write('Input a: ');
    ReadLn(a_val);
    Write('Input b: ');
    ReadLn(b_val);
    Write('Input n: ');
    ReadLn(n_val);

    Write('Barisan = ');
    sum := 0;
    for i := 1 to n_val do
    begin
        op_buffer := ((5 * a_val) + ((i - 1) * b_val));
        sum := sum + op_buffer;
        Write(op_buffer, ' ');
    end;
    WriteLn('');
    WriteLn('Jumlahan = ', sum);
end.