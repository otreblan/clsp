// A C++17 library for language servers.
// Copyright © 2019 otreblan
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef LIBCLSP_MESSAGES_JSONTYPES_H
#define LIBCLSP_MESSAGES_JSONTYPES_H

#include <string>
#include <variant>

namespace libclsp
{

using namespace std;

// Primitive json-rpc types
using String  = string;
using Number  = int;
using Boolean = bool;
using Null    = monostate;

}

#endif /* LIBCLSP_MESSAGES_JSONTYPES_H */
