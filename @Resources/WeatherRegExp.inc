[Variables]
;-- weather information from http://wxdata.weather.com/wxdata/weather/local/#LocationCode#?cc=*&unit=#UnitCode#&dayf=7
UnitsOfMeasurement = (?siU)<head>.*<locale>(.*)</locale>.*<form>(.*)</form>.*<ut>(.*)</ut>.*<ud>(.*)</ud>.*<us>(.*)</us>.*<up>(.*)</up>.*<ur>(.*)</ur>.*</head>
UOM.locale         = 1
UOM.form           = 2
UOM.temperature    = 3
UOM.distance       = 4
UOM.speed          = 5
UOM.pressure       = 6
UOM.rainfall       = 7

LocationInfo  =(?siU)<loc id="(.*)".*<dnam>(.*)</dnam>.*<tm>(.*)</tm>.*<lat>(.*)</lat>.*<lon>(.*)</lon>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<zone>(.*)</zone>.*</loc>
LOC.code      = 1
LOC.name      = 2
LOC.time      = 3
LOC.latitude  = 4
LOC.longitude = 5
LOC.sunrise   = 6
LOC.sunset    = 7
LOC.timezone  = 8

CurrentWeather = (?siU)<cc>.*<lsup>(.*)</lsup>.*<obst>(.*)</obst>.*<tmp>(.*)</tmp>.*<flik>(.*)</flik>.*<t>(.*)</t>.*<icon>(.*)</icon>.*<bar>.*<r>(.*)</r>.*<d>(.*)</d>.*</bar>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<hmid>(.*)</hmid>.*<vis>(.*)</vis>.*<uv>.*<i>(.*)</i>.*<t>(.*)</t>.*</uv>.*<dewp>(.*)</dewp>.*<moon>.*<icon>(.*)</icon>.*<t>(.*)</t>.*</moon>.*</cc>
CW.lastUpdate          = 1
CW.observatory         = 2
CW.temperature         = 3
CW.feelsLike           = 4
CW.typesOfWeather      = 5
CW.weatherIcon         = 6
CW.barometer           = 7 
CW.barometerTrend      = 8 
CW.windSpeed           = 9 
CW.gust                = 10 
CW.degree              = 11 
CW.typesOfDirection    = 12 
CW.humidity            = 13 
CW.visibility          = 14 
CW.uvIntensity         = 15 
CW.typesOfUV           = 16 
CW.dewPointTemperature = 17
CW.moonIconNo          = 18
CW.typesOfMoonPhase    = 19

Day0Forecast = (?siU)<day d="0" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*</day>.*
Day1Forecast = (?siU)<day d="1" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*</day>.*
Day2Forecast = (?siU)<day d="2" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*</day>.*
Day3Forecast = (?siU)<day d="3" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*</day>.*
Day4Forecast = (?siU)<day d="4" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*</day>.*
Day5Forecast = (?siU)<day d="5" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*</day>.*
Day6Forecast = (?siU)<day d="6" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*</wind>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*</part>.*</day>.*
FC.date                     = 1
FC.day                      = 2
FC.highTemperature          = 3
FC.lowTemperature           = 4
FC.sunrise                  = 5
FC.sunset                   = 6
FC.daily.icon               = 7
FC.daily.weather            = 8
FC.daily.windSpeed          = 9
FC.daily.gust               = 10
FC.daily.degree             = 11
FC.daily.typesOfDirection   = 12
FC.daily.abbrTypesOfWeather = 13
FC.daily.precipitation      = 14
FC.daily.humidity           = 15
FC.night.icon               = 16
FC.night.weather            = 17
FC.night.windSpeed          = 18
FC.night.gust               = 19
FC.night.degree             = 20
FC.night.typesOfDirection   = 21
FC.night.abbrTypesOfWeather = 22
FC.night.precipitation      = 23
FC.night.humidity           = 24

;-- moon phase information from view-source:http://iohelix.net/moon/moonlite.xml?z=#LocationCode#
MoonPhase = (?siU)<data>.*<julianDay>(.*)</julianDay>.*<moon>.*<elongationToSun>(.*)</elongationToSun>.*<percentIlluminated>(.*)</percentIlluminated>.*<age>(.*)</age>.*<phase>(.*)</phase>.*<length>(.*)</length>.*<nextPhase>.*<phase>(.*)</phase>.*<year>(.*)</year>.*<month>(.*)</month>.*<day>(.*)</day>.*<hour>(.*)</hour>.*<minute>(.*)</minute>.*<unix>(.*)</unix>.*<daysToPhase>(.*)</daysToPhase>.*</nextPhase>.*</moon>.*</data>
MP.julianDay          = 1
MP.elongationToSun    = 2
MP.percentIlluminated = 3
MP.moonAge            = 4
MP.moonPhase          = 5
MP.length             = 6
MP.nextMoonPhase      = 7
MP.nextPhaseYear      = 8
MP.nextPhaseMonth     = 9
MP.nextPhaseDay       = 10
MP.nextPhaseHour      = 11
MP.nextPhaseMinute    = 12
MP.nextPhaseUnixTime  = 13
MP.daysToNextPhase    = 14
