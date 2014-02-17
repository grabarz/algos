//----------------------------------------------------------------------------------------------------

#ifndef _MERGE_HPP_3B3DAB74784AD82021B4249B97480113
#define _MERGE_HPP_3B3DAB74784AD82021B4249B97480113
//----------------------------------------------------------------------------------------------------

#include <algorithm>
//----------------------------------------------------------------------------------------------------

namespace Algos
{
//----------------------------------------------------------------------------------------------------

template <typename I>
void Merge(I beginLeft, I endLeft, I beginRight, I endRight, I output) noexcept
{
	while (1)
	{
		if (beginLeft == endLeft)
		{
			std::copy(beginRight, endRight, output);
			return;
		}
		else if (beginRight == endRight)
		{
			std::copy(beginLeft, endLeft, output);
			return;
		}

		if (*beginLeft < *beginRight)
		{
			*output = *beginLeft;
			++beginLeft;
		}
		else
		{
			*output = *beginRight;
			++beginRight;
		}

		++output;
	}
}
//----------------------------------------------------------------------------------------------------

} // namespace Algos
//----------------------------------------------------------------------------------------------------

#endif // _MERGE_HPP_3B3DAB74784AD82021B4249B97480113
//----------------------------------------------------------------------------------------------------
