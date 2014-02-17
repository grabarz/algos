//----------------------------------------------------------------------------------------------------

#ifndef _MERGESORT_HPP_D0E4890F32C86BBFA47AA3CB4FD08BE7
#define _MERGESORT_HPP_D0E4890F32C86BBFA47AA3CB4FD08BE7
//----------------------------------------------------------------------------------------------------

#include <algorithm>
#include <cstddef>
#include <thread>

#include <Algos/Merge.hpp>
//----------------------------------------------------------------------------------------------------

namespace Algos
{
//----------------------------------------------------------------------------------------------------

template <typename I>
void MergeSort(I first, I last, I buff) noexcept
{
	auto size = last - first;

	if (size == 1)
		return;

	auto half = size / 2;

	MergeSort(first, first + half, buff);
	MergeSort(first + half, last, buff + half);
	Merge(first, first + half, first + half, last, buff);
	std::copy(buff, buff + size, first);
}
//----------------------------------------------------------------------------------------------------

template <typename I>
void MergeSort(I first, I last, I buff, std::size_t threads)
{
	auto size = last - first;

	if (size == 1)
		return;

	auto half = size / 2;

	if (threads > 1)
	{
		void (*func)(I, I, I, std::size_t) = &MergeSort<I>; // choosing right version of MergeSort
		std::thread thr(func, first, first + half, buff, threads - 1);

		MergeSort(first + half, last, buff + half, threads - 2);

		thr.join();
	}
	else
	{
		MergeSort(first, first + half, buff);
		MergeSort(first + half, last, buff + half);
	}

	Merge(first, first + half, first + half, last, buff);
	std::copy(buff, buff + size, first);
}
//----------------------------------------------------------------------------------------------------

} // namespace Algos
//----------------------------------------------------------------------------------------------------

#endif // _MERGESORT_HPP_D0E4890F32C86BBFA47AA3CB4FD08BE7
//----------------------------------------------------------------------------------------------------
