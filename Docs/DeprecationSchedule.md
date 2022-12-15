# max deprecation schedule

|Clang version|Release date|max deprecation date|Adds support for                    |
|-------------|-----------:|-------------------:|------------------------------------|
|Clang 15.0.x |Sep  6, 2022|             Current|std::source_location                |
|Clang 14.0.x |Mar 25, 2022|        Sep  6, 2027|                                    |
|Clang 13.0.x |Oct  4, 2021|        Mar 25, 2027|                                    |
|Clang 12.0.x |Apr 15, 2021|        Oct  4, 2026|constexpr bit intrinsics, [[likely]]|
|Clang 11.0.x |Oct 12, 2020|        Apr 15, 2026|                                    |
|Clang 10.0.x |Mar 24, 2020|        Oct 12, 2025|concepts, constinit                 |
|Clang 9.0.x  |Sep 19, 2019|        Mar 24, 2025|bit operations                      |
|Clang 8.0.x  |Mar 20, 2019|        Sep 19, 2024|                                    |
|Clang 7.0.x  |Sep 19, 2018|        Mar 20, 2024|std::endian, <version>              |
|Clang 6.0.x  |Mar  8, 2018|        Sep 19, 2023|                                    |
|Clang 5.0.x  |Sep  7, 2018|        Mar  8, 2023|                                    |
|Clang 4.0.x  |Mar 13, 2017|        Sep  7, 2023|std::optional                       |
|Clang 3.9.x  |Sep  2, 2016|          Deprecated|                                    |

|GCC version|Release date|max deprecation date|Adds support for                                  |
|-----------|-----------:|-------------------:|--------------------------------------------------|
|GCC 12.2   |Aug 19, 2022|             Current|                                                  |
|GCC 12.1   |May  6, 2022|        Aug 19, 2027|if consteval, std::move_only_function             |
|GCC 11.3   |Apr 21, 2022|        May  6, 2027|                                                  |
|GCC 11.2   |Jul 28, 2021|        Apr 21, 2027|                                                  |
|GCC 11.1   |Apr 27, 2021|        Jul 28, 2026|std::bit_cast, [[nodiscard]], std::source_location|
|GCC 10.3   |Apr  4, 2021|        Apr 27, 2026|                                                  |
|GCC 10.2   |Jul 23, 2020|        Apr  4, 2026|                                                  |
|GCC 10.1   |May  7, 2020|        Jul 23, 2025|concepts, std::shift_*, constinit                 |
|GCC 9.3    |Mar 12, 2020|        May  7, 2025|                                                  |
|GCC 9.2    |Aug 12, 2019|        Mar 12, 2025|                                                  |
|GCC 9.1    |May  3, 2019|        Aug 12, 2024|<version>, std::assume_aligned(), bit operations  |
|GCC 8.3    |Feb 22, 2019|        May  3, 2024|                                                  |
|GCC 8.2    |Jul 26, 2018|        Feb 22, 2024|std::endian                                       |
|GCC 7.3    |Jan 25, 2018|        Jul 26, 2023|                                                  |
|GCC 7.2    |Aug 14, 2017|        Jan 25, 2023|                                                  |
|GCC 7.1    |May  2, 2017|        Aug 14, 2023|std::optional                                     |
|GCC 6.3    |Dec 21, 2016|          Deprecated|                                                  |

|MSVC version      |Release date|max deprecation date|Adds support for                                    |
|------------------|-----------:|-------------------:|----------------------------------------------------|
|MSVC 17.4.x       |Nov 15, 2022|             Current|<stacktrace>                                        |
|MSVC 17.3.x       |Aug  9, 2022|        Nov 15, 2027|<expected>                                          |
|MSVC 17.2.x       |May 10, 2022|        Aug  9, 2027|deduced this, std::move_only_function, unreachable()|
|MSVC 17.1.x       |Feb 15, 2022|        May 10, 2027|byteswap()                                          |
|MSVC 17.0.x       |Nov  8, 2021|        Feb 15, 2027|                                                    |
|MSVC 16.11.x      |Aug 10, 2021|        Nov  8, 2026|                                                    |
|MSVC 16.10.x      |May 25, 2021|        Aug 10, 2026|                                                    |
|MSVC 16.9.x       |Mar  2, 2021|        May 25, 2026|                                                    |
|MSVC 16.8.x       |Nov 10, 2020|        Mar  2, 2026|modules, coroutines, ranges                         |
|MSVC 16.7.x       |Aug  5, 2020|        Nov 10, 2025|                                                    |
|MSVC 16.6.x       |May 19, 2020|        Aug  5, 2025|                                                    |
|MSVC 16.5.x       |Mar 16, 2020|        May 19, 2025|bit operations                                      |
|MSVC 16.4.x       |Dec  3, 2019|        Mar 16, 2025|                                                    |
|MSVC 16.3.x       |Sep 23, 2019|        Dec  3, 2024|concepts                                            |
|MSVC 16.2.x       |Jul 24, 2019|        Sep 23, 2024|std::endian, <version>                              |
|MSVC 16.1.x       |May 21, 2019|        Jul 24, 2024|std::shift_*                                        |
|MSVC 16.0.x       |Apr  2, 2019|        May 21, 2024|                                                    |
|MSVC 15.9.x       |Nov 13, 2018|        Apr  2, 2024|                                                    |
|MSVC 15.8.x       |Aug 14, 2018|        Nov 13, 2023|                                                    |
|MSVC 15.7.x       |May  7, 2018|        Aug 14, 2023|                                                    |
|MSVC 15.6.x       |Mar  5, 2018|        May  7, 2023|                                                    |
|MSVC 15.5.x       |Dec  4, 2017|        Mar  5, 2023|                                                    |
|MSVC 15.4.x       |Oct  9, 2017|          Deprecated|                                                    |

|Windows version|Release date|max deprecation date|
|---------------|-----------:|-------------------:|
|Windows 11     |Oct  5, 2021|             Current|
|Windows 10     |Jul 29, 2015|        Oct  5, 2026|
|Windows 8.1    |Oct 17, 2013|          Deprecated|
