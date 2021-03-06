//----------------------------------------------------------------------------------------------------

#include <boost/test/unit_test.hpp>

#include <Algos/MergeSort.hpp>
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_SUITE(MergeSortTests)
//----------------------------------------------------------------------------------------------------

using namespace Algos;
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
