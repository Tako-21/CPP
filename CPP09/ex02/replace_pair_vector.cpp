// std::cout << "END OF MERGE" << std::endl;
	std::vector<std::pair<int, int> >::iterator m_it = _mergeMe.begin();
	std::vector<std::pair<int, int> >::iterator m_end = _mergeMe.end();

	std::vector<std::pair<int, int> >	l_pair;

	l_pair.push_back( std::make_pair(12, 21) );
	l_pair.push_back( std::make_pair(42, 86) );
	std::vector<std::pair<int, int> >::iterator l_it = l_pair.begin();
	for (; m_it != m_end; m_it++ ) {
		_mergeMe.erase(_mergeMe.begin() );
		_mergeMe.insert(_mergeMe.begin(), *l_it);
		std::cout << "first : " << m_it->first << "\tsecond : " << m_it->second << std::endl;
	}