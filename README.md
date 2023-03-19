# TP1DPBO2023
![image](https://user-images.githubusercontent.com/91662639/226188118-5fbc9e06-e162-4117-a2aa-b9633d09b30a.png)
## Bahasa Pemrograman Yang Digunakan : C++
Karena dalam desain terdapat kelas yang memiliki multiple inheritance, yaitu class Assistant yang merupakan child dari class CollegeStudent (Mahasiswa) dan class Lecturer (Pengajar). Dalam program ini dosen bukan class Lecturer tapi class CollegeTeacher.
## Terdapat Atribut "energy"
Di dalam program terdapat banyak method seperti eat(), drink(), sleep(), study(), attendClass(), dsb. Tetapi method-method tersebut kurang memiliki tujuan jika hanya dibuat untuk sebatas menampilkan satu kalimat saja. Maka dari itu beberapa method seperti eat(), drink(), dan sleep() akan menambah energi dan beberapa method seperti study() dan attendClass() hanya bisa dijalankan apabila memiliki energi yang cukup.
## Penambahan class Program dan Assignment
Beberapa atribut lain seperti textbook, laptop, whiteboard marker, dsb tetap ada dalam program tapi hanya sebatas string (bukan class). Hal itu karena atribut-atribut tersebut hanya cukup memiliki 1 nilai. Selain memiliki lebih dari 1 nilai, Program dan Assignment juga akan digunakan untuk interaksi antar class, maka dari itu Program dan Assignment dijadikan sebuah class terpisah.
## Bonus
Terdapat beberapa interaksi antar class yang dibatasi oleh beberapa kondisi, seperti dosen yang tidak dapat menilai jika asisten belum memberikan tugas dan dpm yang tidak dapat mengapresiasi jika proker bem belum selesai
