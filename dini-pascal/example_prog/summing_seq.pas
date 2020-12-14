(*
    Write a program to calculate the summation of an arithmetic sequence
    Will use function
*)
program summing_seq;

var
    seq_length, seq_sum, i : Integer;
    seq_array : array of Integer;

begin
    Write('How long is your sequence > ');
    ReadLn(seq_length);
    SetLength(seq_array, seq_length);

    seq_sum := 0;
    for i := 0 to (seq_length - 1) do
    begin
        Write('Enter ', (i + 1), ' th element: ');
        ReadLn(seq_array[i]);
        seq_sum := seq_sum + seq_array[i];
    end;

    WriteLn('The sum is: ', seq_sum);
end.