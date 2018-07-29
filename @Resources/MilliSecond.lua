local millisecond, lastObserve, varDeterm, diff
function Initialize()
	_, millisecond = math.modf(os.clock())
	lastObserve = os.time()
	diff = os.clock()
end

function Update()
	varDeterm = lastObserve - os.time()
	diff        = varDeterm < 0 and os.clock() or diff
	lastObserve = varDeterm < 0 and os.time()  or lastObserve
	_, millisecond = math.modf(os.clock() - diff)
	return millisecond
end
