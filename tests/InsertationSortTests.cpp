//----------------------------------------------------------------------------------------------------

#include <boost/test/unit_test.hpp>

#include <Algos/InsertationSort.hpp>
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_SUITE(InsertationSortTests)
//----------------------------------------------------------------------------------------------------

using namespace Algos;
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(InsertationSort_whenSingleElementVectorPassed_sortsInput)
{
	std::vector<int> input {9, 7};
	std::vector<int> result {7, 9};

	InsertationSort(input.begin(), input.end());

	BOOST_CHECK(input == result);
}
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(InsertationSort_whenTwoElementsVectorPassed_sortsInput)
{
	std::vector<int> input {9};
	std::vector<int> result {9};

	InsertationSort(input.begin(), input.end());

	BOOST_CHECK(input == result);
}
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(InsertationSort_whenLongerVectorPassed_sortsInput)
{
	std::vector<int> input {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	std::vector<int> result {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	InsertationSort(input.begin(), input.end());

	BOOST_CHECK(input == result);
}
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_SUITE_END()
//----------------------------------------------------------------------------------------------------
