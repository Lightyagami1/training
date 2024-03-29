#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/cURLpp.hpp>
#include <iostream>
#include <fstream>
#include <string>

using std::operator""s;

namespace
{
    unsigned ln = 1;
    auto Color(int n, const std::string& s) { return "\33[38;5;"+std::to_string(n)+'m'+s+"\33[m"; }
    auto Line(int l) { int m=l-ln; ln=l; return "\r"+(m<0?"\33["+std::to_string(-m)+'A':std::string(m,'\n')); }

    void Download(const std::string& url, const std::string& filename, unsigned line)
    {
        std::ofstream of(filename);

        cURLpp::Easy req;
        req.setOpt(cURLpp::Options::Url(url));
        req.setOpt(cURLpp::Options::NoProgress(false));
        req.setOpt(cURLpp::Options::FollowLocation(true));
        req.setOpt(cURLpp::Options::ProgressFunction([&](std::size_t total, std::size_t done, auto...)
        {
            std::cout << Line(line) << Color(143, filename + ": ") << done << " of " << total
                      << " bytes received (" << int(total ? done*100./total : 0) << "%)" << std::flush;
            return 0;
        }));
        req.setOpt(cURLpp::Options::WriteFunction([&](const char* p, std::size_t size, std::size_t nmemb)
        {
            of.write(p, size*nmemb);
            return size*nmemb;
        }));
        req.perform();
    }

    auto root = "http://iki.fi/bisqwit/ctu85/"s; // http://www.unicode.org/Public/MAPPINGS/ISO8859/
}

int main()
{
    cURLpp::initialize();
    unsigned line=1;

    for(const auto& p: {"8859-1.TXT"s, "8859-2.TXT"s, "8859-3.TXT"s, "8859-4.TXT"s, "8859-5.TXT"s,
                        "8859-6.TXT"s, "8859-7.TXT"s, "8859-8.TXT"s, "8859-9.TXT"s, "8859-10.TXT"s,
                        "8859-11.TXT"s,"8859-13.TXT"s,"8859-14.TXT"s,"8859-15.TXT"s,"8859-16.TXT"s})
    {
        Download(root+p, p, line++);
    }

    std::cout << Line(line) << std::endl;
}


