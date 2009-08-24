

template <typename T>
inline const T& Max (const T& a, const T& b) {
  return a > b ? a : b;
}

template <typename RT, typename T1, typename T2>
inline RT MaxRT (const T1& a, const T2& b) {
  return Max<RT>(a, b);
}

template <typename T1, typename T2>
inline T1 Max2 (const T1& a, const T2& b) {
  return Max<T1>(a, b);
}
