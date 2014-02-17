//----------------------------------------------------------------------------------------------------

#include <boost/test/unit_test.hpp>
#include <iostream>
#include <Algos/BinarySearch.hpp>
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_SUITE(BinarySearchTests)
//----------------------------------------------------------------------------------------------------

using namespace Algos;
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(Find_whenSortedMultipleElementsVectorsPassed_returnsIterator)
{
	std::vector<int> sorted {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 10};
	int value = 5;

	auto it = BinarySearch(sorted.begin(), sorted.end(), value);

	BOOST_CHECK(it != sorted.end());
	BOOST_CHECK(*it == value);
}
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(Find_whenSortedMultipleElementsVectorsPassed_returnsEndIterator)
{
	std::vector<int> sorted {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 10};
	int value = 22;

	auto it = BinarySearch(sorted.begin(), sorted.end(), value);

	BOOST_CHECK(it == sorted.end());
	BOOST_CHECK(*it != value);
}
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_SUITE_END()
//----------------------------------------------------------------------------------------------------
