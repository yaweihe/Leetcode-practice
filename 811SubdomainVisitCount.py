class Solution(object):
    def subdomainVisits(self, cpdomains):
        """
        :type cpdomains: List[str]
        :rtype: List[str]
        """
        domain_counts = collections.defaultdict(int)
        for cpdomain in cpdomains:
            times, domains = cpdomain.split()
            times = int(times)
            domain_counts[domains] += times
            while '.' in domains:
                domains = domains[domains.index('.') + 1:]
                domain_counts[domains] += times
        return [str(v) + ' ' + d for d, v in domain_counts.items()]
