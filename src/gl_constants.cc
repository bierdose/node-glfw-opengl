#include "gl.h"

namespace nodeGlfwOpengl {

void InitGlConstants(Local<Object> exports) {
	EXPORT_CONSTANT(GL_DEPTH_BUFFER_BIT)
	EXPORT_CONSTANT(GL_STENCIL_BUFFER_BIT)
	EXPORT_CONSTANT(GL_COLOR_BUFFER_BIT)
	EXPORT_CONSTANT(GL_FALSE)
	EXPORT_CONSTANT(GL_TRUE)
	EXPORT_CONSTANT(GL_POINTS)
	EXPORT_CONSTANT(GL_LINES)
	EXPORT_CONSTANT(GL_LINE_LOOP)
	EXPORT_CONSTANT(GL_LINE_STRIP)
	EXPORT_CONSTANT(GL_TRIANGLES)
	EXPORT_CONSTANT(GL_TRIANGLE_STRIP)
	EXPORT_CONSTANT(GL_TRIANGLE_FAN)
	EXPORT_CONSTANT(GL_NEVER)
	EXPORT_CONSTANT(GL_LESS)
	EXPORT_CONSTANT(GL_EQUAL)
	EXPORT_CONSTANT(GL_LEQUAL)
	EXPORT_CONSTANT(GL_GREATER)
	EXPORT_CONSTANT(GL_NOTEQUAL)
	EXPORT_CONSTANT(GL_GEQUAL)
	EXPORT_CONSTANT(GL_ALWAYS)
	EXPORT_CONSTANT(GL_ZERO)
	EXPORT_CONSTANT(GL_ONE)
	EXPORT_CONSTANT(GL_SRC_COLOR)
	EXPORT_CONSTANT(GL_ONE_MINUS_SRC_COLOR)
	EXPORT_CONSTANT(GL_SRC_ALPHA)
	EXPORT_CONSTANT(GL_ONE_MINUS_SRC_ALPHA)
	EXPORT_CONSTANT(GL_DST_ALPHA)
	EXPORT_CONSTANT(GL_ONE_MINUS_DST_ALPHA)
	EXPORT_CONSTANT(GL_DST_COLOR)
	EXPORT_CONSTANT(GL_ONE_MINUS_DST_COLOR)
	EXPORT_CONSTANT(GL_SRC_ALPHA_SATURATE)
	EXPORT_CONSTANT(GL_NONE)
	EXPORT_CONSTANT(GL_FRONT_LEFT)
	EXPORT_CONSTANT(GL_FRONT_RIGHT)
	EXPORT_CONSTANT(GL_BACK_LEFT)
	EXPORT_CONSTANT(GL_BACK_RIGHT)
	EXPORT_CONSTANT(GL_FRONT)
	EXPORT_CONSTANT(GL_BACK)
	EXPORT_CONSTANT(GL_LEFT)
	EXPORT_CONSTANT(GL_RIGHT)
	EXPORT_CONSTANT(GL_FRONT_AND_BACK)
	EXPORT_CONSTANT(GL_NO_ERROR)
	EXPORT_CONSTANT(GL_INVALID_ENUM)
	EXPORT_CONSTANT(GL_INVALID_VALUE)
	EXPORT_CONSTANT(GL_INVALID_OPERATION)
	EXPORT_CONSTANT(GL_OUT_OF_MEMORY)
	EXPORT_CONSTANT(GL_CW)
	EXPORT_CONSTANT(GL_CCW)
	EXPORT_CONSTANT(GL_POINT_SIZE)
	EXPORT_CONSTANT(GL_POINT_SIZE_RANGE)
	EXPORT_CONSTANT(GL_POINT_SIZE_GRANULARITY)
	EXPORT_CONSTANT(GL_LINE_SMOOTH)
	EXPORT_CONSTANT(GL_LINE_WIDTH)
	EXPORT_CONSTANT(GL_LINE_WIDTH_RANGE)
	EXPORT_CONSTANT(GL_LINE_WIDTH_GRANULARITY)
	EXPORT_CONSTANT(GL_POLYGON_MODE)
	EXPORT_CONSTANT(GL_POLYGON_SMOOTH)
	EXPORT_CONSTANT(GL_CULL_FACE)
	EXPORT_CONSTANT(GL_CULL_FACE_MODE)
	EXPORT_CONSTANT(GL_FRONT_FACE)
	EXPORT_CONSTANT(GL_DEPTH_RANGE)
	EXPORT_CONSTANT(GL_DEPTH_TEST)
	EXPORT_CONSTANT(GL_DEPTH_WRITEMASK)
	EXPORT_CONSTANT(GL_DEPTH_CLEAR_VALUE)
	EXPORT_CONSTANT(GL_DEPTH_FUNC)
	EXPORT_CONSTANT(GL_STENCIL_TEST)
	EXPORT_CONSTANT(GL_STENCIL_CLEAR_VALUE)
	EXPORT_CONSTANT(GL_STENCIL_FUNC)
	EXPORT_CONSTANT(GL_STENCIL_VALUE_MASK)
	EXPORT_CONSTANT(GL_STENCIL_FAIL)
	EXPORT_CONSTANT(GL_STENCIL_PASS_DEPTH_FAIL)
	EXPORT_CONSTANT(GL_STENCIL_PASS_DEPTH_PASS)
	EXPORT_CONSTANT(GL_STENCIL_REF)
	EXPORT_CONSTANT(GL_STENCIL_WRITEMASK)
	EXPORT_CONSTANT(GL_VIEWPORT)
	EXPORT_CONSTANT(GL_DITHER)
	EXPORT_CONSTANT(GL_BLEND_DST)
	EXPORT_CONSTANT(GL_BLEND_SRC)
	EXPORT_CONSTANT(GL_BLEND)
	EXPORT_CONSTANT(GL_LOGIC_OP_MODE)
	EXPORT_CONSTANT(GL_DRAW_BUFFER)
	EXPORT_CONSTANT(GL_READ_BUFFER)
	EXPORT_CONSTANT(GL_SCISSOR_BOX)
	EXPORT_CONSTANT(GL_SCISSOR_TEST)
	EXPORT_CONSTANT(GL_COLOR_CLEAR_VALUE)
	EXPORT_CONSTANT(GL_COLOR_WRITEMASK)
	EXPORT_CONSTANT(GL_DOUBLEBUFFER)
	EXPORT_CONSTANT(GL_STEREO)
	EXPORT_CONSTANT(GL_LINE_SMOOTH_HINT)
	EXPORT_CONSTANT(GL_POLYGON_SMOOTH_HINT)
	EXPORT_CONSTANT(GL_UNPACK_SWAP_BYTES)
	EXPORT_CONSTANT(GL_UNPACK_LSB_FIRST)
	EXPORT_CONSTANT(GL_UNPACK_ROW_LENGTH)
	EXPORT_CONSTANT(GL_UNPACK_SKIP_ROWS)
	EXPORT_CONSTANT(GL_UNPACK_SKIP_PIXELS)
	EXPORT_CONSTANT(GL_UNPACK_ALIGNMENT)
	EXPORT_CONSTANT(GL_PACK_SWAP_BYTES)
	EXPORT_CONSTANT(GL_PACK_LSB_FIRST)
	EXPORT_CONSTANT(GL_PACK_ROW_LENGTH)
	EXPORT_CONSTANT(GL_PACK_SKIP_ROWS)
	EXPORT_CONSTANT(GL_PACK_SKIP_PIXELS)
	EXPORT_CONSTANT(GL_PACK_ALIGNMENT)
	EXPORT_CONSTANT(GL_MAX_TEXTURE_SIZE)
	EXPORT_CONSTANT(GL_MAX_VIEWPORT_DIMS)
	EXPORT_CONSTANT(GL_SUBPIXEL_BITS)
	EXPORT_CONSTANT(GL_TEXTURE_1D)
	EXPORT_CONSTANT(GL_TEXTURE_2D)
	EXPORT_CONSTANT(GL_TEXTURE_WIDTH)
	EXPORT_CONSTANT(GL_TEXTURE_HEIGHT)
	EXPORT_CONSTANT(GL_TEXTURE_BORDER_COLOR)
	EXPORT_CONSTANT(GL_DONT_CARE)
	EXPORT_CONSTANT(GL_FASTEST)
	EXPORT_CONSTANT(GL_NICEST)
	EXPORT_CONSTANT(GL_BYTE)
	EXPORT_CONSTANT(GL_UNSIGNED_BYTE)
	EXPORT_CONSTANT(GL_SHORT)
	EXPORT_CONSTANT(GL_UNSIGNED_SHORT)
	EXPORT_CONSTANT(GL_INT)
	EXPORT_CONSTANT(GL_UNSIGNED_INT)
	EXPORT_CONSTANT(GL_FLOAT)
	EXPORT_CONSTANT(GL_CLEAR)
	EXPORT_CONSTANT(GL_AND)
	EXPORT_CONSTANT(GL_AND_REVERSE)
	EXPORT_CONSTANT(GL_COPY)
	EXPORT_CONSTANT(GL_AND_INVERTED)
	EXPORT_CONSTANT(GL_NOOP)
	EXPORT_CONSTANT(GL_XOR)
	EXPORT_CONSTANT(GL_OR)
	EXPORT_CONSTANT(GL_NOR)
	EXPORT_CONSTANT(GL_EQUIV)
	EXPORT_CONSTANT(GL_INVERT)
	EXPORT_CONSTANT(GL_OR_REVERSE)
	EXPORT_CONSTANT(GL_COPY_INVERTED)
	EXPORT_CONSTANT(GL_OR_INVERTED)
	EXPORT_CONSTANT(GL_NAND)
	EXPORT_CONSTANT(GL_SET)
	EXPORT_CONSTANT(GL_TEXTURE)
	EXPORT_CONSTANT(GL_COLOR)
	EXPORT_CONSTANT(GL_DEPTH)
	EXPORT_CONSTANT(GL_STENCIL)
	EXPORT_CONSTANT(GL_STENCIL_INDEX)
	EXPORT_CONSTANT(GL_DEPTH_COMPONENT)
	EXPORT_CONSTANT(GL_RED)
	EXPORT_CONSTANT(GL_GREEN)
	EXPORT_CONSTANT(GL_BLUE)
	EXPORT_CONSTANT(GL_ALPHA)
	EXPORT_CONSTANT(GL_RGB)
	EXPORT_CONSTANT(GL_RGBA)
	EXPORT_CONSTANT(GL_POINT)
	EXPORT_CONSTANT(GL_LINE)
	EXPORT_CONSTANT(GL_FILL)
	EXPORT_CONSTANT(GL_KEEP)
	EXPORT_CONSTANT(GL_REPLACE)
	EXPORT_CONSTANT(GL_INCR)
	EXPORT_CONSTANT(GL_DECR)
	EXPORT_CONSTANT(GL_VENDOR)
	EXPORT_CONSTANT(GL_RENDERER)
	EXPORT_CONSTANT(GL_VERSION)
	EXPORT_CONSTANT(GL_EXTENSIONS)
	EXPORT_CONSTANT(GL_NEAREST)
	EXPORT_CONSTANT(GL_LINEAR)
	EXPORT_CONSTANT(GL_NEAREST_MIPMAP_NEAREST)
	EXPORT_CONSTANT(GL_LINEAR_MIPMAP_NEAREST)
	EXPORT_CONSTANT(GL_NEAREST_MIPMAP_LINEAR)
	EXPORT_CONSTANT(GL_LINEAR_MIPMAP_LINEAR)
	EXPORT_CONSTANT(GL_TEXTURE_MAG_FILTER)
	EXPORT_CONSTANT(GL_TEXTURE_MIN_FILTER)
	EXPORT_CONSTANT(GL_TEXTURE_WRAP_S)
	EXPORT_CONSTANT(GL_TEXTURE_WRAP_T)
	EXPORT_CONSTANT(GL_REPEAT)
	EXPORT_CONSTANT(GL_COLOR_LOGIC_OP)
	EXPORT_CONSTANT(GL_POLYGON_OFFSET_UNITS)
	EXPORT_CONSTANT(GL_POLYGON_OFFSET_POINT)
	EXPORT_CONSTANT(GL_POLYGON_OFFSET_LINE)
	EXPORT_CONSTANT(GL_POLYGON_OFFSET_FILL)
	EXPORT_CONSTANT(GL_POLYGON_OFFSET_FACTOR)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_1D)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_2D)
	EXPORT_CONSTANT(GL_TEXTURE_INTERNAL_FORMAT)
	EXPORT_CONSTANT(GL_TEXTURE_RED_SIZE)
	EXPORT_CONSTANT(GL_TEXTURE_GREEN_SIZE)
	EXPORT_CONSTANT(GL_TEXTURE_BLUE_SIZE)
	EXPORT_CONSTANT(GL_TEXTURE_ALPHA_SIZE)
	EXPORT_CONSTANT(GL_DOUBLE)
	EXPORT_CONSTANT(GL_PROXY_TEXTURE_1D)
	EXPORT_CONSTANT(GL_PROXY_TEXTURE_2D)
	EXPORT_CONSTANT(GL_R3_G3_B2)
	EXPORT_CONSTANT(GL_RGB4)
	EXPORT_CONSTANT(GL_RGB5)
	EXPORT_CONSTANT(GL_RGB8)
	EXPORT_CONSTANT(GL_RGB10)
	EXPORT_CONSTANT(GL_RGB12)
	EXPORT_CONSTANT(GL_RGB16)
	EXPORT_CONSTANT(GL_RGBA2)
	EXPORT_CONSTANT(GL_RGBA4)
	EXPORT_CONSTANT(GL_RGB5_A1)
	EXPORT_CONSTANT(GL_RGBA8)
	EXPORT_CONSTANT(GL_RGB10_A2)
	EXPORT_CONSTANT(GL_RGBA12)
	EXPORT_CONSTANT(GL_RGBA16)
	EXPORT_CONSTANT(GL_UNSIGNED_BYTE_3_3_2)
	EXPORT_CONSTANT(GL_UNSIGNED_SHORT_4_4_4_4)
	EXPORT_CONSTANT(GL_UNSIGNED_SHORT_5_5_5_1)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_8_8_8_8)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_10_10_10_2)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_3D)
	EXPORT_CONSTANT(GL_PACK_SKIP_IMAGES)
	EXPORT_CONSTANT(GL_PACK_IMAGE_HEIGHT)
	EXPORT_CONSTANT(GL_UNPACK_SKIP_IMAGES)
	EXPORT_CONSTANT(GL_UNPACK_IMAGE_HEIGHT)
	EXPORT_CONSTANT(GL_TEXTURE_3D)
	EXPORT_CONSTANT(GL_PROXY_TEXTURE_3D)
	EXPORT_CONSTANT(GL_TEXTURE_DEPTH)
	EXPORT_CONSTANT(GL_TEXTURE_WRAP_R)
	EXPORT_CONSTANT(GL_MAX_3D_TEXTURE_SIZE)
	EXPORT_CONSTANT(GL_UNSIGNED_BYTE_2_3_3_REV)
	EXPORT_CONSTANT(GL_UNSIGNED_SHORT_5_6_5)
	EXPORT_CONSTANT(GL_UNSIGNED_SHORT_5_6_5_REV)
	EXPORT_CONSTANT(GL_UNSIGNED_SHORT_4_4_4_4_REV)
	EXPORT_CONSTANT(GL_UNSIGNED_SHORT_1_5_5_5_REV)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_8_8_8_8_REV)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_2_10_10_10_REV)
	EXPORT_CONSTANT(GL_BGR)
	EXPORT_CONSTANT(GL_BGRA)
	EXPORT_CONSTANT(GL_MAX_ELEMENTS_VERTICES)
	EXPORT_CONSTANT(GL_MAX_ELEMENTS_INDICES)
	EXPORT_CONSTANT(GL_CLAMP_TO_EDGE)
	EXPORT_CONSTANT(GL_TEXTURE_MIN_LOD)
	EXPORT_CONSTANT(GL_TEXTURE_MAX_LOD)
	EXPORT_CONSTANT(GL_TEXTURE_BASE_LEVEL)
	EXPORT_CONSTANT(GL_TEXTURE_MAX_LEVEL)
	EXPORT_CONSTANT(GL_SMOOTH_POINT_SIZE_RANGE)
	EXPORT_CONSTANT(GL_SMOOTH_POINT_SIZE_GRANULARITY)
	EXPORT_CONSTANT(GL_SMOOTH_LINE_WIDTH_RANGE)
	EXPORT_CONSTANT(GL_SMOOTH_LINE_WIDTH_GRANULARITY)
	EXPORT_CONSTANT(GL_ALIASED_LINE_WIDTH_RANGE)
	EXPORT_CONSTANT(GL_TEXTURE0)
	EXPORT_CONSTANT(GL_TEXTURE1)
	EXPORT_CONSTANT(GL_TEXTURE2)
	EXPORT_CONSTANT(GL_TEXTURE3)
	EXPORT_CONSTANT(GL_TEXTURE4)
	EXPORT_CONSTANT(GL_TEXTURE5)
	EXPORT_CONSTANT(GL_TEXTURE6)
	EXPORT_CONSTANT(GL_TEXTURE7)
	EXPORT_CONSTANT(GL_TEXTURE8)
	EXPORT_CONSTANT(GL_TEXTURE9)
	EXPORT_CONSTANT(GL_TEXTURE10)
	EXPORT_CONSTANT(GL_TEXTURE11)
	EXPORT_CONSTANT(GL_TEXTURE12)
	EXPORT_CONSTANT(GL_TEXTURE13)
	EXPORT_CONSTANT(GL_TEXTURE14)
	EXPORT_CONSTANT(GL_TEXTURE15)
	EXPORT_CONSTANT(GL_TEXTURE16)
	EXPORT_CONSTANT(GL_TEXTURE17)
	EXPORT_CONSTANT(GL_TEXTURE18)
	EXPORT_CONSTANT(GL_TEXTURE19)
	EXPORT_CONSTANT(GL_TEXTURE20)
	EXPORT_CONSTANT(GL_TEXTURE21)
	EXPORT_CONSTANT(GL_TEXTURE22)
	EXPORT_CONSTANT(GL_TEXTURE23)
	EXPORT_CONSTANT(GL_TEXTURE24)
	EXPORT_CONSTANT(GL_TEXTURE25)
	EXPORT_CONSTANT(GL_TEXTURE26)
	EXPORT_CONSTANT(GL_TEXTURE27)
	EXPORT_CONSTANT(GL_TEXTURE28)
	EXPORT_CONSTANT(GL_TEXTURE29)
	EXPORT_CONSTANT(GL_TEXTURE30)
	EXPORT_CONSTANT(GL_TEXTURE31)
	EXPORT_CONSTANT(GL_ACTIVE_TEXTURE)
	EXPORT_CONSTANT(GL_MULTISAMPLE)
	EXPORT_CONSTANT(GL_SAMPLE_ALPHA_TO_COVERAGE)
	EXPORT_CONSTANT(GL_SAMPLE_ALPHA_TO_ONE)
	EXPORT_CONSTANT(GL_SAMPLE_COVERAGE)
	EXPORT_CONSTANT(GL_SAMPLE_BUFFERS)
	EXPORT_CONSTANT(GL_SAMPLES)
	EXPORT_CONSTANT(GL_SAMPLE_COVERAGE_VALUE)
	EXPORT_CONSTANT(GL_SAMPLE_COVERAGE_INVERT)
	EXPORT_CONSTANT(GL_TEXTURE_CUBE_MAP)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_CUBE_MAP)
	EXPORT_CONSTANT(GL_TEXTURE_CUBE_MAP_POSITIVE_X)
	EXPORT_CONSTANT(GL_TEXTURE_CUBE_MAP_NEGATIVE_X)
	EXPORT_CONSTANT(GL_TEXTURE_CUBE_MAP_POSITIVE_Y)
	EXPORT_CONSTANT(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y)
	EXPORT_CONSTANT(GL_TEXTURE_CUBE_MAP_POSITIVE_Z)
	EXPORT_CONSTANT(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z)
	EXPORT_CONSTANT(GL_PROXY_TEXTURE_CUBE_MAP)
	EXPORT_CONSTANT(GL_MAX_CUBE_MAP_TEXTURE_SIZE)
	EXPORT_CONSTANT(GL_COMPRESSED_RGB)
	EXPORT_CONSTANT(GL_COMPRESSED_RGBA)
	EXPORT_CONSTANT(GL_TEXTURE_COMPRESSION_HINT)
	EXPORT_CONSTANT(GL_TEXTURE_COMPRESSED_IMAGE_SIZE)
	EXPORT_CONSTANT(GL_TEXTURE_COMPRESSED)
	EXPORT_CONSTANT(GL_NUM_COMPRESSED_TEXTURE_FORMATS)
	EXPORT_CONSTANT(GL_COMPRESSED_TEXTURE_FORMATS)
	EXPORT_CONSTANT(GL_CLAMP_TO_BORDER)
	EXPORT_CONSTANT(GL_BLEND_DST_RGB)
	EXPORT_CONSTANT(GL_BLEND_SRC_RGB)
	EXPORT_CONSTANT(GL_BLEND_DST_ALPHA)
	EXPORT_CONSTANT(GL_BLEND_SRC_ALPHA)
	EXPORT_CONSTANT(GL_POINT_FADE_THRESHOLD_SIZE)
	EXPORT_CONSTANT(GL_DEPTH_COMPONENT16)
	EXPORT_CONSTANT(GL_DEPTH_COMPONENT24)
	EXPORT_CONSTANT(GL_DEPTH_COMPONENT32)
	EXPORT_CONSTANT(GL_MIRRORED_REPEAT)
	EXPORT_CONSTANT(GL_MAX_TEXTURE_LOD_BIAS)
	EXPORT_CONSTANT(GL_TEXTURE_LOD_BIAS)
	EXPORT_CONSTANT(GL_INCR_WRAP)
	EXPORT_CONSTANT(GL_DECR_WRAP)
	EXPORT_CONSTANT(GL_TEXTURE_DEPTH_SIZE)
	EXPORT_CONSTANT(GL_TEXTURE_COMPARE_MODE)
	EXPORT_CONSTANT(GL_TEXTURE_COMPARE_FUNC)
	EXPORT_CONSTANT(GL_BLEND_COLOR)
	EXPORT_CONSTANT(GL_BLEND_EQUATION)
	EXPORT_CONSTANT(GL_CONSTANT_COLOR)
	EXPORT_CONSTANT(GL_ONE_MINUS_CONSTANT_COLOR)
	EXPORT_CONSTANT(GL_CONSTANT_ALPHA)
	EXPORT_CONSTANT(GL_ONE_MINUS_CONSTANT_ALPHA)
	EXPORT_CONSTANT(GL_FUNC_ADD)
	EXPORT_CONSTANT(GL_FUNC_REVERSE_SUBTRACT)
	EXPORT_CONSTANT(GL_FUNC_SUBTRACT)
	EXPORT_CONSTANT(GL_MIN)
	EXPORT_CONSTANT(GL_MAX)
	EXPORT_CONSTANT(GL_BUFFER_SIZE)
	EXPORT_CONSTANT(GL_BUFFER_USAGE)
	EXPORT_CONSTANT(GL_QUERY_COUNTER_BITS)
	EXPORT_CONSTANT(GL_CURRENT_QUERY)
	EXPORT_CONSTANT(GL_QUERY_RESULT)
	EXPORT_CONSTANT(GL_QUERY_RESULT_AVAILABLE)
	EXPORT_CONSTANT(GL_ARRAY_BUFFER)
	EXPORT_CONSTANT(GL_ELEMENT_ARRAY_BUFFER)
	EXPORT_CONSTANT(GL_ARRAY_BUFFER_BINDING)
	EXPORT_CONSTANT(GL_ELEMENT_ARRAY_BUFFER_BINDING)
	EXPORT_CONSTANT(GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING)
	EXPORT_CONSTANT(GL_READ_ONLY)
	EXPORT_CONSTANT(GL_WRITE_ONLY)
	EXPORT_CONSTANT(GL_READ_WRITE)
	EXPORT_CONSTANT(GL_BUFFER_ACCESS)
	EXPORT_CONSTANT(GL_BUFFER_MAPPED)
	EXPORT_CONSTANT(GL_BUFFER_MAP_POINTER)
	EXPORT_CONSTANT(GL_STREAM_DRAW)
	EXPORT_CONSTANT(GL_STREAM_READ)
	EXPORT_CONSTANT(GL_STREAM_COPY)
	EXPORT_CONSTANT(GL_STATIC_DRAW)
	EXPORT_CONSTANT(GL_STATIC_READ)
	EXPORT_CONSTANT(GL_STATIC_COPY)
	EXPORT_CONSTANT(GL_DYNAMIC_DRAW)
	EXPORT_CONSTANT(GL_DYNAMIC_READ)
	EXPORT_CONSTANT(GL_DYNAMIC_COPY)
	EXPORT_CONSTANT(GL_SAMPLES_PASSED)
	EXPORT_CONSTANT(GL_SRC1_ALPHA)
	EXPORT_CONSTANT(GL_BLEND_EQUATION_RGB)
	EXPORT_CONSTANT(GL_VERTEX_ATTRIB_ARRAY_ENABLED)
	EXPORT_CONSTANT(GL_VERTEX_ATTRIB_ARRAY_SIZE)
	EXPORT_CONSTANT(GL_VERTEX_ATTRIB_ARRAY_STRIDE)
	EXPORT_CONSTANT(GL_VERTEX_ATTRIB_ARRAY_TYPE)
	EXPORT_CONSTANT(GL_CURRENT_VERTEX_ATTRIB)
	EXPORT_CONSTANT(GL_VERTEX_PROGRAM_POINT_SIZE)
	EXPORT_CONSTANT(GL_VERTEX_ATTRIB_ARRAY_POINTER)
	EXPORT_CONSTANT(GL_STENCIL_BACK_FUNC)
	EXPORT_CONSTANT(GL_STENCIL_BACK_FAIL)
	EXPORT_CONSTANT(GL_STENCIL_BACK_PASS_DEPTH_FAIL)
	EXPORT_CONSTANT(GL_STENCIL_BACK_PASS_DEPTH_PASS)
	EXPORT_CONSTANT(GL_MAX_DRAW_BUFFERS)
	EXPORT_CONSTANT(GL_DRAW_BUFFER0)
	EXPORT_CONSTANT(GL_DRAW_BUFFER1)
	EXPORT_CONSTANT(GL_DRAW_BUFFER2)
	EXPORT_CONSTANT(GL_DRAW_BUFFER3)
	EXPORT_CONSTANT(GL_DRAW_BUFFER4)
	EXPORT_CONSTANT(GL_DRAW_BUFFER5)
	EXPORT_CONSTANT(GL_DRAW_BUFFER6)
	EXPORT_CONSTANT(GL_DRAW_BUFFER7)
	EXPORT_CONSTANT(GL_DRAW_BUFFER8)
	EXPORT_CONSTANT(GL_DRAW_BUFFER9)
	EXPORT_CONSTANT(GL_DRAW_BUFFER10)
	EXPORT_CONSTANT(GL_DRAW_BUFFER11)
	EXPORT_CONSTANT(GL_DRAW_BUFFER12)
	EXPORT_CONSTANT(GL_DRAW_BUFFER13)
	EXPORT_CONSTANT(GL_DRAW_BUFFER14)
	EXPORT_CONSTANT(GL_DRAW_BUFFER15)
	EXPORT_CONSTANT(GL_BLEND_EQUATION_ALPHA)
	EXPORT_CONSTANT(GL_MAX_VERTEX_ATTRIBS)
	EXPORT_CONSTANT(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED)
	EXPORT_CONSTANT(GL_MAX_TEXTURE_IMAGE_UNITS)
	EXPORT_CONSTANT(GL_FRAGMENT_SHADER)
	EXPORT_CONSTANT(GL_VERTEX_SHADER)
	EXPORT_CONSTANT(GL_MAX_FRAGMENT_UNIFORM_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_VERTEX_UNIFORM_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_VARYING_FLOATS)
	EXPORT_CONSTANT(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS)
	EXPORT_CONSTANT(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS)
	EXPORT_CONSTANT(GL_SHADER_TYPE)
	EXPORT_CONSTANT(GL_FLOAT_VEC2)
	EXPORT_CONSTANT(GL_FLOAT_VEC3)
	EXPORT_CONSTANT(GL_FLOAT_VEC4)
	EXPORT_CONSTANT(GL_INT_VEC2)
	EXPORT_CONSTANT(GL_INT_VEC3)
	EXPORT_CONSTANT(GL_INT_VEC4)
	EXPORT_CONSTANT(GL_BOOL)
	EXPORT_CONSTANT(GL_BOOL_VEC2)
	EXPORT_CONSTANT(GL_BOOL_VEC3)
	EXPORT_CONSTANT(GL_BOOL_VEC4)
	EXPORT_CONSTANT(GL_FLOAT_MAT2)
	EXPORT_CONSTANT(GL_FLOAT_MAT3)
	EXPORT_CONSTANT(GL_FLOAT_MAT4)
	EXPORT_CONSTANT(GL_SAMPLER_1D)
	EXPORT_CONSTANT(GL_SAMPLER_2D)
	EXPORT_CONSTANT(GL_SAMPLER_3D)
	EXPORT_CONSTANT(GL_SAMPLER_CUBE)
	EXPORT_CONSTANT(GL_SAMPLER_1D_SHADOW)
	EXPORT_CONSTANT(GL_SAMPLER_2D_SHADOW)
	EXPORT_CONSTANT(GL_DELETE_STATUS)
	EXPORT_CONSTANT(GL_COMPILE_STATUS)
	EXPORT_CONSTANT(GL_LINK_STATUS)
	EXPORT_CONSTANT(GL_VALIDATE_STATUS)
	EXPORT_CONSTANT(GL_INFO_LOG_LENGTH)
	EXPORT_CONSTANT(GL_ATTACHED_SHADERS)
	EXPORT_CONSTANT(GL_ACTIVE_UNIFORMS)
	EXPORT_CONSTANT(GL_ACTIVE_UNIFORM_MAX_LENGTH)
	EXPORT_CONSTANT(GL_SHADER_SOURCE_LENGTH)
	EXPORT_CONSTANT(GL_ACTIVE_ATTRIBUTES)
	EXPORT_CONSTANT(GL_ACTIVE_ATTRIBUTE_MAX_LENGTH)
	EXPORT_CONSTANT(GL_FRAGMENT_SHADER_DERIVATIVE_HINT)
	EXPORT_CONSTANT(GL_SHADING_LANGUAGE_VERSION)
	EXPORT_CONSTANT(GL_CURRENT_PROGRAM)
	EXPORT_CONSTANT(GL_POINT_SPRITE_COORD_ORIGIN)
	EXPORT_CONSTANT(GL_LOWER_LEFT)
	EXPORT_CONSTANT(GL_UPPER_LEFT)
	EXPORT_CONSTANT(GL_STENCIL_BACK_REF)
	EXPORT_CONSTANT(GL_STENCIL_BACK_VALUE_MASK)
	EXPORT_CONSTANT(GL_STENCIL_BACK_WRITEMASK)
	EXPORT_CONSTANT(GL_PIXEL_PACK_BUFFER)
	EXPORT_CONSTANT(GL_PIXEL_UNPACK_BUFFER)
	EXPORT_CONSTANT(GL_PIXEL_PACK_BUFFER_BINDING)
	EXPORT_CONSTANT(GL_PIXEL_UNPACK_BUFFER_BINDING)
	EXPORT_CONSTANT(GL_FLOAT_MAT2x3)
	EXPORT_CONSTANT(GL_FLOAT_MAT2x4)
	EXPORT_CONSTANT(GL_FLOAT_MAT3x2)
	EXPORT_CONSTANT(GL_FLOAT_MAT3x4)
	EXPORT_CONSTANT(GL_FLOAT_MAT4x2)
	EXPORT_CONSTANT(GL_FLOAT_MAT4x3)
	EXPORT_CONSTANT(GL_SRGB)
	EXPORT_CONSTANT(GL_SRGB8)
	EXPORT_CONSTANT(GL_SRGB_ALPHA)
	EXPORT_CONSTANT(GL_SRGB8_ALPHA8)
	EXPORT_CONSTANT(GL_COMPRESSED_SRGB)
	EXPORT_CONSTANT(GL_COMPRESSED_SRGB_ALPHA)
	EXPORT_CONSTANT(GL_COMPARE_REF_TO_TEXTURE)
	EXPORT_CONSTANT(GL_CLIP_DISTANCE0)
	EXPORT_CONSTANT(GL_CLIP_DISTANCE1)
	EXPORT_CONSTANT(GL_CLIP_DISTANCE2)
	EXPORT_CONSTANT(GL_CLIP_DISTANCE3)
	EXPORT_CONSTANT(GL_CLIP_DISTANCE4)
	EXPORT_CONSTANT(GL_CLIP_DISTANCE5)
	EXPORT_CONSTANT(GL_CLIP_DISTANCE6)
	EXPORT_CONSTANT(GL_CLIP_DISTANCE7)
	EXPORT_CONSTANT(GL_MAX_CLIP_DISTANCES)
	EXPORT_CONSTANT(GL_MAJOR_VERSION)
	EXPORT_CONSTANT(GL_MINOR_VERSION)
	EXPORT_CONSTANT(GL_NUM_EXTENSIONS)
	EXPORT_CONSTANT(GL_CONTEXT_FLAGS)
	EXPORT_CONSTANT(GL_COMPRESSED_RED)
	EXPORT_CONSTANT(GL_COMPRESSED_RG)
	EXPORT_CONSTANT(GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT)
	EXPORT_CONSTANT(GL_RGBA32F)
	EXPORT_CONSTANT(GL_RGB32F)
	EXPORT_CONSTANT(GL_RGBA16F)
	EXPORT_CONSTANT(GL_RGB16F)
	EXPORT_CONSTANT(GL_VERTEX_ATTRIB_ARRAY_INTEGER)
	EXPORT_CONSTANT(GL_MAX_ARRAY_TEXTURE_LAYERS)
	EXPORT_CONSTANT(GL_MIN_PROGRAM_TEXEL_OFFSET)
	EXPORT_CONSTANT(GL_MAX_PROGRAM_TEXEL_OFFSET)
	EXPORT_CONSTANT(GL_CLAMP_READ_COLOR)
	EXPORT_CONSTANT(GL_FIXED_ONLY)
	EXPORT_CONSTANT(GL_MAX_VARYING_COMPONENTS)
	EXPORT_CONSTANT(GL_TEXTURE_1D_ARRAY)
	EXPORT_CONSTANT(GL_PROXY_TEXTURE_1D_ARRAY)
	EXPORT_CONSTANT(GL_TEXTURE_2D_ARRAY)
	EXPORT_CONSTANT(GL_PROXY_TEXTURE_2D_ARRAY)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_1D_ARRAY)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_2D_ARRAY)
	EXPORT_CONSTANT(GL_R11F_G11F_B10F)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_10F_11F_11F_REV)
	EXPORT_CONSTANT(GL_RGB9_E5)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_5_9_9_9_REV)
	EXPORT_CONSTANT(GL_TEXTURE_SHARED_SIZE)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_BUFFER_MODE)
	EXPORT_CONSTANT(GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_VARYINGS)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_BUFFER_START)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_BUFFER_SIZE)
	EXPORT_CONSTANT(GL_PRIMITIVES_GENERATED)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN)
	EXPORT_CONSTANT(GL_RASTERIZER_DISCARD)
	EXPORT_CONSTANT(GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS)
	EXPORT_CONSTANT(GL_INTERLEAVED_ATTRIBS)
	EXPORT_CONSTANT(GL_SEPARATE_ATTRIBS)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_BUFFER)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_BUFFER_BINDING)
	EXPORT_CONSTANT(GL_RGBA32UI)
	EXPORT_CONSTANT(GL_RGB32UI)
	EXPORT_CONSTANT(GL_RGBA16UI)
	EXPORT_CONSTANT(GL_RGB16UI)
	EXPORT_CONSTANT(GL_RGBA8UI)
	EXPORT_CONSTANT(GL_RGB8UI)
	EXPORT_CONSTANT(GL_RGBA32I)
	EXPORT_CONSTANT(GL_RGB32I)
	EXPORT_CONSTANT(GL_RGBA16I)
	EXPORT_CONSTANT(GL_RGB16I)
	EXPORT_CONSTANT(GL_RGBA8I)
	EXPORT_CONSTANT(GL_RGB8I)
	EXPORT_CONSTANT(GL_RED_INTEGER)
	EXPORT_CONSTANT(GL_GREEN_INTEGER)
	EXPORT_CONSTANT(GL_BLUE_INTEGER)
	EXPORT_CONSTANT(GL_RGB_INTEGER)
	EXPORT_CONSTANT(GL_RGBA_INTEGER)
	EXPORT_CONSTANT(GL_BGR_INTEGER)
	EXPORT_CONSTANT(GL_BGRA_INTEGER)
	EXPORT_CONSTANT(GL_SAMPLER_1D_ARRAY)
	EXPORT_CONSTANT(GL_SAMPLER_2D_ARRAY)
	EXPORT_CONSTANT(GL_SAMPLER_1D_ARRAY_SHADOW)
	EXPORT_CONSTANT(GL_SAMPLER_2D_ARRAY_SHADOW)
	EXPORT_CONSTANT(GL_SAMPLER_CUBE_SHADOW)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_VEC2)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_VEC3)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_VEC4)
	EXPORT_CONSTANT(GL_INT_SAMPLER_1D)
	EXPORT_CONSTANT(GL_INT_SAMPLER_2D)
	EXPORT_CONSTANT(GL_INT_SAMPLER_3D)
	EXPORT_CONSTANT(GL_INT_SAMPLER_CUBE)
	EXPORT_CONSTANT(GL_INT_SAMPLER_1D_ARRAY)
	EXPORT_CONSTANT(GL_INT_SAMPLER_2D_ARRAY)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_1D)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_2D)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_3D)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_CUBE)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_1D_ARRAY)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_2D_ARRAY)
	EXPORT_CONSTANT(GL_QUERY_WAIT)
	EXPORT_CONSTANT(GL_QUERY_NO_WAIT)
	EXPORT_CONSTANT(GL_QUERY_BY_REGION_WAIT)
	EXPORT_CONSTANT(GL_QUERY_BY_REGION_NO_WAIT)
	EXPORT_CONSTANT(GL_BUFFER_ACCESS_FLAGS)
	EXPORT_CONSTANT(GL_BUFFER_MAP_LENGTH)
	EXPORT_CONSTANT(GL_BUFFER_MAP_OFFSET)
	EXPORT_CONSTANT(GL_DEPTH_COMPONENT32F)
	EXPORT_CONSTANT(GL_DEPTH32F_STENCIL8)
	EXPORT_CONSTANT(GL_FLOAT_32_UNSIGNED_INT_24_8_REV)
	EXPORT_CONSTANT(GL_INVALID_FRAMEBUFFER_OPERATION)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_DEFAULT)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_UNDEFINED)
	EXPORT_CONSTANT(GL_DEPTH_STENCIL_ATTACHMENT)
	EXPORT_CONSTANT(GL_MAX_RENDERBUFFER_SIZE)
	EXPORT_CONSTANT(GL_DEPTH_STENCIL)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_24_8)
	EXPORT_CONSTANT(GL_DEPTH24_STENCIL8)
	EXPORT_CONSTANT(GL_TEXTURE_STENCIL_SIZE)
	EXPORT_CONSTANT(GL_TEXTURE_RED_TYPE)
	EXPORT_CONSTANT(GL_TEXTURE_GREEN_TYPE)
	EXPORT_CONSTANT(GL_TEXTURE_BLUE_TYPE)
	EXPORT_CONSTANT(GL_TEXTURE_ALPHA_TYPE)
	EXPORT_CONSTANT(GL_TEXTURE_DEPTH_TYPE)
	EXPORT_CONSTANT(GL_UNSIGNED_NORMALIZED)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_BINDING)
	EXPORT_CONSTANT(GL_DRAW_FRAMEBUFFER_BINDING)
	EXPORT_CONSTANT(GL_RENDERBUFFER_BINDING)
	EXPORT_CONSTANT(GL_READ_FRAMEBUFFER)
	EXPORT_CONSTANT(GL_DRAW_FRAMEBUFFER)
	EXPORT_CONSTANT(GL_READ_FRAMEBUFFER_BINDING)
	EXPORT_CONSTANT(GL_RENDERBUFFER_SAMPLES)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_COMPLETE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_UNSUPPORTED)
	EXPORT_CONSTANT(GL_MAX_COLOR_ATTACHMENTS)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT0)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT1)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT2)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT3)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT4)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT5)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT6)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT7)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT8)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT9)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT10)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT11)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT12)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT13)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT14)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT15)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT16)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT17)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT18)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT19)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT20)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT21)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT22)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT23)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT24)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT25)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT26)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT27)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT28)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT29)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT30)
	EXPORT_CONSTANT(GL_COLOR_ATTACHMENT31)
	EXPORT_CONSTANT(GL_DEPTH_ATTACHMENT)
	EXPORT_CONSTANT(GL_STENCIL_ATTACHMENT)
	EXPORT_CONSTANT(GL_FRAMEBUFFER)
	EXPORT_CONSTANT(GL_RENDERBUFFER)
	EXPORT_CONSTANT(GL_RENDERBUFFER_WIDTH)
	EXPORT_CONSTANT(GL_RENDERBUFFER_HEIGHT)
	EXPORT_CONSTANT(GL_RENDERBUFFER_INTERNAL_FORMAT)
	EXPORT_CONSTANT(GL_STENCIL_INDEX1)
	EXPORT_CONSTANT(GL_STENCIL_INDEX4)
	EXPORT_CONSTANT(GL_STENCIL_INDEX8)
	EXPORT_CONSTANT(GL_STENCIL_INDEX16)
	EXPORT_CONSTANT(GL_RENDERBUFFER_RED_SIZE)
	EXPORT_CONSTANT(GL_RENDERBUFFER_GREEN_SIZE)
	EXPORT_CONSTANT(GL_RENDERBUFFER_BLUE_SIZE)
	EXPORT_CONSTANT(GL_RENDERBUFFER_ALPHA_SIZE)
	EXPORT_CONSTANT(GL_RENDERBUFFER_DEPTH_SIZE)
	EXPORT_CONSTANT(GL_RENDERBUFFER_STENCIL_SIZE)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE)
	EXPORT_CONSTANT(GL_MAX_SAMPLES)
	EXPORT_CONSTANT(GL_INDEX)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_SRGB)
	EXPORT_CONSTANT(GL_HALF_FLOAT)
	EXPORT_CONSTANT(GL_MAP_READ_BIT)
	EXPORT_CONSTANT(GL_MAP_WRITE_BIT)
	EXPORT_CONSTANT(GL_MAP_INVALIDATE_RANGE_BIT)
	EXPORT_CONSTANT(GL_MAP_INVALIDATE_BUFFER_BIT)
	EXPORT_CONSTANT(GL_MAP_FLUSH_EXPLICIT_BIT)
	EXPORT_CONSTANT(GL_MAP_UNSYNCHRONIZED_BIT)
	EXPORT_CONSTANT(GL_COMPRESSED_RED_RGTC1)
	EXPORT_CONSTANT(GL_COMPRESSED_SIGNED_RED_RGTC1)
	EXPORT_CONSTANT(GL_COMPRESSED_RG_RGTC2)
	EXPORT_CONSTANT(GL_COMPRESSED_SIGNED_RG_RGTC2)
	EXPORT_CONSTANT(GL_RG)
	EXPORT_CONSTANT(GL_RG_INTEGER)
	EXPORT_CONSTANT(GL_R8)
	EXPORT_CONSTANT(GL_R16)
	EXPORT_CONSTANT(GL_RG8)
	EXPORT_CONSTANT(GL_RG16)
	EXPORT_CONSTANT(GL_R16F)
	EXPORT_CONSTANT(GL_R32F)
	EXPORT_CONSTANT(GL_RG16F)
	EXPORT_CONSTANT(GL_RG32F)
	EXPORT_CONSTANT(GL_R8I)
	EXPORT_CONSTANT(GL_R8UI)
	EXPORT_CONSTANT(GL_R16I)
	EXPORT_CONSTANT(GL_R16UI)
	EXPORT_CONSTANT(GL_R32I)
	EXPORT_CONSTANT(GL_R32UI)
	EXPORT_CONSTANT(GL_RG8I)
	EXPORT_CONSTANT(GL_RG8UI)
	EXPORT_CONSTANT(GL_RG16I)
	EXPORT_CONSTANT(GL_RG16UI)
	EXPORT_CONSTANT(GL_RG32I)
	EXPORT_CONSTANT(GL_RG32UI)
	EXPORT_CONSTANT(GL_VERTEX_ARRAY_BINDING)
	EXPORT_CONSTANT(GL_SAMPLER_2D_RECT)
	EXPORT_CONSTANT(GL_SAMPLER_2D_RECT_SHADOW)
	EXPORT_CONSTANT(GL_SAMPLER_BUFFER)
	EXPORT_CONSTANT(GL_INT_SAMPLER_2D_RECT)
	EXPORT_CONSTANT(GL_INT_SAMPLER_BUFFER)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_2D_RECT)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_BUFFER)
	EXPORT_CONSTANT(GL_TEXTURE_BUFFER)
	EXPORT_CONSTANT(GL_MAX_TEXTURE_BUFFER_SIZE)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_BUFFER)
	EXPORT_CONSTANT(GL_TEXTURE_BUFFER_DATA_STORE_BINDING)
	EXPORT_CONSTANT(GL_TEXTURE_RECTANGLE)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_RECTANGLE)
	EXPORT_CONSTANT(GL_PROXY_TEXTURE_RECTANGLE)
	EXPORT_CONSTANT(GL_MAX_RECTANGLE_TEXTURE_SIZE)
	EXPORT_CONSTANT(GL_R8_SNORM)
	EXPORT_CONSTANT(GL_RG8_SNORM)
	EXPORT_CONSTANT(GL_RGB8_SNORM)
	EXPORT_CONSTANT(GL_RGBA8_SNORM)
	EXPORT_CONSTANT(GL_R16_SNORM)
	EXPORT_CONSTANT(GL_RG16_SNORM)
	EXPORT_CONSTANT(GL_RGB16_SNORM)
	EXPORT_CONSTANT(GL_RGBA16_SNORM)
	EXPORT_CONSTANT(GL_SIGNED_NORMALIZED)
	EXPORT_CONSTANT(GL_PRIMITIVE_RESTART)
	EXPORT_CONSTANT(GL_PRIMITIVE_RESTART_INDEX)
	EXPORT_CONSTANT(GL_COPY_READ_BUFFER)
	EXPORT_CONSTANT(GL_COPY_WRITE_BUFFER)
	EXPORT_CONSTANT(GL_UNIFORM_BUFFER)
	EXPORT_CONSTANT(GL_UNIFORM_BUFFER_BINDING)
	EXPORT_CONSTANT(GL_UNIFORM_BUFFER_START)
	EXPORT_CONSTANT(GL_UNIFORM_BUFFER_SIZE)
	EXPORT_CONSTANT(GL_MAX_VERTEX_UNIFORM_BLOCKS)
	EXPORT_CONSTANT(GL_MAX_GEOMETRY_UNIFORM_BLOCKS)
	EXPORT_CONSTANT(GL_MAX_FRAGMENT_UNIFORM_BLOCKS)
	EXPORT_CONSTANT(GL_MAX_COMBINED_UNIFORM_BLOCKS)
	EXPORT_CONSTANT(GL_MAX_UNIFORM_BUFFER_BINDINGS)
	EXPORT_CONSTANT(GL_MAX_UNIFORM_BLOCK_SIZE)
	EXPORT_CONSTANT(GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS)
	EXPORT_CONSTANT(GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT)
	EXPORT_CONSTANT(GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH)
	EXPORT_CONSTANT(GL_ACTIVE_UNIFORM_BLOCKS)
	EXPORT_CONSTANT(GL_UNIFORM_TYPE)
	EXPORT_CONSTANT(GL_UNIFORM_SIZE)
	EXPORT_CONSTANT(GL_UNIFORM_NAME_LENGTH)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_INDEX)
	EXPORT_CONSTANT(GL_UNIFORM_OFFSET)
	EXPORT_CONSTANT(GL_UNIFORM_ARRAY_STRIDE)
	EXPORT_CONSTANT(GL_UNIFORM_MATRIX_STRIDE)
	EXPORT_CONSTANT(GL_UNIFORM_IS_ROW_MAJOR)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_BINDING)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_DATA_SIZE)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_NAME_LENGTH)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER)
	EXPORT_CONSTANT(GL_INVALID_INDEX)
	EXPORT_CONSTANT(GL_CONTEXT_CORE_PROFILE_BIT)
	EXPORT_CONSTANT(GL_CONTEXT_COMPATIBILITY_PROFILE_BIT)
	EXPORT_CONSTANT(GL_LINES_ADJACENCY)
	EXPORT_CONSTANT(GL_LINE_STRIP_ADJACENCY)
	EXPORT_CONSTANT(GL_TRIANGLES_ADJACENCY)
	EXPORT_CONSTANT(GL_TRIANGLE_STRIP_ADJACENCY)
	EXPORT_CONSTANT(GL_PROGRAM_POINT_SIZE)
	EXPORT_CONSTANT(GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_ATTACHMENT_LAYERED)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS)
	EXPORT_CONSTANT(GL_GEOMETRY_SHADER)
	EXPORT_CONSTANT(GL_GEOMETRY_VERTICES_OUT)
	EXPORT_CONSTANT(GL_GEOMETRY_INPUT_TYPE)
	EXPORT_CONSTANT(GL_GEOMETRY_OUTPUT_TYPE)
	EXPORT_CONSTANT(GL_MAX_GEOMETRY_UNIFORM_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_GEOMETRY_OUTPUT_VERTICES)
	EXPORT_CONSTANT(GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_VERTEX_OUTPUT_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_GEOMETRY_INPUT_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_GEOMETRY_OUTPUT_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_FRAGMENT_INPUT_COMPONENTS)
	EXPORT_CONSTANT(GL_CONTEXT_PROFILE_MASK)
	EXPORT_CONSTANT(GL_DEPTH_CLAMP)
	EXPORT_CONSTANT(GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION)
	EXPORT_CONSTANT(GL_FIRST_VERTEX_CONVENTION)
	EXPORT_CONSTANT(GL_LAST_VERTEX_CONVENTION)
	EXPORT_CONSTANT(GL_PROVOKING_VERTEX)
	EXPORT_CONSTANT(GL_TEXTURE_CUBE_MAP_SEAMLESS)
	EXPORT_CONSTANT(GL_MAX_SERVER_WAIT_TIMEOUT)
	EXPORT_CONSTANT(GL_OBJECT_TYPE)
	EXPORT_CONSTANT(GL_SYNC_CONDITION)
	EXPORT_CONSTANT(GL_SYNC_STATUS)
	EXPORT_CONSTANT(GL_SYNC_FLAGS)
	EXPORT_CONSTANT(GL_SYNC_FENCE)
	EXPORT_CONSTANT(GL_SYNC_GPU_COMMANDS_COMPLETE)
	EXPORT_CONSTANT(GL_UNSIGNALED)
	EXPORT_CONSTANT(GL_SIGNALED)
	EXPORT_CONSTANT(GL_ALREADY_SIGNALED)
	EXPORT_CONSTANT(GL_TIMEOUT_EXPIRED)
	EXPORT_CONSTANT(GL_CONDITION_SATISFIED)
	EXPORT_CONSTANT(GL_WAIT_FAILED)
	//EXPORT_CONSTANT(GL_TIMEOUT_IGNORED)
	EXPORT_CONSTANT(GL_SYNC_FLUSH_COMMANDS_BIT)
	EXPORT_CONSTANT(GL_SAMPLE_POSITION)
	EXPORT_CONSTANT(GL_SAMPLE_MASK)
	EXPORT_CONSTANT(GL_SAMPLE_MASK_VALUE)
	EXPORT_CONSTANT(GL_MAX_SAMPLE_MASK_WORDS)
	EXPORT_CONSTANT(GL_TEXTURE_2D_MULTISAMPLE)
	EXPORT_CONSTANT(GL_PROXY_TEXTURE_2D_MULTISAMPLE)
	EXPORT_CONSTANT(GL_TEXTURE_2D_MULTISAMPLE_ARRAY)
	EXPORT_CONSTANT(GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_2D_MULTISAMPLE)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY)
	EXPORT_CONSTANT(GL_TEXTURE_SAMPLES)
	EXPORT_CONSTANT(GL_TEXTURE_FIXED_SAMPLE_LOCATIONS)
	EXPORT_CONSTANT(GL_SAMPLER_2D_MULTISAMPLE)
	EXPORT_CONSTANT(GL_INT_SAMPLER_2D_MULTISAMPLE)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE)
	EXPORT_CONSTANT(GL_SAMPLER_2D_MULTISAMPLE_ARRAY)
	EXPORT_CONSTANT(GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY)
	EXPORT_CONSTANT(GL_MAX_COLOR_TEXTURE_SAMPLES)
	EXPORT_CONSTANT(GL_MAX_DEPTH_TEXTURE_SAMPLES)
	EXPORT_CONSTANT(GL_MAX_INTEGER_SAMPLES)
	EXPORT_CONSTANT(GL_VERTEX_ATTRIB_ARRAY_DIVISOR)
	EXPORT_CONSTANT(GL_SRC1_COLOR)
	EXPORT_CONSTANT(GL_ONE_MINUS_SRC1_COLOR)
	EXPORT_CONSTANT(GL_ONE_MINUS_SRC1_ALPHA)
	EXPORT_CONSTANT(GL_MAX_DUAL_SOURCE_DRAW_BUFFERS)
	EXPORT_CONSTANT(GL_ANY_SAMPLES_PASSED)
	EXPORT_CONSTANT(GL_SAMPLER_BINDING)
	EXPORT_CONSTANT(GL_RGB10_A2UI)
	EXPORT_CONSTANT(GL_TEXTURE_SWIZZLE_R)
	EXPORT_CONSTANT(GL_TEXTURE_SWIZZLE_G)
	EXPORT_CONSTANT(GL_TEXTURE_SWIZZLE_B)
	EXPORT_CONSTANT(GL_TEXTURE_SWIZZLE_A)
	EXPORT_CONSTANT(GL_TEXTURE_SWIZZLE_RGBA)
	EXPORT_CONSTANT(GL_TIME_ELAPSED)
	EXPORT_CONSTANT(GL_TIMESTAMP)
	EXPORT_CONSTANT(GL_INT_2_10_10_10_REV)
	EXPORT_CONSTANT(GL_SAMPLE_SHADING)
	EXPORT_CONSTANT(GL_MIN_SAMPLE_SHADING_VALUE)
	EXPORT_CONSTANT(GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET)
	EXPORT_CONSTANT(GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET)
	EXPORT_CONSTANT(GL_TEXTURE_CUBE_MAP_ARRAY)
	EXPORT_CONSTANT(GL_TEXTURE_BINDING_CUBE_MAP_ARRAY)
	EXPORT_CONSTANT(GL_PROXY_TEXTURE_CUBE_MAP_ARRAY)
	EXPORT_CONSTANT(GL_SAMPLER_CUBE_MAP_ARRAY)
	EXPORT_CONSTANT(GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW)
	EXPORT_CONSTANT(GL_INT_SAMPLER_CUBE_MAP_ARRAY)
	EXPORT_CONSTANT(GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY)
	EXPORT_CONSTANT(GL_DRAW_INDIRECT_BUFFER)
	EXPORT_CONSTANT(GL_DRAW_INDIRECT_BUFFER_BINDING)
	EXPORT_CONSTANT(GL_GEOMETRY_SHADER_INVOCATIONS)
	EXPORT_CONSTANT(GL_MAX_GEOMETRY_SHADER_INVOCATIONS)
	EXPORT_CONSTANT(GL_MIN_FRAGMENT_INTERPOLATION_OFFSET)
	EXPORT_CONSTANT(GL_MAX_FRAGMENT_INTERPOLATION_OFFSET)
	EXPORT_CONSTANT(GL_FRAGMENT_INTERPOLATION_OFFSET_BITS)
	EXPORT_CONSTANT(GL_MAX_VERTEX_STREAMS)
	EXPORT_CONSTANT(GL_DOUBLE_VEC2)
	EXPORT_CONSTANT(GL_DOUBLE_VEC3)
	EXPORT_CONSTANT(GL_DOUBLE_VEC4)
	EXPORT_CONSTANT(GL_DOUBLE_MAT2)
	EXPORT_CONSTANT(GL_DOUBLE_MAT3)
	EXPORT_CONSTANT(GL_DOUBLE_MAT4)
	EXPORT_CONSTANT(GL_DOUBLE_MAT2x3)
	EXPORT_CONSTANT(GL_DOUBLE_MAT2x4)
	EXPORT_CONSTANT(GL_DOUBLE_MAT3x2)
	EXPORT_CONSTANT(GL_DOUBLE_MAT3x4)
	EXPORT_CONSTANT(GL_DOUBLE_MAT4x2)
	EXPORT_CONSTANT(GL_DOUBLE_MAT4x3)
	EXPORT_CONSTANT(GL_ACTIVE_SUBROUTINES)
	EXPORT_CONSTANT(GL_ACTIVE_SUBROUTINE_UNIFORMS)
	EXPORT_CONSTANT(GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS)
	EXPORT_CONSTANT(GL_ACTIVE_SUBROUTINE_MAX_LENGTH)
	EXPORT_CONSTANT(GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH)
	EXPORT_CONSTANT(GL_MAX_SUBROUTINES)
	EXPORT_CONSTANT(GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS)
	EXPORT_CONSTANT(GL_NUM_COMPATIBLE_SUBROUTINES)
	EXPORT_CONSTANT(GL_COMPATIBLE_SUBROUTINES)
	EXPORT_CONSTANT(GL_PATCHES)
	EXPORT_CONSTANT(GL_PATCH_VERTICES)
	EXPORT_CONSTANT(GL_PATCH_DEFAULT_INNER_LEVEL)
	EXPORT_CONSTANT(GL_PATCH_DEFAULT_OUTER_LEVEL)
	EXPORT_CONSTANT(GL_TESS_CONTROL_OUTPUT_VERTICES)
	EXPORT_CONSTANT(GL_TESS_GEN_MODE)
	EXPORT_CONSTANT(GL_TESS_GEN_SPACING)
	EXPORT_CONSTANT(GL_TESS_GEN_VERTEX_ORDER)
	EXPORT_CONSTANT(GL_TESS_GEN_POINT_MODE)
	EXPORT_CONSTANT(GL_ISOLINES)
	EXPORT_CONSTANT(GL_QUADS)
	EXPORT_CONSTANT(GL_FRACTIONAL_ODD)
	EXPORT_CONSTANT(GL_FRACTIONAL_EVEN)
	EXPORT_CONSTANT(GL_MAX_PATCH_VERTICES)
	EXPORT_CONSTANT(GL_MAX_TESS_GEN_LEVEL)
	EXPORT_CONSTANT(GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS)
	EXPORT_CONSTANT(GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS)
	EXPORT_CONSTANT(GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_TESS_PATCH_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS)
	EXPORT_CONSTANT(GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS)
	EXPORT_CONSTANT(GL_MAX_TESS_CONTROL_INPUT_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS)
	EXPORT_CONSTANT(GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER)
	EXPORT_CONSTANT(GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER)
	EXPORT_CONSTANT(GL_TESS_EVALUATION_SHADER)
	EXPORT_CONSTANT(GL_TESS_CONTROL_SHADER)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_BINDING)
	EXPORT_CONSTANT(GL_MAX_TRANSFORM_FEEDBACK_BUFFERS)
	EXPORT_CONSTANT(GL_FIXED)
	EXPORT_CONSTANT(GL_IMPLEMENTATION_COLOR_READ_TYPE)
	EXPORT_CONSTANT(GL_IMPLEMENTATION_COLOR_READ_FORMAT)
	EXPORT_CONSTANT(GL_LOW_FLOAT)
	EXPORT_CONSTANT(GL_MEDIUM_FLOAT)
	EXPORT_CONSTANT(GL_HIGH_FLOAT)
	EXPORT_CONSTANT(GL_LOW_INT)
	EXPORT_CONSTANT(GL_MEDIUM_INT)
	EXPORT_CONSTANT(GL_HIGH_INT)
	EXPORT_CONSTANT(GL_SHADER_COMPILER)
	EXPORT_CONSTANT(GL_SHADER_BINARY_FORMATS)
	EXPORT_CONSTANT(GL_NUM_SHADER_BINARY_FORMATS)
	EXPORT_CONSTANT(GL_MAX_VERTEX_UNIFORM_VECTORS)
	EXPORT_CONSTANT(GL_MAX_VARYING_VECTORS)
	EXPORT_CONSTANT(GL_MAX_FRAGMENT_UNIFORM_VECTORS)
	EXPORT_CONSTANT(GL_RGB565)
	EXPORT_CONSTANT(GL_PROGRAM_BINARY_RETRIEVABLE_HINT)
	EXPORT_CONSTANT(GL_PROGRAM_BINARY_LENGTH)
	EXPORT_CONSTANT(GL_NUM_PROGRAM_BINARY_FORMATS)
	EXPORT_CONSTANT(GL_PROGRAM_BINARY_FORMATS)
	EXPORT_CONSTANT(GL_VERTEX_SHADER_BIT)
	EXPORT_CONSTANT(GL_FRAGMENT_SHADER_BIT)
	EXPORT_CONSTANT(GL_GEOMETRY_SHADER_BIT)
	EXPORT_CONSTANT(GL_TESS_CONTROL_SHADER_BIT)
	EXPORT_CONSTANT(GL_TESS_EVALUATION_SHADER_BIT)
	EXPORT_CONSTANT(GL_ALL_SHADER_BITS)
	EXPORT_CONSTANT(GL_PROGRAM_SEPARABLE)
	EXPORT_CONSTANT(GL_ACTIVE_PROGRAM)
	EXPORT_CONSTANT(GL_PROGRAM_PIPELINE_BINDING)
	EXPORT_CONSTANT(GL_MAX_VIEWPORTS)
	EXPORT_CONSTANT(GL_VIEWPORT_SUBPIXEL_BITS)
	EXPORT_CONSTANT(GL_VIEWPORT_BOUNDS_RANGE)
	EXPORT_CONSTANT(GL_LAYER_PROVOKING_VERTEX)
	EXPORT_CONSTANT(GL_VIEWPORT_INDEX_PROVOKING_VERTEX)
	EXPORT_CONSTANT(GL_UNDEFINED_VERTEX)
	EXPORT_CONSTANT(GL_ALIASED_POINT_SIZE_RANGE)
	EXPORT_CONSTANT(GL_RED_BITS)
	EXPORT_CONSTANT(GL_GREEN_BITS)
	EXPORT_CONSTANT(GL_BLUE_BITS)
	EXPORT_CONSTANT(GL_ALPHA_BITS)
	EXPORT_CONSTANT(GL_DEPTH_BITS)
	EXPORT_CONSTANT(GL_STENCIL_BITS)
	EXPORT_CONSTANT(GL_GENERATE_MIPMAP_HINT)
	EXPORT_CONSTANT(GL_LUMINANCE)
	EXPORT_CONSTANT(GL_LUMINANCE_ALPHA)
	EXPORT_CONSTANT(GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS)
	EXPORT_CONSTANT(GL_PRIMITIVE_RESTART_FIXED_INDEX)
	EXPORT_CONSTANT(GL_COPY_READ_BUFFER_BINDING)
	EXPORT_CONSTANT(GL_COPY_WRITE_BUFFER_BINDING)
	EXPORT_CONSTANT(GL_ANY_SAMPLES_PASSED_CONSERVATIVE)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_PAUSED)
	EXPORT_CONSTANT(GL_TRANSFORM_FEEDBACK_ACTIVE)
	EXPORT_CONSTANT(GL_COMPRESSED_R11_EAC)
	EXPORT_CONSTANT(GL_COMPRESSED_SIGNED_R11_EAC)
	EXPORT_CONSTANT(GL_COMPRESSED_RG11_EAC)
	EXPORT_CONSTANT(GL_COMPRESSED_SIGNED_RG11_EAC)
	EXPORT_CONSTANT(GL_COMPRESSED_RGB8_ETC2)
	EXPORT_CONSTANT(GL_COMPRESSED_SRGB8_ETC2)
	EXPORT_CONSTANT(GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2)
	EXPORT_CONSTANT(GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2)
	EXPORT_CONSTANT(GL_COMPRESSED_RGBA8_ETC2_EAC)
	EXPORT_CONSTANT(GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC)
	EXPORT_CONSTANT(GL_TEXTURE_IMMUTABLE_FORMAT)
	EXPORT_CONSTANT(GL_MAX_ELEMENT_INDEX)
	EXPORT_CONSTANT(GL_NUM_SAMPLE_COUNTS)
	EXPORT_CONSTANT(GL_TEXTURE_IMMUTABLE_LEVELS)
}

}
