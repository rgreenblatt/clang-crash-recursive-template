template <char First, char... Rest> struct Recursive {
  using next = typename Recursive<Rest...>::type;
  using type = notdefined<next::anything>;
};
