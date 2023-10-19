#pragma once

class bad_function_call {};

template <typename F>
class function;

template <typename R, typename... Args>
class function<R(Args...)> {
public:
  function() noexcept;

  template <typename F>
  function(F func);

  function(const function& other);
  function(function&& other) noexcept;

  function& operator=(const function& other);
  function& operator=(function&& other) noexcept;

  ~function();

  explicit operator bool() const noexcept;

  R operator()(Args... args) const;

  template <typename T>
  T* target() noexcept;

  template <typename T>
  const T* target() const noexcept;
};
