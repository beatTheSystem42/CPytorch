#pragma once

// @generated by tools/codegen/gen.py from NativeMetaFunctions.h

#include <ATen/TensorMeta.h>
#include <ATen/TensorIterator.h>

namespace at {

namespace meta {

struct TORCH_API structured_sgn : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_acos : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_add_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha);
};
struct TORCH_API structured_addmv : public at::impl::MetaBase {
    void meta(const at::Tensor & self, const at::Tensor & mat, const at::Tensor & vec, const at::Scalar & beta, const at::Scalar & alpha);
};
struct TORCH_API structured_all_dim : public at::impl::MetaBase {
    void meta(const at::Tensor & self, int64_t dim, bool keepdim);
};
struct TORCH_API structured_any_dim : public at::impl::MetaBase {
    void meta(const at::Tensor & self, int64_t dim, bool keepdim);
};
struct TORCH_API structured_argmax : public at::impl::MetaBase {
    void meta(const at::Tensor & self, c10::optional<int64_t> dim, bool keepdim);
};
struct TORCH_API structured_argmin : public at::impl::MetaBase {
    void meta(const at::Tensor & self, c10::optional<int64_t> dim, bool keepdim);
};
struct TORCH_API structured_acosh : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_asinh : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_atanh : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_asin : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_atan : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_bitwise_not : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_copysign_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_ceil : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_clamp : public TensorIteratorBase {
    void meta(const at::Tensor & self, at::OptionalScalarRef min, at::OptionalScalarRef max);
};
struct TORCH_API structured_cos : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_cosh : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_div_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_div_Tensor_mode : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other, c10::optional<c10::string_view> rounding_mode);
};
struct TORCH_API structured_erf : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_erfc : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_exp : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_exp2 : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_expm1 : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_floor : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_frac : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_gcd : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_lcm : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_isin_Tensor_Tensor : public at::impl::MetaBase {
    void meta(const at::Tensor & elements, const at::Tensor & test_elements, bool assume_unique, bool invert);
};
struct TORCH_API structured_isin_Tensor_Scalar : public at::impl::MetaBase {
    void meta(const at::Tensor & elements, const at::Scalar & test_element, bool assume_unique, bool invert);
};
struct TORCH_API structured_isin_Scalar_Tensor : public at::impl::MetaBase {
    void meta(const at::Scalar & element, const at::Tensor & test_elements, bool assume_unique, bool invert);
};
struct TORCH_API structured_log : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_log10 : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_log1p : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_log2 : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_logaddexp : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_logaddexp2 : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_xlogy_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_mm : public at::impl::MetaBase {
    void meta(const at::Tensor & self, const at::Tensor & mat2);
};
struct TORCH_API structured_mul_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_reciprocal : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_neg : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_round : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_gelu : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_gelu_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad, const at::Tensor & self);
};
struct TORCH_API structured_hardshrink : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & lambd);
};
struct TORCH_API structured_hardshrink_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_out, const at::Tensor & self, const at::Scalar & lambd);
};
struct TORCH_API structured_rsqrt : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_silu : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_silu_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self);
};
struct TORCH_API structured_mish : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_sigmoid : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_sin : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_sinc : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_sinh : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_sqrt : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_tan : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_tanh : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_threshold : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & threshold, const at::Scalar & value);
};
struct TORCH_API structured_threshold_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & threshold);
};
struct TORCH_API structured_trunc : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_sub_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha);
};
struct TORCH_API structured_heaviside : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & values);
};
struct TORCH_API structured_addmm : public at::impl::MetaBase {
    void meta(const at::Tensor & self, const at::Tensor & mat1, const at::Tensor & mat2, const at::Scalar & beta, const at::Scalar & alpha);
};
struct TORCH_API structured_scatter_src : public at::impl::MetaBase {
    void meta(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & src);
};
struct TORCH_API structured_scatter_value : public at::impl::MetaBase {
    void meta(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Scalar & value);
};
struct TORCH_API structured_scatter_reduce : public at::impl::MetaBase {
    void meta(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & src, c10::string_view reduce);
};
struct TORCH_API structured_scatter_value_reduce : public at::impl::MetaBase {
    void meta(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Scalar & value, c10::string_view reduce);
};
struct TORCH_API structured_scatter_add : public at::impl::MetaBase {
    void meta(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & src);
};
struct TORCH_API structured_eq_Scalar : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & other);
};
struct TORCH_API structured_eq_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_bitwise_and_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_bitwise_or_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_bitwise_xor_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_bitwise_left_shift_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_bitwise_right_shift_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_digamma : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_ne_Scalar : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & other);
};
struct TORCH_API structured_ne_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_ge_Scalar : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & other);
};
struct TORCH_API structured_ge_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_le_Scalar : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & other);
};
struct TORCH_API structured_le_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_gt_Scalar : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & other);
};
struct TORCH_API structured_gt_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_lt_Scalar : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & other);
};
struct TORCH_API structured_lt_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_lgamma : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_polygamma : public TensorIteratorBase {
    void meta(int64_t n, const at::Tensor & self);
};
struct TORCH_API structured_erfinv : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_i0 : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_sign : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_signbit : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_atan2 : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_fmod_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_hypot : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_igamma : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_igammac : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_nextafter : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_remainder_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_fmin : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_fmax : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_maximum : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_minimum : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_topk : public at::impl::MetaBase {
    void meta(const at::Tensor & self, int64_t k, int64_t dim, bool largest, bool sorted);
};
struct TORCH_API structured_renorm : public at::impl::MetaBase {
    void meta(const at::Tensor & self, const at::Scalar & p, int64_t dim, const at::Scalar & maxnorm);
};
struct TORCH_API structured_pow_Tensor_Tensor : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & exponent);
};
struct TORCH_API structured_pow_Scalar : public at::impl::MetaBase {
    void meta(const at::Scalar & self, const at::Tensor & exponent);
};
struct TORCH_API structured_pow_Tensor_Scalar : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & exponent);
};
struct TORCH_API structured_nll_loss_forward : public at::impl::MetaBase {
    void meta(const at::Tensor & self, const at::Tensor & target, at::OptionalTensorRef weight, int64_t reduction, int64_t ignore_index);
};
struct TORCH_API structured_elu : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & alpha, const at::Scalar & scale, const at::Scalar & input_scale);
};
struct TORCH_API structured_elu_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_output, const at::Scalar & alpha, const at::Scalar & scale, const at::Scalar & input_scale, bool is_result, const at::Tensor & self_or_result);
};
struct TORCH_API structured_hardsigmoid : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_hardsigmoid_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self);
};
struct TORCH_API structured_leaky_relu : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & negative_slope);
};
struct TORCH_API structured_leaky_relu_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & negative_slope, bool self_is_result);
};
struct TORCH_API structured_softplus : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & beta, const at::Scalar & threshold);
};
struct TORCH_API structured_softplus_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & beta, const at::Scalar & threshold, const at::Tensor & output);
};
struct TORCH_API structured_softshrink : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Scalar & lambd);
};
struct TORCH_API structured_softshrink_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & lambd);
};
struct TORCH_API structured_adaptive_max_pool2d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef output_size);
};
struct TORCH_API structured_adaptive_max_pool2d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & indices);
};
struct TORCH_API structured_adaptive_max_pool3d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef output_size);
};
struct TORCH_API structured_adaptive_max_pool3d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & indices);
};
struct TORCH_API structured_avg_pool2d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override);
};
struct TORCH_API structured_avg_pool2d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override);
};
struct TORCH_API structured_avg_pool3d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override);
};
struct TORCH_API structured_avg_pool3d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override);
};
struct TORCH_API structured_fractional_max_pool2d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & random_samples);
};
struct TORCH_API structured_max_pool2d_with_indices : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode);
};
struct TORCH_API structured_max_pool2d_with_indices_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, const at::Tensor & indices);
};
struct TORCH_API structured_reflection_pad1d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef padding);
};
struct TORCH_API structured_reflection_pad1d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding);
};
struct TORCH_API structured_reflection_pad3d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef padding);
};
struct TORCH_API structured_reflection_pad3d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding);
};
struct TORCH_API structured_replication_pad1d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef padding);
};
struct TORCH_API structured_replication_pad1d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding);
};
struct TORCH_API structured_replication_pad2d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef padding);
};
struct TORCH_API structured_replication_pad3d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef padding);
};
struct TORCH_API structured_upsample_linear1d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales);
};
struct TORCH_API structured_upsample_linear1d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales);
};
struct TORCH_API structured_upsample_bilinear2d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w);
};
struct TORCH_API structured_upsample_bilinear2d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w);
};
struct TORCH_API structured_upsample_bicubic2d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w);
};
struct TORCH_API structured_upsample_bicubic2d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w);
};
struct TORCH_API structured_upsample_trilinear3d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_d, c10::optional<double> scales_h, c10::optional<double> scales_w);
};
struct TORCH_API structured_upsample_trilinear3d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales_d, c10::optional<double> scales_h, c10::optional<double> scales_w);
};
struct TORCH_API structured_upsample_nearest1d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales);
};
struct TORCH_API structured_upsample_nearest1d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, c10::optional<double> scales);
};
struct TORCH_API structured_upsample_nearest2d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales_h, c10::optional<double> scales_w);
};
struct TORCH_API structured_upsample_nearest2d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, c10::optional<double> scales_h, c10::optional<double> scales_w);
};
struct TORCH_API structured_upsample_nearest3d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales_d, c10::optional<double> scales_h, c10::optional<double> scales_w);
};
struct TORCH_API structured_upsample_nearest3d_backward : public at::impl::MetaBase {
    void meta(const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, c10::optional<double> scales_d, c10::optional<double> scales_h, c10::optional<double> scales_w);
};
struct TORCH_API structured_sigmoid_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & output);
};
struct TORCH_API structured_logit_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & self, c10::optional<double> eps);
};
struct TORCH_API structured_tanh_backward : public TensorIteratorBase {
    void meta(const at::Tensor & grad_output, const at::Tensor & output);
};
struct TORCH_API structured_slow_conv_transpose2d : public at::impl::MetaBase {
    void meta(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::OptionalTensorRef bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef dilation);
};
struct TORCH_API structured_isposinf : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_isneginf : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_special_entr : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_special_ndtri : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_special_erfcx : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_special_xlog1py : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_special_zeta : public TensorIteratorBase {
    void meta(const at::Tensor & self, const at::Tensor & other);
};
struct TORCH_API structured_special_i0e : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_special_i1 : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};
struct TORCH_API structured_special_i1e : public TensorIteratorBase {
    void meta(const at::Tensor & self);
};

} // namespace meta
} // namespace at