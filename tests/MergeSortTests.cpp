//----------------------------------------------------------------------------------------------------

#include <boost/test/unit_test.hpp>
#include <iostream>
#include <MergeSort.hpp>
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_SUITE(MergeSortTests)
//----------------------------------------------------------------------------------------------------

using namespace Algos;
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(Merge_whenSortedMultipleElementsVectorsPassed_sortsAndMergeInput)
{
	std::vector<int> left {0, 2, 4, 6, 8};
	std::vector<int> right {1, 3, 5, 7, 9, 9, 9, 9, 10};
	std::vector<int> output(14, 0);
	std::vector<int> result {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 10};

	Merge(left.begin(), left.end(), right.begin(), right.end(), output.begin());

//	BOOST_CHECK(output == result);

	Merge(right.begin(), right.end(), left.begin(), left.end(), output.begin());

//	BOOST_CHECK(output == result);
}
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(Merge_whenSortedSingleElementVectorsPassed_sortsAndMergeInput)
{
	std::vector<int> left {0};
	std::vector<int> right {1};
	std::vector<int> output(2, 99);
	std::vector<int> result {0, 1};

	Merge(left.begin(), left.end(), right.begin(), right.end(), output.begin());

	BOOST_CHECK(output == result);

	Merge(right.begin(), right.end(), left.begin(), left.end(), output.begin());

	BOOST_CHECK(output == result);
}
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(MergeSort_whenMultipleElementsVectorPassed_sortsInput)
{
	std::vector<int> buff(14, 99);
	std::vector<int> input {5, 10, 9, 9, 4, 1, 6, 2, 8, 3, 9, 9, 7, 0};
	std::vector<int> result {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 10};

	MergeSort(input.begin(), input.end(), buff.begin());

	BOOST_CHECK(input == result);
}
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(MultiThreadMergeSort_whenTwoElementsVectorPassed_sortsInput)
{
	std::vector<int> buff(2, 99);
	std::vector<int> input {2, 1};
	std::vector<int> result {1, 2};

	MergeSort(input.begin(), input.end(), buff.begin(), 4);

	BOOST_CHECK(input == result);
}
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(MultiThreadMergeSort_whenMultipleElementsVectorPassed_sortsInput)
{
	std::vector<int> buff(14, 99);
	std::vector<int> input {5, 10, 9, 9, 4, 1, 6, 2, 8, 3, 9, 9, 7, 0};
	std::vector<int> result {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 10};

	MergeSort(input.begin(), input.end(), buff.begin(), 4);

	BOOST_CHECK(input == result);
}
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_SUITE_END()
//----------------------------------------------------------------------------------------------------
