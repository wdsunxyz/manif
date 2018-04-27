#ifndef _MANIF_MANIF_SO3TANGENT_BASE_H_
#define _MANIF_MANIF_SO3TANGENT_BASE_H_

#include "manif/impl/so3/SO3_properties.h"
#include "manif/impl/tangent_base.h"

namespace manif
{

///////////////
///         ///
/// Tangent ///
///         ///
///////////////

template <typename _Derived>
struct SO3TangentBase : TangentBase<_Derived>
{
private:

  using Base = TangentBase<_Derived>;
  using Type = SO3TangentBase<_Derived>;

public:

  static constexpr int Dim = internal::ManifoldProperties<Type>::Dim;
  static constexpr int DoF = internal::ManifoldProperties<Type>::DoF;
  static constexpr int N   = internal::ManifoldProperties<Type>::N;

  using Scalar = typename Base::Scalar;

  using Manifold = typename Base::Manifold;
  using Tangent  = typename Base::Tangent;

  using Jacobian = typename Base::Jacobian;

  using TangentDataType  = typename Base::TangentDataType;

  using Base::data;

  /// Tangent common API

  void zero();
  void random();
  Manifold retract() const;

  /// with Jacs

  void retract(Manifold& m, Jacobian& J_m_t) const;

  /// SO3Tangent specific API
};

template <typename _Derived>
void SO3TangentBase<_Derived>::zero()
{
  data()->setZero();
}

template <typename _Derived>
void SO3TangentBase<_Derived>::random()
{
  data()->setRandom();
}

template <typename _Derived>
typename SO3TangentBase<_Derived>::Manifold
SO3TangentBase<_Derived>::retract() const
{
  MANIF_NOT_IMPLEMENTED_YET
  return Manifold();
}

/// with Jacs

template <typename _Derived>
void SO3TangentBase<_Derived>::retract(
    Manifold& m, Jacobian& J_m_t) const
{
  MANIF_NOT_IMPLEMENTED_YET
}

} /* namespace manif */

#endif /* _MANIF_MANIF_SO3TANGENT_BASE_H_ */