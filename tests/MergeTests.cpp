//----------------------------------------------------------------------------------------------------

#include <boost/test/unit_test.hpp>

#include <Algos/Merge.hpp>
//----------------------------------------------------------------------------------------------------

BOOST_AUTO_TEST_SUITE(MergeTests)
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

	BOOST_CHECK(output == result);

	Merge(right.begin(), right.end(), left.begin(), left.end(), output.begin());

	BOOST_CHECK(output == result);
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

BOOST_AUTO_TEST_SUITE_END()
//----------------------------------------------------------------------------------------------------
