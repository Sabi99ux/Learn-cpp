# CliDB

Pengelola Basis Data JSON CLI sederhana yang dibangun menggunakan C++.

## Fitur

- Tambah data
- Cari data
- Hapus data
- Generator UUID
- Penyimpanan berbasis JSON
- Aplikasi ringan berbasis CLI

---

# Struktur Proyek

```text
CliDB/
│── main.cpp
│── README.md
│
├── data/
│   └── data.json
│
├── include/
│   ├── add.hpp
│   ├── json.hpp
│   ├── remove.hpp
│   ├── search.hpp
│   └── uuid_generator.hpp
│
└── src/
    ├── add.cpp
    ├── remove.cpp
    ├── search.cpp
    └── uuid_generator.cpp
```

---

# Struktur JSON

```json
{
    "users": [
        {
            "age": 19,
            "degree": "Bachelor",
            "email": "jhon.thomson@example.edu",
            "major": "Computer Science",
            "name": "JHON THOMSON",
            "semester": 2,
            "university": "Stanford University",
            "uuid": "6243fa62-2039-1b66-a7dd-5282b2aec142"
        }
    ]
}
```

---

# Disclaimer

Data di atas hanyalah data dummy. Jika terdapat kesamaan nama atau informasi dengan data asli, hal tersebut murni kebetulan.

---

# Persyaratan

- C++17 atau lebih baru
- Compiler g++
- Windows / Linux / macOS

---

# Compile

```bash
g++ main.cpp src/*.cpp -o main
```

---

# Menjalankan Program

Windows:

```bash
main.exe
```

Linux / macOS:

```bash
./main
```

---

# Tech Stack

- Bahasa: C++
- Basis Data: JSON
- Compiler: g++

---

# Pengembangan Selanjutnya

- Edit/update data
- Pagination
- Error handling yang lebih baik
- Warna pada output CLI
- Enkripsi file JSON
- Dukungan multi-table
- Sistem backup data