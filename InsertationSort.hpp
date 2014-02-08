//----------------------------------------------------------------------------------------------------

#ifndef _INSERTATIONSORT_HPP_8F1DDA07961875183522DEA3F09B9B38
#define _INSERTATIONSORT_HPP_8F1DDA07961875183522DEA3F09B9B38
//----------------------------------------------------------------------------------------------------

#include <algorithm>
//----------------------------------------------------------------------------------------------------

namespace Algos
{
//----------------------------------------------------------------------------------------------------

template <typename I>
void InsertationSort(I first, I last)
{
	I it = first;

	++it;
	while (it < last)
	{
		auto key = *it;
		auto i = it - 1;

		while (i >= first && *i > key)
		{
			std::swap(*i, *(i + 1));
			--i;
		}
		*(i + 1) = key;
		++it;
	}
}
//----------------------------------------------------------------------------------------------------

} // namespace Algos
//----------------------------------------------------------------------------------------------------

#endif // _INSERTATIONSORT_HPP_8F1DDA07961875183522DEA3F09B9B38
//----------------------------------------------------------------------------------------------------
