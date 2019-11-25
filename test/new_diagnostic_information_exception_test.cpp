// Copyright (c) 2019 Pilz GmbH & Co. KG
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include <gtest/gtest.h>
#include <psen_scan/diagnostic_information_exception.h>

using namespace psen_scan;

namespace psen_scan_test
{

TEST(DiagnosticInformationExceptionTest, new_diagnostic_information_exception)
{
  std::string except_str = "DiagnosticInformationException";
  std::unique_ptr<DiagnosticInformationException> e( new DiagnosticInformationException(except_str));
  EXPECT_EQ(except_str, e->what());
}

}