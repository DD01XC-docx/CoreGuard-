# 🛡️ CoreGuard

**CoreGuard** is a minimalist signature-based antivirus engine written in modern C++17/20, designed for learning and demonstrating core principles of static malware detection.

---

## 🚀 Features

- 🔍 File scanning based on simple signatures (strings, hex patterns)
- 🔐 File hashing support (SHA256, MD5)
- 📁 Cross-platform filesystem traversal (Windows / Linux)
- 🗂️ Simple signature database (TXT / JSON / optional SQLite)
- 🔄 (Optional) Real-time filesystem monitoring:
  - Windows: `ReadDirectoryChangesW`
  - Linux: `inotify`

---

## 🧰 Technology Stack

| Component          | Tools / Libraries                                |
|--------------------|--------------------------------------------------|
| Language           | C++17 or C++20                                   |
| Filesystem         | `std::filesystem`, `std::ifstream`               |
| Multithreading     | `std::thread`                                    |
| Hashing            | Crypto++ or custom SHA256 implementation         |
| JSON Parsing       | [`nlohmann/json`](https://github.com/nlohmann/json) |
| File Monitoring    | WinAPI / inotify                                 |
| Build System       | CMake                                            |

---
