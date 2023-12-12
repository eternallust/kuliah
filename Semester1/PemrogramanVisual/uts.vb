Public Class Form1
    Private Sub btnHitung_Click(sender As Object, e As EventArgs) Handles btnHitung.Click
        ' Mendapatkan nilai dari input nama, gaji, dan jumlahAnak
        Dim nama As String = txtNama.Text
        Dim gaji As Double

        If Double.TryParse(txtGaji.Text, gaji) Then
            Dim jumlahAnak As Integer

            If Integer.TryParse(txtJumlahAnak.Text, jumlahAnak) Then
                ' Validasi jumlah anak
                If jumlahAnak > 3 Then
                    MessageBox.Show("Jumlah anak yang diberi tunjangan hanya sampai anak ke-3.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error)
                Else
                    ' Menghitung gajiTotal
                    Dim gajiTotal As Double = gaji + (50000 * jumlahAnak)

                    ' Memasukkan hasil perhitungan ke dalam input gajiTotal
                    txtGajiTotal.Text = gajiTotal.ToString()
                End If
            Else
                MessageBox.Show("Masukkan jumlah anak dengan benar.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error)
            End If
        Else
            MessageBox.Show("Masukkan gaji dengan benar.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error)
        End If
    End Sub
End Class